## Assignment Notes

### 2.1 Debugging — Assignment Overview

#### Context

In this unit, you'll learn how to use debugging tools and techniques to catch and fix errors in your programs. You'll practice using assertions, organizing constants, writing driver and stub functions, and using preprocessor directives to manage debug code.

---

### Original Assignment Requirements (C++)

**Scenario:**
Sam spent hours tracking down a bug caused by a small typo. To save time and effort, he learns to use debugging tools like asserts, constants, and driver programs to catch errors early and efficiently.

**Objectives:**
- Create asserts to catch many of the most common programmer problems.
- Use #define to move constants to the top of a program.
- Use #ifdef to create debug code in order to test a function.
- Write a driver program to verify the correctness of a function.
- Create stub functions to make an outline of a large program.

**Prerequisites:**
- Create a function in C++ (see Chapter 1.4).
- Convert a logic problem into a Boolean expression (see Chapter 1.5).
- Pass data into a function using both pass-by-value and pass-by-reference (see Chapter 1.4).
- Measure the cohesion level of a function (see Chapter 2.0).
- Measure the degree of coupling between functions (see Chapter 2.0).
- Create a map of a program using structure charts (see Chapter 2.0).

**Overview:**
Assertions are checks placed in a program to represent assumptions the developer thinks are always true. If an assertion fails, it notifies the programmer and typically terminates the program. Asserts are used to:
- Identify logical errors
- Find special-case bugs
- Highlight integration issues

Asserts are not for user-initiated error handling or file errors. In C++, use `#include <cassert>` and the `assert()` macro. Remove asserts from production builds with the `-DNDEBUG` compiler switch.

**Example:**
```cpp
#include <cassert>

float computeTithing(float income) {
   assert(income >= 0.00);       // Only works for positive income
   float tithe = income * 0.10;
   assert(tithe >= 0.00);        // Tithe should not be negative
   assert(income > tithe);       // 10% should be less than 100%
   return tithe;
}
```

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
4. Add assertions to your functions to check assumptions.
5. Use #define to organize constants at the top of your program.
6. Use #ifdef to create debug code for testing functions.
7. Write driver and stub functions as needed.
8. Compile your program with `g++` (use `-DNDEBUG` to remove asserts for production).
9. Check your program with `testBed` and `styleChecker`.
10. Submit your assignment using the `submit` command.

**Requirements:**
- Follow University coding standards (see Appendix A).
- Use the provided template and fill in your name and assignment details.
- Save and exit your editor properly.

**Tip:**
Organize your files carefully and ask lab assistants for help if needed.

---

### JavaScript Equivalent Assignment

**Scenario:**
You'll write a JavaScript program that uses assertions, constants, and driver/stub functions to catch and fix errors. Use libraries like `assert` (Node.js) and organize your code for easy debugging.

**Objectives:**
- Create assertions to catch common programmer problems.
- Organize constants at the top of your program.
- Use conditional code for debugging and testing functions.
- Write driver and stub functions to verify correctness.

**Prerequisites:**
- Create a function in JavaScript.
- Convert a logic problem into a Boolean expression.
- Pass data into a function (understand value vs. reference for primitives and objects).
- Measure cohesion and coupling (see 2.0 Modularization).
- Create a map of a program using structure charts (see 2.0 Modularization).

**Tools:**
- Text editor (VS Code recommended)
    - Install VS Code by following [vscode-installation-instructions.md](../../../../vscode-installation-instructions.md).
- Node.js installed on your system
    - Install Node.js by following [nodejs-installation-instructions.md](../../../../nodejs-installation-instructions.md).

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. Add assertions to your functions using Node.js's `assert` module.
3. Organize constants at the top of your program.
4. Use conditional code (e.g., `if (process.env.DEBUG) { ... }`) for debugging.
5. Write driver and stub functions as needed.
6. Save the file.
7. Open the terminal.
8. Run `npm i` to install the needed dependencies.
9. Run your program with the command: `node main.js`
10. (Optional) Use the `npm run styleCheck` command.
11. Test your program using `npm run testBed`.
12. Submit your assignment as described in the course instructions.

**Requirements:**
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Tip:**
Organize your files and ask for help if you encounter issues with your editor or Node.js setup.

---

### Author Notes

- This assignment introduces debugging tools and techniques in both C++ and JavaScript.
- Practice using assertions, constants, and driver/stub functions to catch and fix errors early.
- Understanding debugging is essential for all future programming assignments.
