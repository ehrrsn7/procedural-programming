## Assignment Notes

### 1.6 IF Statements — Assignment Overview

#### Context

In this unit, you'll learn how to use IF statements to control the flow of your program. You'll practice writing both Action/No-Action and Action-A/Action-B IF statements, and understand common pitfalls and best practices for conditional logic.

---

### Original Assignment Requirements (C++)

**Scenario:**
Sue is overwhelmed by text messages and wants to filter them like email. She writes a program using IF statements to route messages to the appropriate channel. This exercise introduces you to conditional logic in C++.

**Objectives:**
- Create an IF statement to modify program flow.
- Recognize the pitfalls associated with IF statements.

**Prerequisites:**
- Declare a Boolean variable (see Chapter 1.5).
- Convert a logic problem into a Boolean expression (see Chapter 1.5).
- Recite the order of operations (see Chapter 1.5).

**Overview:**
IF statements allow a program to choose between two courses of action depending on the result of a Boolean expression. There are two main types:
- Action/No-Action: Only one action is taken if the condition is true.
- Action-A/Action-B: One action is taken if the condition is true, another if it is false.

**Example:**
```cpp
// Action/No-Action
if (assignmentLate == true)
   assignmentGrade = 0;

// Action-A/Action-B
if (grade >= 60)
   cout << "Great job!  You passed!\n";
else
   cout << "I will see you again next semester...\n";
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
4. Write a C++ program that:
    - Prompts the user for their GPA.
    - Uses a function to check if the GPA is in a valid range (0.0 to 4.0).
    - Uses both types of IF statements to display appropriate messages.
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
You'll write a JavaScript program that prompts the user for their GPA and uses IF statements to check if the value is in a valid range, displaying appropriate messages. This mirrors the C++ assignment and gives practice with conditional logic in JavaScript.

**Objectives:**
- Create an IF statement to modify program flow.
- Recognize the pitfalls associated with IF statements.

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
    - Prompt the user for their GPA (using `readline-sync` or similar for Node.js).
    - Use a function to check if the GPA is in a valid range (0.0 to 4.0).
    - Use both Action/No-Action and Action-A/Action-B IF statements to display messages.
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

- This assignment introduces IF statements and conditional logic in both C++ and JavaScript.
- In C++, you'll use `if` and `else`; in JavaScript, use `if` and `else` as well.
- Practice writing both Action/No-Action and Action-A/Action-B IF statements.
- Understanding conditional logic is essential for all future programming assignments.
