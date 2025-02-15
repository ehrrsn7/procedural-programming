$nodeUrl = "https://nodejs.org/dist/v23.7.0/node-v23.7.0-win-x64.zip"
$destinationPath = "$env:USERPROFILE\Downloads\node-v23.7.0-win-x64.zip"
$extractPath = "$env:USERPROFILE\nodejs"

# Download Node.js portable version
Invoke-WebRequest -Uri $nodeUrl -OutFile $destinationPath -UseBasicParsing
Write-Host "Node.js portable version downloaded successfully to $destinationPath"

# Extract the zip file
Expand-Archive -Path $destinationPath -DestinationPath $extractPath -Force
Write-Host "Node.js extracted to $extractPath"

# Add Node.js to PATH
$env:Path = "$extractPath\node-v23.7.0-win-x64;$env:Path"
[System.Environment]::SetEnvironmentVariable("Path", $env:Path, [System.EnvironmentVariableTarget]::User)
Write-Host "Node.js added to PATH"

# Verify Installation
Write-Host "Node JavaScript Runtime (node) version: $(node -v)"
Write-Host "Node Package Manager    (npm)  version: $(npm -v)"
