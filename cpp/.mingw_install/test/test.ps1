param (
    [string]$mingwPath = "$env:userprofile\mingw\mingw64",
    [string]$testDir = "$PSScriptRoot"
)

try {
    Write-Host "Testing hello.cpp..." -ForegroundColor Cyan

    # Set the current working directory to the script's directory
    Push-Location -Path $testDir

    # Compile hello.cpp
    & g++ "hello.cpp" -o "hello.exe"

    if ($LastExitCode -eq 0) {
        Write-Host "Compilation of hello.cpp successful!" -ForegroundColor Green
        & "./hello.exe" # Run the executable
    } else {
        Throw "Unable to compile or run hello.cpp"
    }
}
catch {
    Write-Error "Error compiling hello.cpp: $_"
}
finally {
    # Return to the original directory
    Pop-Location
}

try {
    Write-Host "Testing makefile..." -ForegroundColor Cyan
    Push-Location -Path $testDir

    # Run makefile
    $process = Start-Process -FilePath "$mingwPath\bin\mingw32-make.exe" -ArgumentList "test" -Wait -PassThru

    # Check the exit code (important!)
    if ($process.ExitCode -eq 0) {
        Write-Host "Make completed successfully." -ForegroundColor Green
    } else {
        Throw "Make failed with exit code $($process.ExitCode)."
    }

    # Run the resulting test executable
    if (Test-Path "test.exe") {
        & "./test.exe"
    } else {
        Write-Error "Executable not found."
    }
}
catch {
    Write-Error "Compilation or linking failed: $_"
}
finally {
    # Return to the original directory
    Pop-Location
}

Write-Host "Test script complete." -ForegroundColor Green