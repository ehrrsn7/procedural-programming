# Define
$dotnetUrl = "https://builds.dotnet.microsoft.com/dotnet/Sdk/9.0.300/dotnet-sdk-9.0.300-win-x86.zip"
$installDir = "$env:USERPROFILE\dotnet"
$dotnetArchiveSizeMB = 189.44
$dotnetArchiveSizeBytes = [math]::Round($dotnetArchiveSizeMB * 1MB)

# Check if dotnet is already installed
$dotnetAlreadyInstalled = Test-Path (Join-Path $installDir "dotnet.exe")
$dotnetOnPathWorks = $false
try {
    dotnet --version | Out-Null
    $dotnetOnPathWorks = $true
} catch {
    $dotnetOnPathWorks = $false
}

if ($dotnetAlreadyInstalled -and $dotnetOnPathWorks) {
    Write-Host ".NET SDK already found at $installDir and 'dotnet' on PATH is working.`nSkipping download and installation." -ForegroundColor Green
    Write-Output (Join-Path $installDir "dotnet.exe")
    exit 0
}

Write-Host "`n`n`n`n`n"
Write-Host "The .NET download will be $dotnetArchiveSizeMB MB ($dotnetArchiveSizeBytes bytes)." -ForegroundColor Yellow
Write-Host "`$installDir: $installDir"
Write-Host "`$dotnetUrl: $dotnetUrl"

# Create install dir
if (-Not (Test-Path -Path $installDir)) {
    New-Item -ItemType Directory -Path $installDir | Out-Null
    Write-Host "Created install directory at $installDir" -ForegroundColor Green
} else {
    Write-Host "Install directory already exists at $installDir" -ForegroundColor Cyan
}

# Download .NET SDK zip
Write-Host "Downloading .NET SDK..." -ForegroundColor Yellow
$zipFile = "$env:TEMP\dotnet_sdk_$([guid]::NewGuid()).zip"
Invoke-WebRequest -Uri $dotnetUrl -OutFile $zipFile
Write-Host "Downloaded to $zipFile" -ForegroundColor Green

# Extract
try {
    Add-Type -AssemblyName System.IO.Compression.FileSystem
} catch {
    Write-Host "Cannot load compression libs. Bailing out." -ForegroundColor Red
    exit 1
}

Write-Host "Extracting .NET SDK to $installDir..." -ForegroundColor Yellow
[System.IO.Compression.ZipFile]::ExtractToDirectory($zipFile, $installDir)
Write-Host "Extraction complete." -ForegroundColor Green

# Clean up
Remove-Item -Path $zipFile
Write-Host "Removed downloaded zip." -ForegroundColor Green

# Add to PATH if needed
$dotnetDirOnPath = $false
$path = [System.Environment]::GetEnvironmentVariable("Path", [System.EnvironmentVariableTarget]::User)
if ($path -match [regex]::Escape($installDir)) {
    $dotnetDirOnPath = $true
}

if (-not $dotnetDirOnPath) {
    $newPath = "$path;$installDir"
    [System.Environment]::SetEnvironmentVariable("Path", $newPath, [System.EnvironmentVariableTarget]::User)
    Write-Host ".NET install dir added to user PATH." -ForegroundColor Green
} else {
    Write-Host ".NET install dir already in user PATH." -ForegroundColor Cyan
}

# Verify installation
Write-Host "Verifying .NET SDK installation..." -ForegroundColor Yellow
$dotnetExe = Join-Path $installDir "dotnet.exe"

try {
    & $dotnetExe --version
    Write-Host ".NET SDK installation verified successfully." -ForegroundColor Green
} catch {
    Write-Host "Failed to run dotnet.exe: $_" -ForegroundColor Red
}

try {
    dotnet --version
    Write-Host "Successfully verified 'dotnet' from PATH." -ForegroundColor Green
} catch {
    Write-Host "'dotnet' not working from PATH yet." -ForegroundColor Yellow
    $response = Read-Host "Restart or log out required to finalize PATH. Restart now? (y/n)"
    if ($response -eq 'y') {
        Restart-Computer
    } else {
        Write-Host "Please log out and back in to refresh PATH." -ForegroundColor Yellow
    }
}
