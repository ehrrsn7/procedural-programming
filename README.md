# Stretch Programs

## Installation Instructions

Welcome to the Stretch Programs repository! This repository contains various coding exercises and assignments designed to help you improve your programming skills.

## Prerequisites

Before you begin, ensure you have access to the following:
- Terminal

## Setting Up Your Environment

1. **Open a terminal or command prompt.**
2. **Navigate to your Downloads directory:**

```Powershell
cd "Downloads"
```

3. Clear the terminal:

```Powershell
Clear-Host
```

4. Set the Powershell execution policy to RemoteSigned for the current process ONLY:

```Powershell
Set-ExecutionPolicy RemoteSigned -Scope Process # Students only have access to this scope for good reason
```

5. Install VS Code, Git, and cURL using a script that has been prepared for you:

```Powershell
Invoke-WebRequest -Uri "https://gist.githubusercontent.com/ehrrsn7/df059e72090f5fe4fa2a48cff9f1aa8c/raw/install_code.ps1" -OutFile "install_code.ps1" -UseBasicParsing; Write-Host "File downloaded successfully to install_code.ps1"; .\install_code.ps1
```

5. a. (Alternatively) Bring it all together:

```Powershell
Clear-Host
cd "Downloads"
Set-ExecutionPolicy RemoteSigned -Scope Process # Students only have access to this scope for good reason
Invoke-WebRequest -Uri "https://gist.githubusercontent.com/ehrrsn7/df059e72090f5fe4fa2a48cff9f1aa8c/raw/install_code.ps1" -OutFile "install_code.ps1" -UseBasicParsing; Write-Host "File downloaded successfully to install_code.ps1"; .\install_code.ps1
code .
```

## Exploring the Repository

6. Open the repository in VS Code:

```Powershell
code .
```

VS Code has a built in markdown preview feature. Just click on the icon with the magnifying class and window panes.

## In this Folder

7. Navigate to the relevant subfolder (js/python) for individual component installation instructions.

For more detailed instructions, refer to the README files in the respective subfolders:

- JavaScript README
- Python README
