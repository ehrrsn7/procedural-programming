param (
    [string]$mingwPath = "$env:userprofile\mingw\mingw64",
    [string]$testDir = "$env:userprofile\mingw\test"
)

try {
    Write-Host "Testing compilation..." -ForegroundColor Cyan

    # Change directory to where the hello.cpp and makefile are located
    cd $testDir

    # Compile hello.cpp
    & g++ "hello.cpp" -o "hello.exe"

    if ($LastExitCode -eq 0) {
        Write-Host "Compilation of hello.cpp successful!" -ForegroundColor Green
        & "./hello.exe" # Run the executable
    } else {
        Throw "Unable to compile or run hello.cpp"
    }

    # Run makefile
    $process = Start-Process -FilePath "$mingwPath\bin\mingw32-make.exe" -Wait -PassThru

    # Check the exit code (important!)
    if ($process.ExitCode -eq 0) {
        Write-Host "Make completed successfully." -ForegroundColor Green
    } else {
        Throw "Make failed with exit code $($process.ExitCode)."
    }

    # Link the object files to create an executable
    & g++ "add.o" "add_test.o" -o "test_program.exe"

    # Run the resulting executable
    if (Test-Path "test_program.exe") {
        & "./test_program.exe"
    } else {
        Write-Error "Linking failed or executable not found."
    }
}
catch {
    Write-Error "Compilation or linking failed: $_"
}
finally {
    # Return to the original directory
    cd $PSScriptRoot
}

Write-Host "Test script complete." -ForegroundColor Green