# Define the URL for the OpenJDK binary
$jdkUrl = "https://download.oracle.com/java/21/latest/jdk-21_windows-x64_bin.zip"

# Define the installation directory
$installDir = "$env:USERPROFILE\openjdk"

# Create the installation directory if it doesn't exist
Write-Output "Creating installation directory if it doesn't exist..."
if (-Not (Test-Path -Path $installDir)) {
    New-Item -ItemType Directory -Path $installDir
    Write-Output "Installation directory created at $installDir."
} else {
    Write-Output "Installation directory already exists at $installDir."
}

# Download the OpenJDK binary
Write-Output "Downloading OpenJDK binary from $jdkUrl..."
$zipFile = "$env:TEMP\openjdk.zip"
Invoke-WebRequest -Uri $jdkUrl -OutFile $zipFile
Write-Output "OpenJDK binary downloaded to $zipFile."

# Extract the OpenJDK binary
Write-Output "Extracting OpenJDK binary to $installDir..."
$archive = [System.IO.Compression.ZipFile]::OpenRead($zipFile)
foreach ($entry in $archive.Entries) {
    $destinationPath = [System.IO.Path]::Combine($installDir, $entry.FullName)
    if (-Not (Test-Path -Path $destinationPath)) {
        $entry.ExtractToFile($destinationPath)
        Write-Output "Extracted: $destinationPath"
    } else {
        Write-Output "Skipped (already exists): $destinationPath"
    }
}
$archive.Dispose()
Write-Output "OpenJDK binary extracted to $installDir."

# Clean up the downloaded zip file
Write-Output "Cleaning up the downloaded zip file..."
Remove-Item -Path $zipFile
Write-Output "Downloaded zip file removed."

# Set the JAVA_HOME environment variable for the current user
Write-Output "Setting JAVA_HOME environment variable..."
[System.Environment]::SetEnvironmentVariable("JAVA_HOME", $installDir, [System.EnvironmentVariableTarget]::User)
Write-Output "JAVA_HOME set to $installDir."

# Add JAVA_HOME to the user PATH
Write-Output "Adding JAVA_HOME to the user PATH..."
$path = [System.Environment]::GetEnvironmentVariable("Path", [System.EnvironmentVariableTarget]::User)
if ($path -notcontains "$installDir\bin") {
    $newPath = "$path;$installDir\bin"
    [System.Environment]::SetEnvironmentVariable("Path", $newPath, [System.EnvironmentVariableTarget]::User)
    Write-Output "JAVA_HOME added to the user PATH."
} else {
    Write-Output "JAVA_HOME is already in the user PATH."
}

Write-Output "OpenJDK installation completed successfully."

# Verify the installation
Write-Output "Verifying the OpenJDK installation..."
java --version
