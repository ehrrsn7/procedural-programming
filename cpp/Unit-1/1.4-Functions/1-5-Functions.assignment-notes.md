## Assignment Notes

### 1.4 Functions — Assignment Overview

#### Context

In this unit, you'll learn how to create and use functions to break large programs into smaller, manageable pieces. You'll practice passing data into functions, understand the difference between pass-by-value and pass-by-reference, and identify the scope of variables in a program.

---

### Original Assignment Requirements (C++)

**Scenario:**
Sue is working on a large project and is overwhelmed by the amount of code. To simplify her work, she decides to break the program into smaller, manageable chunks—functions. Each function can be designed, developed, and tested individually, making the problem much more manageable.

**Objectives:**
- Create a function in C++.
- Pass data into a function using both pass-by-value and pass-by-reference.
- Identify the scope of a variable in a program.

**Prerequisites:**
- Choose the best data-type to represent your data (see Chapter 1.2).
- Declare a variable (see Chapter 1.2).

**Overview:**
A function is a small part of a larger program. Other terms (procedure, module, subroutine, subprogram, and method) mean nearly the same thing in Computer Science. Functions help break large programs into smaller ones. Functions can be thought of as either procedures (a set of tasks) or mathematical functions (input to output). The syntax for both is the same in C++.

**Function Syntax:**
There are two parts to function syntax: declaring (defining) a function and calling a function. For example:

```cpp
/***************************************************
 * CONVERT FEET TO METERS
 * Convert imperial feet to metric meters
 ***************************************************/
double convertFeetToMeters(double feet) {
    double meters = feet * 0.3048;
    return meters;
}
```

Function names are typically verbs, and variable names are typically nouns. Input parameters are treated like variables inside the function. Calling a function is like looking up a footnote: the program jumps to the function, executes it, and returns to the original spot.

**Tools:**
- Linux system
- emacs (or vi) editor
- g++ compiler
- styleChecker
- testBed
- submit utility

**Process:**
1. Log into the Linux lab system (locally or remotely).
2. Copy the assignment template from `/home/cs124/template.cpp` using the `cp` command.
3. Edit your program file with emacs.
4. Write a C++ program that:
    - Declares and defines at least one function (besides `main`).
    - Passes data into the function using both pass-by-value and pass-by-reference.
    - Demonstrates variable scope.
    - Calls the function(s) from `main` and outputs the results.
5. Compile your program with `g++`.
6. Check your program with `testBed` and `styleChecker`.
7. Submit your assignment using the `submit` command.

**Requirements:**
- Follow University coding standards (see Appendix A).
- Use the provided template and fill in your name and assignment details.
- Save and exit your editor properly.

**Tip:**
Organize your files carefully and ask lab assistants for help if needed.

---

### JavaScript Equivalent Assignment

**Scenario:**
You'll write a JavaScript program that uses functions to break a problem into smaller parts. You'll practice passing data into functions, understand the difference between pass-by-value and pass-by-reference (note: JavaScript passes primitives by value and objects by reference), and identify variable scope.

**Objectives:**
- Create a function in JavaScript.
- Pass data into a function (understand value vs. reference for primitives and objects).
- Identify the scope of a variable in a program.

**Prerequisites:**
- VS Code installed.
- Node.js runtime installed.

**Tools:**
- Text editor (VS Code recommended)
    - Install VS Code by following [vscode-installation-instructions.md](../../../../vscode-installation-instructions.md).
- Node.js installed on your system
    - Install Node.js by following [nodejs-installation-instructions.md](../../../../nodejs-installation-instructions.md).

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. Add code to `main.js` to:
    - Declare and define at least one function (besides the main script).
    - Pass data into the function (demonstrate value vs. reference for primitives and objects).
    - Demonstrate variable scope (block, function, and global scope).
    - Call the function(s) and output the results to the console.
3. Save the file.
4. Open the terminal.
5. Run `npm i` to install the needed dependencies.
6. Run your program with the command: `node main.js`
7. (Optional) Use the `npm run styleCheck` command.
8. Test your program using `npm run testBed`.
9. Submit your assignment as described in the course instructions.

**Requirements:**
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Tip:**
Organize your files and ask for help if you encounter issues with your editor or Node.js setup.

---

### Author Notes

- This assignment introduces functions, parameter passing, and variable scope in both C++ and JavaScript.
- In C++, you'll use pass-by-value and pass-by-reference; in JavaScript, primitives are passed by value and objects by reference.
- Practice writing and calling functions, and observe how scope affects variable accessibility.
- Understanding functions is essential for all future programming assignments.
