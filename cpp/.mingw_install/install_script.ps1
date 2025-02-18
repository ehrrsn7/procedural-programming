# Define the path to the zip file and the target extraction directory
$zipFilePath = "./.mingw_install/mingw-w64-v12.0.0.zip"
$targetDirectory = [System.IO.Path]::Combine($env:TEMP, "mingw-w64")
$installerPath = "$targetDirectory/mingw-w64-v12.0.0/mingw64/bin/mingw-w64-install.exe"

# Create the target directory if it doesn't exist
if (-not (Test-Path $targetDirectory)) {
    New-Item -ItemType Directory -Force -Path $targetDirectory
}

# Extract the zip file
Expand-Archive -Path $zipFilePath -DestinationPath $targetDirectory

# Check if the installer exists
if (-NOT (Test-Path $installerPath)) {
    Write-Host "Installer not found in the extracted files."
    exit 1
}

# Run the installer
Write-Host "Extraction complete. Running installer..."

# Run the installer
Start-Process -FilePath $installerPath -Wait
Write-Host "Installer executed successfully."
