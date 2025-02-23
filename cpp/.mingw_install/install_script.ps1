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
        Write-Warning "7-ZipPortable already extracted, console executable found here: $7z"
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
        Write-Warning "Mingw already extracted; g++ found at $Mingw\bin\g++.exe"
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

# Almost forgot. Check to see if g++ command works and c++ test files compile, as a final check
Write-Host "Checking g++ command"
$gpp = & g++ --version
if ($gpp -like "*g++*") {
    Write-Host "g++ command works"
    Write-Host $gpp
}
else {
    Throw "g++ command failed"
}

# Call cpp\.mingw_install\test\test.ps1
# Run the test script
try {
    # Set the working directory to the test directory
    Push-Location -Path "$PSScriptRoot\test"
    .\test.ps1
}
catch {
    Write-Error "C++ test files failed to compile: $_"
    Throw "C++ test files failed to compile."
}
finally {
    # Return to the original directory
    Pop-Location
}

Write-Host "Installation complete"
