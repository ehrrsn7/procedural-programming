# Define
$jdkUrl = "https://download.oracle.com/java/21/latest/jdk-21_windows-x64_bin.zip" # Define the URL for the OpenJDK binary
$installDir = "$env:USERPROFILE\openjdk" # Define the installation directory
$jdkArchiveSizeMB = 229.51 # Size of the archive in MB
$jdkArchiveSizeBytes = [math]::Round($jdkArchiveSizeMB * 1MB)

# Check if JDK is already installed in $installDir
$jdkAlreadyInstalled = Test-Path (Join-Path $installDir "jdk*")

# Check if java on PATH is working
$javaOnPathWorks = $false
try {
    java --version | Out-Null
    $javaOnPathWorks = $true
} catch {
    $javaOnPathWorks = $false
}

if ($jdkAlreadyInstalled -and $javaOnPathWorks) {
    Write-Host "JDK installation already found at $installDir and 'java' on PATH is working.`nSkipping download and installation." -ForegroundColor Green
    $jdkDir = Get-ChildItem -Directory $installDir | Where-Object { $_.Name -like "jdk*" } | Select-Object -First 1
    if ($jdkDir) {
        $javaExe = Join-Path $jdkDir.FullName "bin\java.exe"
        Write-Output $javaExe
    }
    exit 0
}

# Debug Output
Write-Host "`$installDir: $installDir`n`n`n`n`n"
Write-Host "`$jdkUrl: $jdkUrl`n`n`n`n`n"
Write-Host "The OpenJDK download will be $jdkArchiveSizeMB MB                 ($jdkArchiveSizeBytes bytes)." -ForegroundColor Yellow

# Create the installation directory if it doesn't exist
Write-Host "Creating installation directory if it doesn't exist..." -ForegroundColor Yellow
if (-Not (Test-Path -Path $installDir)) {
    New-Item -ItemType Directory -Path $installDir | Out-Null
    Write-Host "Installation directory created at $installDir." -ForegroundColor Green
} else {
    Write-Host "Installation directory already exists at $installDir." -ForegroundColor Cyan
}

# Download the OpenJDK binary
Write-Host "Downloading OpenJDK binary from $jdkUrl..." -ForegroundColor Yellow
$zipFile = "$env:TEMP\openjdk.zip"
Invoke-WebRequest -Uri $jdkUrl -OutFile $zipFile
Write-Host "OpenJDK binary downloaded to $zipFile." -ForegroundColor Green

# Extract the OpenJDK binary
Write-Host "Extracting OpenJDK binary to $installDir..." -ForegroundColor Yellow

# Remove previous JDK installation if present
$existingJdkDirs = Get-ChildItem -Directory $installDir | Where-Object { $_.Name -like "jdk*" }
if ($existingJdkDirs) {
    foreach ($dir in $existingJdkDirs) {
        Write-Host "Removing previous JDK installation at $($dir.FullName)..." -ForegroundColor Yellow
        try {
            Remove-Item -Recurse -Force -Path $dir.FullName
            Write-Host "Removed $($dir.FullName)." -ForegroundColor Green
        } catch {
            Write-Host "Failed to remove $($dir.FullName): $_" -ForegroundColor Red
            exit 1
        }
    }
}

# Checks for the required .NET Framework version and loads the necessary assembly for zip extraction.
# If any step fails, the catch block notifies the user and exits the script.
try {
    Get-ChildItem "HKLM:\SOFTWARE\Microsoft\NET Framework Setup\NDP\v4\Full" | Get-ItemPropertyValue -Name Release
    [AppDomain]::CurrentDomain.GetAssemblies() | Select-String "Compression"
    # For zip extraction, we need to load the System.IO.Compression.FileSystem assembly
    Add-Type -AssemblyName System.IO.Compression.FileSystem
} catch {
    Write-Host "Required .NET assembly for zip extraction not found. Cannot continue." -ForegroundColor Red
    exit 1
}

[System.IO.Compression.ZipFile]::ExtractToDirectory($zipFile, $installDir)
Write-Host "OpenJDK binary extracted to $installDir." -ForegroundColor Green

# Clean up the downloaded zip file
Write-Host "Cleaning up the downloaded zip file..." -ForegroundColor Yellow
Remove-Item -Path $zipFile
Write-Host "Downloaded zip file removed." -ForegroundColor Green

# Find the extracted JDK directory
$jdkDir = Get-ChildItem -Directory $installDir | Where-Object { $_.Name -like "jdk*" } | Select-Object -First 1
if ($jdkDir) {
    $javaBin = Join-Path $jdkDir.FullName "bin"
    # Set JAVA_HOME to the actual JDK directory
    [System.Environment]::SetEnvironmentVariable("JAVA_HOME", $jdkDir.FullName, [System.EnvironmentVariableTarget]::User)
    Write-Host "JAVA_HOME set to $($jdkDir.FullName)." -ForegroundColor Green

    # Add JDK bin to the user PATH if not already present
    $path = [System.Environment]::GetEnvironmentVariable("Path", [System.EnvironmentVariableTarget]::User)
    if ($path -notmatch [regex]::Escape($javaBin)) {
        $newPath = "$path;$javaBin"
        [System.Environment]::SetEnvironmentVariable("Path", $newPath, [System.EnvironmentVariableTarget]::User)
        Write-Host "JDK bin directory added to the user PATH." -ForegroundColor Green
    } else {
        Write-Host "JDK bin directory is already in the user PATH." -ForegroundColor Cyan
    }
} else {
    Write-Host "Could not find JDK version directory under $installDir." -ForegroundColor Red
}

# Verify the installation
Write-Host "Verifying the OpenJDK installation..." -ForegroundColor Yellow

# Try to find the JDK version directory and test the java executable directly
try {
    $jdkDir = Get-ChildItem -Directory $installDir | Where-Object { $_.Name -like "jdk*" } | Select-Object -First 1
    if ($jdkDir) {
        $javaExe = Join-Path $jdkDir.FullName "bin\java.exe"
        Write-Host "Testing Java executable at: $javaExe" -ForegroundColor Cyan
        & $javaExe --version
    } else {
        Write-Host "Could not find JDK version directory under $installDir." -ForegroundColor Red
    }
    Write-Host "OpenJDK installation completed successfully." -ForegroundColor Green
} catch {
    Write-Host "Error trying to run java.exe directly: $_" -ForegroundColor Red
}

# Existing PATH-based check
try {
    Write-Host "Testing 'java --version' from PATH..." -ForegroundColor Cyan
    java --version
} catch {
    Write-Host "Error trying to run 'java --version': $_" -ForegroundColor Red
    Write-Host "This may be because your environment variables have not been refreshed." -ForegroundColor Yellow
    $response = Read-Host "Would you like to restart your computer now to apply changes? (y/n)"
    if ($response -eq 'y') {
        Write-Host "Restarting your computer..." -ForegroundColor Yellow
        Restart-Computer
    } else {
        Write-Host "Please log out and log back in, or restart your computer, to apply the changes." -ForegroundColor Yellow
    }
}
