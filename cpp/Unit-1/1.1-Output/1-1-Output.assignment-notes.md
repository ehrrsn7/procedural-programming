## Assignment Notes

### 1.1 Output — Assignment Overview

#### Context

In this unit, you'll learn how to display text and numbers on the screen, align text, and format numbers to a desired number of decimal places. You'll use the basic output features of your programming language to practice these skills.

---

### Original Assignment Requirements (C++)

**Scenario:**
Sam is sitting in the computer lab, bored, and decides to create some ASCII art by reproducing his school logo using C++. This exercise introduces you to outputting text and numbers using streams.

```
 ____  _  _  __  __     ____
(  _ \( \/ )(  )(  )   (_  _)
 | _ < \  /  )(__)(     _)(_
(____/ (__) (______)   (____)
```

**Objectives:**
- Display text and numbers on the screen.
- Left-align and right-align text.
- Format numbers to a desired number of decimal places.

**Prerequisites:**
- Be able to type and save a simple C++ program.
- Know the major parts of a computer program (statements, headers, etc.).
- Be familiar with the tools used for assignments.

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
4. Write a C++ program that outputs several lines of text and numbers using `cout`.
5. Use formatting commands to control alignment and decimal places:
    - `cout.setf(ios::fixed);`
    - `cout.setf(ios::showpoint);`
    - `cout.precision(2);`
6. Compile your program with `g++`.
7. Check your program with `testBed` and `styleChecker`.
8. Submit your assignment using the `submit` command.

**Requirements:**
- Follow University coding standards (see Appendix A).
- Use the provided template and fill in your name and assignment details.
- Save and exit your editor properly.

**Tip:**
Organize your files carefully and ask lab assistants for help if needed.

---

### JavaScript Equivalent Assignment

**Scenario:**
You'll practice outputting text and numbers to the console, aligning text, and formatting numbers in JavaScript, mirroring the C++ assignment.


```
  ____  __    __  _   _   ____
 | D  ) \ \  / / | |_| | ( ___)
 |   <   \ \/ /  |  _  |  \  \
 |_|\_\   \__/   |_| |_| (____)
```

(another cool way:)
```
 ________  ___      ___ ___  ___  ________
|\   __  \|\  \    /  /|\  \|\  \|\   ____\
\ \  \|\  \ \  \  /  / | \  \\\  \ \  \___|_
 \ \   _  _\ \  \/  / / \ \   __  \ \_____  \
  \ \  \\  \\ \    / /   \ \  \ \  \|____|\  \
   \ \__\\ _\\ \__/ /     \ \__\ \__\____\_\  \
    \|__|\|__|\|__|/       \|__|\|__|\_________\
                                    \|_________|
```

**Objectives:**
- Display text and numbers on the console.
- Left-align and right-align text (using string methods).
- Format numbers to a desired number of decimal places (using `.toFixed()`).

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
2. Add code to `main.js` to output several lines of text and numbers to the console using the provided `print` method or `console.log`.
    - Use string methods for alignment (e.g., `padEnd`, `padStart`).
    - Use `.toFixed(2)` for formatting numbers.
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

<add lesson plan information>