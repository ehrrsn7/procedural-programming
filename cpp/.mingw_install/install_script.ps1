$zipPath = "$PSScriptRoot\winlibs-x86_64-posix-seh-gcc-14.2.0-mingw-w64ucrt-12.0.0-r3.zip"
$installDir = "$env:USERPROFILE\mingw"

# Ensure the ZIP file exists before proceeding
if (-not (Test-Path $zipPath)) {
    throw "Error: ZIP file not found at $zipPath"
}

# Ensure the installation directory exists
if (-not (Test-Path $installDir)) {
    New-Item -ItemType Directory -Path $installDir | Out-Null
} else {
    Write-Warning "Installation directory already exists: $installDir"
}

# Extract the ZIP archive using Expand-Archive
try {
    if ((Get-ChildItem $installDir) -ne $null) {
        Write-Warning "Skipping extraction: $installDir is not empty."
    } else {
        Expand-Archive -Path $zipPath -DestinationPath $installDir -Force
        Write-Host "Extraction complete: $installDir" -ForegroundColor Green
    }
} catch {
    throw "Error extracting the ZIP file: $_"
}

# Add install directory to PATH if not already present
$binPath = Join-Path $installDir "bin"
$existingPath = [System.Environment]::GetEnvironmentVariable("Path", "User") -replace ";;", ";" # Cleanup double semicolons

if ($existingPath -notlike "*$binPath*") {
    $newPath = if ($existingPath) { "$existingPath;$binPath" } else { $binPath }
    [System.Environment]::SetEnvironmentVariable("Path", $newPath, "User")
    Write-Host "Added $binPath to PATH" -ForegroundColor Cyan
} else {
    Write-Warning "Mingw-w64 bin directory is already in PATH"
}

# Refresh PATH variable in current session
$env:Path = [System.Environment]::GetEnvironmentVariable("Path", "User")

# Verify the g++ installation
try {
    g++ --version
    Write-Host "Mingw-w64 installed successfully to $installDir" -ForegroundColor Green
} catch {
    throw "Error: g++ is not recognized. Try restarting your session."
}
