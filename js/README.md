# Stretch Programs > JavaScript

## Installation Instructions

This folder contains JavaScript exercises and assignments. Follow the instructions below to set up your environment and run the programs.

## Prerequisites

**Be sure you have read the README in the parent directory and followed the installation instructions there prior to following these installation instructions.**

Ensure you have Node.js installed on your system. If not, an install script (found at [`stretch-programs-main\js\.node_install\install_script.ps1`](stretch-programs-main\js\.node_install\install_script.ps1)) has been provided for you.

Open the terminal and navigate to the following directory:

```
stretch-programs-main\js
```

Then, run the script with the following command. The process will take a minute. The script will download a compressed package containing the latest stable version of nodejs (*JavaScript Runtime*) and npm (*Node Package Manager*), which are both CLI (*Command Line Interfaces*). The script will then extract that package to `C:\Users\<Your User Profile Folder>\nodejs`, and add it to the path.

```Powershell
Set-ExecutionPolicy RemoteSigned -Scope Process # Set to process ONLY
.\.node_install\install_script.ps1 # Download, extract, and add nodejs to path
```

You should now have access to the `node` and `npm` commands.

**Expected Output**
```log
Node.js portable version downloaded successfully to node-v23.7.0-win-x64.zip
Node.js extracted to C:\Users\ehrrsn7\nodejs
Node.js added to PATH
Node JavaScript Runtime (node) version: v23.7.0
Node Package Manager    (npm)  version: 10.9.2
```

## About JavaScript

JavaScript is a versatile programming language primarily used for web development. It allows you to create dynamic and interactive web pages.

Node.js, or as it's called by on the command line as `node`, is a runtime environment that lets you run JavaScript on the server side, enabling you to build scalable network applications. For our purposes, we are using this runtime to simplify our code development process. The Node Package Manager, or `npm` is a package manager for JavaScript, allowing you to install, share, and manage dependencies for your projects.

For more information, visit the [JavaScript documentation](https://developer.mozilla.org/en-US/docs/Web/JavaScript) and the [Node.js website](https://nodejs.org/).

[![alt text](data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAYAAABzenr0AAAEhklEQVR4AbWXNbDkRhCG/x49NB4z5snlkZk5MjMzM23k7CA2MzPzhs58eXLM9PjpSZr+XaWZamtqZTjq2qnWLEx/9f89q5HgCOPaT859QD1fnMk5Ukz5ztd3/fYGjiAOG+DGz887rSJfoMdp6gnvielJBYjNvnKXf3fPzxuPC8Cd35+3qqi4zntcph5QBVQJ9URZEEVOiANc5t4Ql3W+uOmHzccE4MHPL5s1MVQ8QPJB9Zyl3goHiDjPJzUsKKhBJJMXv7jpl85RAdz20wU3CvECiVVWNAWw7EuimGEN4JxAXK3IZoHrfHbTz28cFsC9v190WlnxBZCnKQEweE0raDmMilANVmhFiJNgx995Y79ml3/QYoskcv9+2awC5TpV3ggKyFhUQ/ZqEClIzL5CDSFCuBQiKJPJG1mWdT64ykDgEOOiV057oEC1CcCNAgFBhFeQFSBCarAzzaEIQAZoyxreo+LGqqr+vOLts17oARgfK9dPTpSzEMIKCQSAtDqWEtFgSQANiKBksAmUWeP7/IunvXjarASAAuzcOgUQIGi1SIYMsaJtrUMabC27aoCgxsEwpic9yhkCg0gBxAFFqTiwfwYCgdWRaANCtpVSoSDBJ4MmAEYINqyamlBQlD0WUFiPfXtzeE9bSGA4EUrAf9tGAcYKKwllaNJ8WusMiPQAwJHISK+KgwfzdHkSFoT93JpQwiRim20aty5jL+RTPumb1AKJLwccODADVaI92NA9wrCJKzbRRiPO5BosARO7EgvgCELhqdi7L09XtpBEGBooTAFTCoCvghJF6Rm9B9sUQEZSNLwjwMGRHFWZLJle2/++9HwqzWYk6r9oKoPCQLsCcARcABEXZN61qeipKjahFUm2TGJDzApQyGBZqkAKkCkgFDpCJvsxNe7rkYakOUAklITNLUSdEIycZBuAQAhkBAoH0fDR/l0FBP8Syb8lkUpMgAEHKkE/K94DoKG4Ai7vN5mmJxQTo20qMNmGBAOIKSIQhLuQhbcWkB4AurALJB8AK0l82rejQG9Isi1tRTZ7hDZP3hIAQykAxDHINNFnsoYIt9iDe8pklWQ7SUMVkbRdxVYyFeiUbdsQMjrY9DCJkf0V1MeFicb3JPLQVDEEg7I1gy3eoRdgYmAEU/3JPaAZ6omRA2Wyu8AWSwgw0Tsm0j53PhMAIwmA23tiB4KRdCulMXbAoyw1qdl2LkjPEOklHEbg8VD3oW5dK0OMzb9u/mP1mas/JDhbIGvQE3aqwfCJGUjEQbtWElQJcxtivxPIBuS4vPtct9vGZnHaS6etguBzkq0gC5YPYGDQxYOqHc/juZDw4fTczF1W6HSfssL4F4AE5EaCLwBYhUYMDjvMXzoAOymrFTKICLS5KvnQr492vzjCBxMDeZHCB0DMigdWzFvaX6ugPlUgQoxoiQ0Dla7/Inp9pACpLcCLBG8AgKETMsxZ1Jc+qITrL6T0D31xV/dYPJq1g1D4OYg1s+b31SA1gLLrPTpf3PRL9zg+Haf9kQ3IC3MX9s1SsPPJtb+sxxHEX3WUaVLftBigAAAAAElFTkSuQmCC) Node.js — Run JavaScript Everywhere](https://nodejs.org/en)

## In this Folder

[TODO] Include an index for the subfolders in this directory.
