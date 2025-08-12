# Get the current directory where the script is being run
$currentDir = (Get-Location).Path

# Check if the script is being run in the 'stretch-programs\cpp' directory
if ($currentDir -like "*stretch-programs\cpp") {
    # Construct the path to the 'bin' folder (corrected)
    $binPath = Join-Path -Path $currentDir -ChildPath ".etc\winlibs\mingw64\bin"

    # Get the current user-level PATH
    $currentPath = [System.Environment]::GetEnvironmentVariable("Path", "User")

    # Check if the binPath is already in the PATH
    if ($currentPath -notlike "*$binPath*") {
        # Add the binPath to the beginning of the user-level PATH
        $newPath = "$binPath;$currentPath"
        [System.Environment]::SetEnvironmentVariable("Path", $newPath, "User")

        # Verify by printing the bin folder found in the PATH
        if ([System.Environment]::GetEnvironmentVariable("Path", "User") -like "*$binPath*") {
            Write-Host "Verified: The bin folder is now prioritized in the user-level PATH: $binPath"
        } else {
            Write-Host "Verification failed: The bin folder is not in the user-level PATH."
        }
    } else {
        # Verify by printing the bin folder found in the PATH
        if ([System.Environment]::GetEnvironmentVariable("Path", "User") -like "*$binPath*") {
            Write-Host "Verified: The bin folder is already in the user-level PATH: $binPath"
        } else {
            Write-Host "Verification failed: The bin folder is not in the user-level PATH."
        }
    }
} else {
    Write-Host "This script must be run from the 'stretch-programs\cpp' directory."
}

# Test if g++.exe is available in the current session
try {
    Write-Host "& g++.exe --version" -ForegroundColor Green
    $gppVersion = & g++.exe --version 2>$null
    if ($LASTEXITCODE -eq 0) {
        Write-Host "Success: g++.exe is available. Version info:" -ForegroundColor Green
        Write-Host $gppVersion
    } else {
        throw "g++.exe is not available in this session."
    }
} catch {
    Write-Host "Warning: g++.exe isn't available in this session." -ForegroundColor Red # add throw message
    Write-Host "Exception Message:" $_.Exception.Message -ForegroundColor Red
    Write-Host "You may need to sign out and sign back in for PATH changes to take effect." -ForegroundColor Red
        
    # Restart the machine
    # Prompt the user for confirmation
    $confirmation = Read-Host "Do you want to restart the computer now? (Y/N)"
    if ($confirmation -eq 'Y' -or $confirmation -eq 'y') {
        Write-Host "Restarting the computer..." -ForegroundColor Green
        # Uncomment the line below to actually restart the computer
        Restart-Computer -Force
    }

    exit 1
}
