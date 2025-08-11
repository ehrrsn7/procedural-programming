## Assignment Notes

### 1.3 Expressions — Assignment Overview

#### Context

In this unit, you'll learn how to represent and evaluate mathematical expressions in code, understand the differences between integer and floating point division, and use the modulus operator to solve problems. You'll see how computers process equations and how expressions are evaluated step by step.

---

### Original Assignment Requirements (C++)

**Scenario:**
Sam once spent a summer working as a cashier in a fast-food outlet. Making change for customers was a mental exercise, but he wondered how a computer could do it. He wrote a program to automate this task, introducing the use of expressions in C++.

**Objectives:**
- Represent simple equations in C++.
- Understand the differences between integer division and floating point division.
- Use the modulus operator to solve math and logic problems.

**Prerequisites:**
- Choose the best data-type to represent your data (see Chapter 1.2).
- Declare a variable (see Chapter 1.2).
- Display text and numbers on the screen (see Chapter 1.1).

**Overview:**
Computer programs perform mathematical operations much like you would expect, but there are differences due to how computers store numbers. For example, integer division truncates the result, and variables can be updated in code. In C++, mathematical equations are called expressions—a collection of values and operations that, when evaluated, result in a single value.

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
    - Declares variables for relevant values (e.g., amount due, amount paid).
    - Uses expressions to calculate change, integer division, floating point division, and modulus.
    - Outputs the results to the screen.
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
You'll write a JavaScript program that simulates making change for a cash transaction, using variables and expressions to calculate the result. This mirrors the C++ assignment and gives practice with expressions, division, and modulus in JavaScript.

**Objectives:**
- Represent simple equations in JavaScript.
- Understand the differences between integer division and floating point division.
- Use the modulus operator to solve math and logic problems.

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
    - Declare variables for relevant values (e.g., amount due, amount paid).
    - Use expressions to calculate change, integer division (using `Math.floor`), floating point division, and modulus (`%`).
    - Output the results to the console.
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

- This assignment introduces mathematical expressions, integer and floating point division, and the modulus operator in both C++ and JavaScript.
- In C++, you'll use `/` for division and `%` for modulus; in JavaScript, use `/` for division, `Math.floor` for integer division, and `%` for modulus.
- Practice writing and evaluating expressions, and observe how data types affect the results.
- Understanding expressions is essential for all future programming assignments.
