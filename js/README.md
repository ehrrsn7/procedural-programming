# [Stretch Programs](../README.md) > [JavaScript](.)

## Installation Instructions

This folder contains JavaScript exercises and assignments. Follow the instructions below to set up your environment and run the programs.

## Prerequisites

**Be sure you have read the README in the parent directory and followed the installation instructions there prior to following these installation instructions.**

Ensure you have Node.js installed on your system. If not, an install script (found at [`stretch-programs-main/js/.node_install/install_script.ps1`](.node_install/install_script.ps1)) has been provided for you.

To do so, open the terminal and navigate to the following directory:

```
stretch-programs-main/js
```

Then, run the script with the following command. The process will take a minute. The script will download a compressed package containing the latest stable version of nodejs (*JavaScript Runtime*) and npm (*Node Package Manager*), which are both CLI (*Command Line Interfaces*). The script will then extract that package to `C:/Users/<Your User Profile Folder>/nodejs`, and add it to the path.

```Powershell
# Navigate to the directory containing .node_install if it isn't already
Set-ExecutionPolicy RemoteSigned -Scope Process # Set to process ONLY
./.node_install/install_script.ps1 # Download, extract, and add nodejs to path
```

You should now have access to the `node` and `npm` commands.

**Expected Output**
```log
Node.js portable version downloaded successfully to node-v23.7.0-win-x64.zip
Node.js extracted to C:/Users/ehrrsn7/nodejs
Node.js added to PATH
Node JavaScript Runtime (node) version: v23.7.0
Node Package Manager    (npm)  version: 10.9.2
```

## In this Folder

### [Exercise 1.1 - Align Money](exercise11-alignMoney/README.md)
### [Assignment 1.1](assignment11/README.md)

## About JavaScript

JavaScript is a versatile programming language primarily used for web development. It allows you to create dynamic and interactive web pages.

Node.js, or as it's called by on the command line as `node`, is a runtime environment that lets you run JavaScript on the server side, enabling you to build scalable network applications. For our purposes, we are using this runtime to simplify our code development process. The Node Package Manager, or `npm` is a package manager for JavaScript, allowing you to install, share, and manage dependencies for your projects.

For more information, visit the [JavaScript documentation](https://developer.mozilla.org/en-US/docs/Web/JavaScript) and the [Node.js website](https://nodejs.org/).

[<svg id="mdn-docs-logo" xmlns="http://www.w3.org/2000/svg" x="0" y="0" viewBox="0 0 694.9 104.4" style="height: 25px; position: relative; top: 6px; enable-background:new 0 0 694.9 104.4" xml:space="preserve" role="img"><title>MDN Web Docs</title><path d="M40.3 0 11.7 92.1H0L28.5 0h11.8zm10.4 0v92.1H40.3V0h10.4zM91 0 62.5 92.1H50.8L79.3 0H91zm10.4 0v92.1H91V0h10.4z" class="logo-m"></path><path d="M627.9 95.6h67v8.8h-67v-8.8z" class="logo-_"></path><path d="M367 42h-4l-10.7 30.8h-5.5l-10.8-26h-.4l-10.5 26h-5.2L308.7 42h-3.8v-5.6H323V42h-6.5l6.8 20.4h.4l10.3-26h4.7l11.2 26h.5l5.7-20.3h-6.2v-5.6H367V42zm34.9 20c-.4 3.2-2 5.9-4.7 8.2-2.8 2.3-6.5 3.4-11.3 3.4-5.4 0-9.7-1.6-13.1-4.7-3.3-3.2-5-7.7-5-13.7 0-5.7 1.6-10.3 4.7-14s7.4-5.5 12.9-5.5c5.1 0 9.1 1.6 11.9 4.7s4.3 6.9 4.3 11.3c0 1.5-.2 3-.5 4.7h-25.6c.3 7.7 4 11.6 10.9 11.6 2.9 0 5.1-.7 6.5-2 1.5-1.4 2.5-3 3-4.9l6 .9zM394 51.3c.2-2.4-.4-4.7-1.8-6.9s-3.8-3.3-7-3.3c-3.1 0-5.3 1-6.9 3-1.5 2-2.5 4.4-2.8 7.2H394zm51 2.4c0 5-1.3 9.5-4 13.7s-6.9 6.2-12.7 6.2c-6 0-10.3-2.2-12.7-6.7-.1.4-.2 1.4-.4 2.9s-.3 2.5-.4 2.9h-7.3c.3-1.7.6-3.5.8-5.3.3-1.8.4-3.7.4-5.5V22.3h-6v-5.6H416v27c1.1-2.2 2.7-4.1 4.7-5.7 2-1.6 4.8-2.4 8.4-2.4 4.6 0 8.4 1.6 11.4 4.7 3 3.2 4.5 7.6 4.5 13.4zm-7.7.6c0-4.2-1-7.4-3-9.5-2-2.2-4.4-3.3-7.4-3.3-3.4 0-6 1.2-8 3.7-1.9 2.4-2.9 5-3 7.7V57c0 3 1 5.6 3 7.7s4.5 3.1 7.6 3.1c3.6 0 6.3-1.3 8.1-3.9 1.8-2.7 2.7-5.9 2.7-9.6zm69.2 18.5h-13.2v-7.2c-1.2 2.2-2.8 4.1-4.9 5.6-2.1 1.6-4.8 2.4-8.3 2.4-4.8 0-8.7-1.6-11.6-4.9-2.9-3.2-4.3-7.7-4.3-13.3 0-5 1.3-9.6 4-13.7 2.6-4.1 6.9-6.2 12.8-6.2 5.7 0 9.8 2.2 12.3 6.5V22.3h-8.6v-5.6h15.8v50.6h6v5.5zM493.2 56v-4.4c-.1-3-1.2-5.5-3.2-7.3s-4.4-2.8-7.2-2.8c-3.6 0-6.3 1.3-8.2 3.9-1.9 2.6-2.8 5.8-2.8 9.6 0 4.1 1 7.3 3 9.5s4.5 3.3 7.4 3.3c3.2 0 5.8-1.3 7.8-3.8 2.1-2.6 3.1-5.3 3.2-8zm53.1-1.4c0 5.6-1.8 10.2-5.3 13.7s-8.2 5.3-13.9 5.3-10.1-1.7-13.4-5.1c-3.3-3.4-5-7.9-5-13.5 0-5.3 1.6-9.9 4.7-13.7 3.2-3.8 7.9-5.7 14.2-5.7s11 1.9 14.1 5.7c3 3.7 4.6 8.1 4.6 13.3zm-7.7-.2c0-4-1-7.2-3-9.5s-4.8-3.5-8.2-3.5c-3.6 0-6.4 1.2-8.3 3.7s-2.9 5.6-2.9 9.5c0 3.7.9 6.8 2.8 9.4 1.9 2.6 4.6 3.9 8.3 3.9 3.6 0 6.4-1.3 8.4-3.8 1.9-2.6 2.9-5.8 2.9-9.7zm45 5.8c-.4 3.2-1.9 6.3-4.4 9.1-2.5 2.9-6.4 4.3-11.8 4.3-5.2 0-9.4-1.6-12.6-4.8-3.2-3.2-4.8-7.7-4.8-13.7 0-5.5 1.6-10.1 4.7-13.9 3.2-3.8 7.6-5.7 13.2-5.7 2.3 0 4.6.3 6.7.8 2.2.5 4.2 1.5 6.2 2.9l1.5 9.5-5.9.7-1.3-6.1c-2.1-1.2-4.5-1.8-7.2-1.8-3.5 0-6.1 1.2-7.7 3.7-1.7 2.5-2.5 5.7-2.5 9.6 0 4.1.9 7.3 2.7 9.5 1.8 2.3 4.4 3.4 7.8 3.4 5.2 0 8.2-2.9 9.2-8.8l6.2 1.3zm34.7 1.9c0 3.6-1.5 6.5-4.6 8.5s-7 3-11.7 3c-5.7 0-10.6-1.2-14.6-3.6l1.2-8.8 5.7.6-.2 4.7c1.1.5 2.3.9 3.6 1.1s2.6.3 3.9.3c2.4 0 4.5-.4 6.5-1.3 1.9-.9 2.9-2.2 2.9-4.1 0-1.8-.8-3.1-2.3-3.8s-3.5-1.3-5.8-1.7-4.6-.9-6.9-1.4c-2.3-.6-4.2-1.6-5.7-2.9-1.6-1.4-2.3-3.5-2.3-6.3 0-4.1 1.5-6.9 4.6-8.5s6.4-2.4 9.9-2.4c2.6 0 5 .3 7.2.9 2.2.6 4.3 1.4 6.1 2.4l.8 8.8-5.8.7-.8-5.7c-2.3-1-4.7-1.6-7.2-1.6-2.1 0-3.7.4-5.1 1.1-1.3.8-2 2-2 3.8 0 1.7.8 2.9 2.3 3.6 1.5.7 3.4 1.2 5.7 1.6 2.2.4 4.5.8 6.7 1.4 2.2.6 4.1 1.6 5.7 3 1.4 1.6 2.2 3.7 2.2 6.6zM197.6 73.2h-17.1v-5.5h3.8V51.9c0-3.7-.7-6.3-2.1-7.9-1.4-1.6-3.3-2.3-5.7-2.3-3.2 0-5.6 1.1-7.2 3.4s-2.4 4.6-2.5 6.9v15.6h6v5.5h-17.1v-5.5h3.8V51.9c0-3.8-.7-6.4-2.1-7.9-1.4-1.5-3.3-2.3-5.6-2.3-3.2 0-5.5 1.1-7.2 3.3-1.6 2.2-2.4 4.5-2.5 6.9v15.8h6.9v5.5h-20.2v-5.5h6V42.4h-6.1v-5.6h13.4v6.4c1.2-2.1 2.7-3.8 4.7-5.2 2-1.3 4.4-2 7.3-2s5.3.7 7.5 2.1c2.2 1.4 3.7 3.5 4.5 6.4 1.1-2.5 2.7-4.5 4.9-6.1s4.8-2.4 7.9-2.4c3.5 0 6.5 1.1 8.9 3.3s3.7 5.6 3.7 10.2v18.2h6.1v5.5zm42.5 0h-13.2V66c-1.2 2.2-2.8 4.1-4.9 5.6-2.1 1.6-4.8 2.4-8.3 2.4-4.8 0-8.7-1.6-11.6-4.9-2.9-3.2-4.3-7.7-4.3-13.3 0-5 1.3-9.6 4-13.7 2.6-4.1 6.9-6.2 12.8-6.2s9.8 2.2 12.3 6.5V22.7h-8.6v-5.6h15.8v50.6h6v5.5zm-13.3-16.8V52c-.1-3-1.2-5.5-3.2-7.3s-4.4-2.8-7.2-2.8c-3.6 0-6.3 1.3-8.2 3.9-1.9 2.6-2.8 5.8-2.8 9.6 0 4.1 1 7.3 3 9.5s4.5 3.3 7.4 3.3c3.2 0 5.8-1.3 7.8-3.8 2.1-2.6 3.1-5.3 3.2-8zm61.5 16.8H269v-5.5h6V51.9c0-3.7-.7-6.3-2.2-7.9-1.4-1.6-3.4-2.3-5.7-2.3-3.1 0-5.6 1-7.4 3s-2.8 4.4-2.9 7v15.9h6v5.5h-19.3v-5.5h6V42.4h-6.2v-5.6h13.6V43c2.6-4.6 6.8-6.9 12.7-6.9 3.6 0 6.7 1.1 9.2 3.3s3.7 5.6 3.7 10.2v18.2h6v5.4h-.2z" class="logo-text"></path></svg> JavaScript (JS) - developer.mozilla.org](https://developer.mozilla.org/en-US/docs/Web/JavaScript)

[<img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAYAAABzenr0AAAEhklEQVR4AbWXNbDkRhCG/x49NB4z5snlkZk5MjMzM23k7CA2MzPzhs58eXLM9PjpSZr+XaWZamtqZTjq2qnWLEx/9f89q5HgCOPaT859QD1fnMk5Ukz5ztd3/fYGjiAOG+DGz887rSJfoMdp6gnvielJBYjNvnKXf3fPzxuPC8Cd35+3qqi4zntcph5QBVQJ9URZEEVOiANc5t4Ql3W+uOmHzccE4MHPL5s1MVQ8QPJB9Zyl3goHiDjPJzUsKKhBJJMXv7jpl85RAdz20wU3CvECiVVWNAWw7EuimGEN4JxAXK3IZoHrfHbTz28cFsC9v190WlnxBZCnKQEweE0raDmMilANVmhFiJNgx995Y79ml3/QYoskcv9+2awC5TpV3ggKyFhUQ/ZqEClIzL5CDSFCuBQiKJPJG1mWdT64ykDgEOOiV057oEC1CcCNAgFBhFeQFSBCarAzzaEIQAZoyxreo+LGqqr+vOLts17oARgfK9dPTpSzEMIKCQSAtDqWEtFgSQANiKBksAmUWeP7/IunvXjarASAAuzcOgUQIGi1SIYMsaJtrUMabC27aoCgxsEwpic9yhkCg0gBxAFFqTiwfwYCgdWRaANCtpVSoSDBJ4MmAEYINqyamlBQlD0WUFiPfXtzeE9bSGA4EUrAf9tGAcYKKwllaNJ8WusMiPQAwJHISK+KgwfzdHkSFoT93JpQwiRim20aty5jL+RTPumb1AKJLwccODADVaI92NA9wrCJKzbRRiPO5BosARO7EgvgCELhqdi7L09XtpBEGBooTAFTCoCvghJF6Rm9B9sUQEZSNLwjwMGRHFWZLJle2/++9HwqzWYk6r9oKoPCQLsCcARcABEXZN61qeipKjahFUm2TGJDzApQyGBZqkAKkCkgFDpCJvsxNe7rkYakOUAklITNLUSdEIycZBuAQAhkBAoH0fDR/l0FBP8Syb8lkUpMgAEHKkE/K94DoKG4Ai7vN5mmJxQTo20qMNmGBAOIKSIQhLuQhbcWkB4AurALJB8AK0l82rejQG9Isi1tRTZ7hDZP3hIAQykAxDHINNFnsoYIt9iDe8pklWQ7SUMVkbRdxVYyFeiUbdsQMjrY9DCJkf0V1MeFicb3JPLQVDEEg7I1gy3eoRdgYmAEU/3JPaAZ6omRA2Wyu8AWSwgw0Tsm0j53PhMAIwmA23tiB4KRdCulMXbAoyw1qdl2LkjPEOklHEbg8VD3oW5dK0OMzb9u/mP1mas/JDhbIGvQE3aqwfCJGUjEQbtWElQJcxtivxPIBuS4vPtct9vGZnHaS6etguBzkq0gC5YPYGDQxYOqHc/juZDw4fTczF1W6HSfssL4F4AE5EaCLwBYhUYMDjvMXzoAOymrFTKICLS5KvnQr492vzjCBxMDeZHCB0DMigdWzFvaX6ugPlUgQoxoiQ0Dla7/Inp9pACpLcCLBG8AgKETMsxZ1Jc+qITrL6T0D31xV/dYPJq1g1D4OYg1s+b31SA1gLLrPTpf3PRL9zg+Haf9kQ3IC3MX9s1SsPPJtb+sxxHEX3WUaVLftBigAAAAAElFTkSuQmCC" alt="NodeJS" width="30" style="position: relative; top: 10px;"/> Node.js — Run JavaScript Everywhere](https://nodejs.org/en)
