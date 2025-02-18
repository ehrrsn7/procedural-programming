# [Stretch Programs](../README.md) > [Java](.)

## Installation Instructions

This folder contains Java exercises and assignments. Follow the instructions below to set up your environment and run the programs.

## Prerequisites

**Be sure you have read the README in the parent directory and followed the installation instructions there prior to following these installation instructions.**

Ensure you have Java installed on your system. If not, an install script (found at [`stretch-programs-main/java/.openjdk_install/install_script.ps1`](./.openjdk_install/install_script.ps1)) has been provided for you.

To do so, open the terminal and navigate to the following directory:

```
stretch-programs-main\java
```

Then, run the script with the following command. The process will take a minute. The script will download a compressed package containing the latest stable version of `openjdk` (*The Open-Source Distributable of the Java Development Kit*), which is a CLI (*Command Line Interface*). The script will then extract that package to `C:\Users\<Your User Profile Folder>\openjdk`, and add it to the path.

```Powershell
# Navigate to the directory containing .openjdk_install if it isn't already
cd stretch-programs-main
cd java
Set-ExecutionPolicy RemoteSigned -Scope Process # Set to process ONLY
.\.openjdk_install\install_script.ps1 # Download, extract, and add java to path
```

You should now have access to the `java` command.

**Expected Output**
```log
Creating installation directory if it doesn't exist...
Installation directory already exists at C:\Users\eliharrison\openjdk.                                                        Downloading OpenJDK binary from https://download.oracle.com/java/21/latest/jdk-21_windows-x64_bin.zip...                                                        OpenJDK binary downloaded to C:\Users\ELIHAR~1\AppData\Local\Temp\openjdk.zip.
Extracting OpenJDK binary to C:\Users\eliharrison\openjdk...
Extracted: C:\Users\eliharrison\openjdk\jdk-21.0.6/
Extracted: C:\Users\eliharrison\openjdk\jdk-21.0.6/bin/
...
OpenJDK binary extracted to C:\Users\eliharrison\openjdk.
Cleaning up the downloaded zip file...
Downloaded zip file removed.
Setting JAVA_HOME environment variable...
JAVA_HOME set to C:\Users\eliharrison\openjdk.
Adding JAVA_HOME to the user PATH...
JAVA_HOME added to the user PATH.
OpenJDK installation completed successfully.
Verifying the OpenJDK installation...
openjdk 23.0.1 2024-10-15
OpenJDK Runtime Environment (build 23.0.1+11-39)
OpenJDK 64-Bit Server VM (build 23.0.1+11-39, mixed mode, sharing)
```

## About Java

Java is a programming language and computing platform that's used to create many digital applications and services. It's a popular choice for developers because it's reliable, secure, and fast.

### Features
- Multi-platform: Java can run on many different operating systems and devices.
- Object-oriented: Java is based on the idea of objects and classes.
- Network-centric: Java is well-suited for building applications that use the internet.
- Bytecode: Java applications are compiled into bytecode that can run on any Java virtual machine (`JVM`).

### Uses
- Mobile apps
- Enterprise software
- Big data applications
- Server-side technologies
- Cloud applications
- Chatbots and marketing tools
- Web applications
- Artificial intelligence (AI) and internet of things (IoT) devices

### History
- Sun Microsystems first released Java in 1995.
- Java is free to download for personal use.
- Java is the third most popular programming language in the world, after Python and C.

### Resources
- You can learn more about Java at [dev.java](https://dev.java).
- Business users can learn more at [oracle.com/java](https://oracle.com/java).

For more information, visit the [OpenJDK-21 documentation](https://devdocs.io/openjdk~21/), the [OpenJDK website](https://openjdk.org/) and the [dev.java website](https://dev.java/).

[<img src="https://dev.java/assets/images/java-logo-vector.png" alt="Nodejava" width="50" style="position: relative; top: 5px;"/> dev.java - The Destination for Java Developers](https://dev.java/)

[<img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAAAaUlEQVR4Ac2SgQqAQAhD/fT9+TIbsQjJCuAGQ4DbU+VieVF+LwD8BVCwg3AY7gGasJEecK9pC4xWY7rCJZviCUA3fQqg3I8uGlMqR0iWBB9cmzf1AN/Jus0BDjmbOzRwXe/T1/V7xHLaAKIBvWKLs4qAAAAAAElFTkSuQmCC" alt="Nodejava" width="20" style="position: relative; top: 5px;"/> <img src="https://openjdk.org/images/openjdk.png" alt="Nodejava" width="60" style="position: relative; top: 5px;"/> - Oracle's free, GPL-licensed, production-ready OpenJDK](https://openjdk.org/)

[<img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABwAAAAcCAMAAABF0y+mAAAALVBMVEXr6u1HcEyxsLLMzM7Hxsj29fi9vL719Pfa2dvR0NLHxsjj4uRjYmObmpx/f4AKPt7WAAAABnRSTlP+APwhe5cWoVzqAAAAyUlEQVQokX2TiRKDIAxEl5tw+P+f20QkYi3dQCD7AuM4CmNcQHoJwRkD499kyBu4HUvJIexhQE1AGjHGlditEDTTqpfxQ/Wa3y57VYVaaCmF3oVtrR2lPvDNbKbehOZ6pow81ayY/aiZbdGEbMd27kq7eqVBTyokvetxrfT3I6+QrpAH4iRwWiDd9naqq0EgVS7WUmSqzgKH+FVEhYXukEG2a43CWee5kDoM9/oP4x/BxxLHmKtWHm5/0MFsqeMv3jhv4yus59/hA3J6FbvGnM0BAAAAAElFTkSuQmCC" alt="Nodejava" width="20" style="position: relative; top: 5px;"/> devdocs.io/OpenJDK 21 Documentation](https://devdocs.io/openjdk~21/)

## In this Folder

[TODO] Include an index for the subfolders in this directory.
