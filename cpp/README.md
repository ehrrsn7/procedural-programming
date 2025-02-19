# [Stretch Programs](../README.md) > [C++](.)

## Installation Instructions

This folder contains C++ exercises and assignments. Follow the instructions below to set up your environment and run the programs.

## Prerequisites

**Be sure you have read the README in the parent directory and followed the installation instructions there prior to following these installation instructions.**

Ensure you have the C++ compiler installed on your system. If not, an install script (found at [`stretch-programs-main/cpp/.g++_install/install_script.ps1`](./.g++_install/install_script.ps1)) has been provided for you.

To do so, open the terminal and navigate to the following directory:

```
stretch-programs-main\cpp
```
Then, run the script with the following command. The process will take a minute. The script will download a compressed package containing the latest stable version of `g++` (*GNU Compiler Collection*), which is a CLI (*Command Line Interface*). The script will then extract that package to `C:\Users\<Your User Profile Folder>\mingw`, and add it to the path.

```Powershell
Set-ExecutionPolicy RemoteSigned -Scope Process # Set to process ONLY
.\.mingw_install\install_script.ps1 # Download, extract, and add mingw tools to path
```

You should now have access to the `g++` command.

**Expected Output**
```log
WARNING: Installation directory already exists: $env:USERPROFILE\mingw
Extraction complete: $env:USERPROFILE\mingw
Added $env:USERPROFILE\mingw\bin to PATH
g++.exe (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r3) 14.2.0
Copyright (C) 2024 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

Mingw-w64 installed successfully to $env:USERPROFILE\mingw
```

## About C++

**C++** is a high-performance, general-purpose programming language used for system and application software, game development, and more. Known for its flexibility and power, C++ remains one of the most widely used programming languages today.

### Features
- **Multi-platform**: C++ applications can run on a wide variety of operating systems, from desktop to mobile platforms.
- **Object-oriented**: C++ supports object-oriented programming (OOP) principles like classes, inheritance, and polymorphism.
- **Low-level control**: C++ allows direct memory management, giving developers fine control over hardware resources.
- **Extensive standard library**: C++ has a large set of built-in libraries and tools, including the Standard Template Library (STL), making it highly productive.
- **Compiled language**: C++ is compiled to machine code, which allows for optimized performance, particularly in systems with limited resources.

### Historical Usage
- **System software**: C++ was originally designed in the early 1980s as an enhancement to C. It was intended for developing system software, operating systems, and embedded systems where performance is crucial.
- **Game development**: Its ability to handle low-level memory management and high-performance needs made it the language of choice for game developers.
- **Real-time systems**: C++ is used in applications where performance and precise timing are critical, such as in automotive control systems and telecommunications.
- **Software tools**: Many integrated development environments (IDEs), compilers, and debugging tools are written in C++ due to its efficiency and flexibility.

### Why C++ is Still Used Today (C++22)
C++ continues to be relevant today, especially with the modernized versions like **C++20** and **C++22**. Here's why it remains a powerful tool:

- **Performance**: C++ still excels in scenarios where performance is a top priority, such as video games, operating systems, and applications requiring real-time processing.
- **Memory control**: C++ allows developers to manage memory manually, which is crucial for resource-constrained environments or applications with stringent memory requirements.
- **Modern features**: Recent updates (like C++20 and C++22) bring modern features, such as concepts, ranges, and coroutines, to make development more efficient without sacrificing the language's low-level capabilities.
- **Backward compatibility**: C++ maintains compatibility with its legacy code, meaning systems built decades ago can still be maintained and updated.
- **Large codebase ecosystem**: Many existing large-scale applications and libraries are written in C++, ensuring that the language remains indispensable for maintaining and expanding these systems.

### Uses
- **Mobile apps**: Many mobile applications, especially games, are developed with C++ due to its speed and efficiency.
- **Enterprise software**: C++ is still used in financial services, healthcare, and other sectors that need reliable, high-performance software.
- **Game engines**: Popular game engines like Unreal Engine and Unity use C++ to provide performance for AAA games.
- **Embedded systems**: C++ is widely used in the development of embedded systems like automotive ECUs and industrial equipment.
- **High-performance computing**: C++ is the go-to language for building scientific computing applications that require massive computational power.

### Resources
- You can learn more about C++ at [dev.cpp](https://dev.cpp).
- Business users can explore the C++ solutions at [oracle.com/cpp](https://oracle.com/cpp).

For more information, visit the [OpenJDK-21 documentation](https://devdocs.io/openjdk~21/), the [OpenJDK website](https://openjdk.org/), and the [dev.cpp website](https://dev.cpp/).

[<img src="https://dev.cpp/assets/images/cpp-logo-vector.png" alt="Nodecpp" width="50" style="position: relative; top: 5px;"/> dev.cpp - The Destination for C++ Developers](https://dev.cpp/)

[<img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAAAaUlEQVR4Ac2SgQqAQAhD/fT9+TIbsQjJCuAGQ4DbU+VieVF+LwD8BVCwg3AY7gGasJEecK9pC4xWY7rCJZviCUA3fQqg3I8uGlMqR0iWBB9cmzf1AN/Jus0BDjmbOzRwXe/T1/V7xHLaAKIBvWKLs4qAAAAAAElFTkSuQmCC" alt="Nodecpp" width="20" style="position: relative; top: 5px;"/> <img src="https://openjdk.org/images/openjdk.png" alt="Nodecpp" width="60" style="position: relative; top: 5px;"/> - Oracle's free, GPL-licensed, production-ready OpenJDK](https://openjdk.org/)

[<img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABwAAAAcCAMAAABF0y+mAAAALVBMVEXr6u1HcEyxsLLMzM7Hxsj29fi9vL719Pfa2dvR0NLHxsjj4uRjYmObmpx/f4AKPt7WAAAABnRSTlP+APwhe5cWoVzqAAAAyUlEQVQokX2TiRKDIAxEl5tw+P+f20QkYi3dQCD7AuM4CmNcQHoJwRkD499kyBu4HUvJIexhQE1AGjHGlditEDTTqpfxQ/Wa3y57VYVaaCmF3oVtrR2lPvDNbKbehOZ6pow81ayY/aiZbdGEbMd27kq7eqVBTyokvetxrfT3I6+QrpAH4iRwWiDd9naqq0EgVS7WUmSqzgKH+FVEhYXukEG2a43CWee5kDoM9/oP4x/BxxLHmKtWHm5/0MFsqeMv3jhv4yus59/hA3J6FbvGnM0BAAAAAElFTkSuQmCC" alt="Nodecpp" width="20" style="position: relative; top: 5px;"/> devdocs.io/OpenJDK 21 Documentation](https://devdocs.io/openjdk~21/)

## In this Folder

[TODO] Include an index for the subfolders in this directory.
