## Assignment Notes

### 1.2 Input & Variables — Assignment Overview

#### Context

In this unit, you'll learn how to declare variables, choose appropriate data types, and accept user input from the keyboard. You'll practice storing and manipulating data in variables, and understand how data types affect what can be stored and how it is interpreted.

---

### Original Assignment Requirements (C++)

**Scenario:**
Sue is excited because she just got a list of ancestor names from her grandmother. The names are in the format `[FirstName MiddleInitial LastName]`, but she needs them in `[LastName, FirstName MiddleInitial]`. Rather than retyping the entire list, Sue writes a program to swap the names. This exercise introduces you to variables and user input.

**Objectives:**
- Choose the best data-type to represent your data.
- Declare a variable.
- Accept user input from the keyboard and store it in a variable.

**Prerequisites:**
- Be able to type the code for a simple program (see Chapter 0.2).
- Use the provided tools to complete a homework assignment (see Chapter 1.0).
- Display text and numbers on the screen (see Chapter 1.1).

**Overview:**
Variables in computer languages are named locations where data is stored. The name should be clear and unambiguous. The data-type determines how the data is interpreted (e.g., integer, floating point, character, etc.).

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
    - Declares variables for first name, middle initial, and last name.
    - Accepts user input for each variable.
    - Outputs the name in the format `[LastName, FirstName MiddleInitial]`.
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
You'll write a JavaScript program that prompts the user for their first name, middle initial, and last name, then outputs the name in the format `[LastName, FirstName MiddleInitial]`. This mirrors the C++ assignment and gives practice with variables and user input in JavaScript.

**Objectives:**
- Choose the best data-type to represent your data.
- Declare a variable.
- Accept user input from the keyboard and store it in a variable (using `prompt` or a Node.js input package).

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
    - Prompt the user for their first name, middle initial, and last name using the `prompt` function.
    - Store each input in a variable.
    - Output the name in the format `[LastName, FirstName MiddleInitial]`.
3. Save the file.
4. Open the terminal.
5. Run `npm i` to install the needed dependencies).
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

- This assignment introduces variables, data types, and user input in both C++ and JavaScript.
- In C++, you'll use `cin` for input; in JavaScript (Node.js), use `prompt`.
- Practice choosing appropriate variable names and data types for your data.
- Understanding variables and input is foundational for all future programming assignments.
