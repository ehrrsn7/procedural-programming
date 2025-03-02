param (
    [switch]$Reinstall
)

$InstallerPath = "$PSScriptRoot\msys2-x86_64-20250221.exe"
$InstallDir = "$env:USERPROFILE\msys2"
$UninstallerPath = "$InstallDir\uninstall.exe"
if ($args -contains "--reinstall") { $Reinstall = $true }

# Uninstall previous installation if it exists and --reinstall is specified
if ($Reinstall) {
    Write-Host "Uninstalling previous installation..."
    if ((Test-Path $UninstallerPath) -and (Test-Path $InstallDir)) {
        try {
            & $UninstallerPath --confirm-command --accept-messages
            Write-Host "Previous installation uninstalled successfully."
        } catch {
            Write-Host "Failed to uninstall the previous installation." -ForegroundColor Red
            throw $_
        }
    } elseif (Test-Path $InstallDir) {
        Write-Host "Uninstaller not found. Removing installation directory..."
        Remove-Item -Recurse -Force $InstallDir
        Write-Host "Installation directory removed successfully."
    } else {
        Write-Host "No previous installation found."
    }
} else {
    Write-Host "Skipping uninstallation. Use --reinstall to uninstall the previous installation."
}

# Create a temporary script to select components
$ComponentScript = @"
function ComponentSelectionPageCallback() {
    var widget = gui.pageWidgetByObjectName("ComponentSelectionPage");
    widget.deselectAll();
    widget.selectComponent("com.msys2.root");
    widget.selectComponent("mingw64");
}
"@

$ScriptPath = [System.IO.Path]::Combine($env:TEMP, "msys2_install_script.qs")
Set-Content -Path $ScriptPath -Value $ComponentScript

try {
    # Start the installer with specified options
    Write-Host "Starting the installer..."
    & $InstallerPath in --confirm-command --accept-messages --root $InstallDir --script $ScriptPath
    Write-Host "Installer completed successfully."
} catch {
    Write-Host "Failed to start the installer." -ForegroundColor Red
    throw $_
}

try {
    # Add the mingw64\bin folder to the PATH environment variable
    Write-Host "Adding mingw64\bin to the PATH environment variable..."
    $MingwBinPath = "$InstallDir\mingw64\bin"
    [System.Environment]::SetEnvironmentVariable("Path", $env:Path + ";$MingwBinPath", [System.EnvironmentVariableTarget]::User)
    Write-Host "PATH environment variable updated successfully."
} catch {
    Write-Host "Failed to update the PATH environment variable." -ForegroundColor Red
    throw $_
}

# Note that the user might need to restart the terminal for the changes to take effect
Write-Host "Installation complete. Please restart the terminal to use the new PATH."
