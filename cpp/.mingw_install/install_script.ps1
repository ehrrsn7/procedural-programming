# note that it's fairly technical ---
# - each of the .7z filles make up different parts of the standalone build of GCC and MinGW-w64 for Windows. they are compressed separately for the sake of github (no files >100 MB)
# - the .zip file is a portable executable for 7zip -- in case the computers this will be shipped to doesn't have it. I've included this zipped normally for the sake of the .7z files. This needs to be extracted prior to extracting any of the other files.

# my script needs to:
# - extract 7-zipportable.zip to $env:userprofile/7-ZipPortable/ (do a check first to skip)
# - set a variable (in the powershell script) to $env:userprofile/7-ZipPortable/App/7-Zip/7z.exe so we can call it again
# - Now that 7-zip is available, extract each of the 7z files to $env:userprofile/MinGW/ (do a check first to skip if already installed)
#    - 7z files are:
#      bin.7z
#      include.7z
#      lib.7z
#      libexec.7z
#      share.7z
#      version_info.txt.7z
#      x86_64-w64-mingw32.7z
# - add $env:userprofile/MinGW/bin to the PATH User variable

# Define
$7z = "$env:userprofile\7-ZipPortable\App\7-Zip\7z.exe" # Not extracted yet
$Mingw = "$env:userprofile\mingw\mingw64" # Not extracted yet
$mingw_files = @(
    "$PSScriptRoot\bin.7z",
    "$PSScriptRoot\include.7z",
    "$PSScriptRoot\lib.7z",
    "$PSScriptRoot\libexec.7z",
    "$PSScriptRoot\share.7z",
    "$PSScriptRoot\version_info.txt.7z",
    "$PSScriptRoot\x86_64-w64-mingw32.7z"
)

try { # Extract 7-zipportable.zip to $env:userprofile/7-ZipPortable/
    # Check if already extracted
    if (!(Test-Path "$env:userprofile\7-ZipPortable")) {
        Write-Host "Extracting 7-ZipPortable.zip to $env:userprofile\7-ZipPortable"
        Expand-Archive -Path "$PSScriptRoot\7-zipportable.zip" -DestinationPath "$env:userprofile\7-ZipPortable"
    }
    else {
        Write-Warning "7-ZipPortable already extracted"
    }
}
catch {
    Throw "Failed to extract 7-ZipPortable.zip"
}

try { # With 7z now available decompress mingw files into $env:userprofile/mingw/mingw64
    # Check if already extracted
    if (!(Test-Path $Mingw)) {
        # Create directory $env:userprofile/mingw/mingw64 for extraction
        New-Item -ItemType Directory -Path $Mingw
        Write-Host "Extracting mingw files to $Mingw"
        # Extract each of the 7z files to $env:userprofile/mingw/mingw64
        foreach ($file in $mingw_files) {
            # Loop through each of the files in the array
            & $7z x -y -o"$Mingw" $file
            Write-Host "Extracted $file to $Mingw" -ForegroundColor Green
        }
    }
    else {
        Write-Warning "Mingw already extracted"
    }
}
catch {
    Throw "Error while extracting mingw files"
}

try { # Now that mingw is extracted, set the path
    $path = [System.Environment]::GetEnvironmentVariable("Path", "User")
    if ($path -notlike "*$Mingw\bin*") {
        Write-Host "Adding $Mingw\bin to PATH"
        [System.Environment]::SetEnvironmentVariable("Path", "$path;$Mingw\bin", "User")
    }
    else {
        Write-Warning "$Mingw\bin already in PATH"
    }
}
catch {
    Throw "Error while setting PATH"
}

Write-Host "Installation complete"
