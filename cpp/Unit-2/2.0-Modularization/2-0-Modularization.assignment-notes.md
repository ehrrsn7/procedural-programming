## Assignment Notes

### 2.0 Modularization — Assignment Overview

#### Context

In this unit, you'll learn how to manage large and complex programs by breaking them into smaller, more manageable pieces. You'll use structure charts to map out program functions, measure cohesion and coupling, and design programs with high modularization.

---

### Original Assignment Requirements (C++)

**Scenario:**
Sue is working on a large project with many lines of code and dozens of functions. Some functions are huge, some are tiny. To make sense of the code, she needs to map all the functions and judge their size and purpose. This exercise introduces you to modularization tools and techniques.

**Objectives:**
- Measure the Cohesion level of a function.
- Measure the degree of Coupling between functions.
- Create a map of a program using a Structure Chart.
- Design programs that exhibit high degrees of modularization.

**Prerequisites:**
- Create a function in C++ (see Chapter 1.4).
- Pass data into a function using both pass-by-value and pass-by-reference (see Chapter 1.4).

**Overview:**
As programs grow in size and complexity, it becomes impossible to keep the entire design in your head. Modularization is a collection of tools, metrics, and techniques that help reduce large problems into smaller ones. The main tools are:
- Structure Chart: A graphical representation of the functions in a program and how they call each other.
- Cohesion: A metric for how dedicated a function is to a single task.
- Coupling: A metric for the complexity of information interchange between functions.

**Structure Chart Example:**
A program to prompt the user for their age and display a witty message:
```
What is your age: 29
You are 29 again? I was 29 for over a decade!
```
Structure Chart:
- main
  - prompt (returns age)
  - display (accepts age)

**Function Prototypes:**
```cpp
int prompt();
void display(int age);
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
    - Uses a structure chart to plan the program.
    - Measures cohesion and coupling of functions.
    - Implements modular design with multiple functions.
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
You'll write a JavaScript program that uses modularization techniques to manage complexity. You'll use structure charts to plan your program, measure cohesion and coupling, and design with multiple functions.

**Objectives:**
- Measure the Cohesion level of a function.
- Measure the degree of Coupling between functions.
- Create a map of a program using a Structure Chart.
- Design programs that exhibit high degrees of modularization.

**Prerequisites:**
- Create a function in JavaScript.
- Pass data into a function (understand value vs. reference for primitives and objects).

**Tools:**
- Text editor (VS Code recommended)
    - Install VS Code by following [vscode-installation-instructions.md](../../../../vscode-installation-instructions.md).
- Node.js installed on your system
    - Install Node.js by following [nodejs-installation-instructions.md](../../../../nodejs-installation-instructions.md).

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. For each of the three problems below, create a Structure Chart that shows how you would break the problem into functions, what each function does (Cohesion), how data is passed between them (Coupling), and how the functions call each other.
    - **Problem 1: Compute Grade**
      Create a Structure Chart for a program that converts a numeric grade (e.g., 88%) into a letter grade (e.g., B+).
      Example:
      ```
      What is your grade in percent: 88
      Your grade is B+
      ```
    - **Problem 2: Compute Health Insurance Deduction**
        Create a Structure Chart for a program that prompts the user for their allowance, calculates the amount left after deducting health insurance (20%), and displays the result.
        Example:
        ```
        What is your allowance? $10.50
        You get to spend: $8.40
        ```
    - **Problem 3: Currency Conversion**
      Create a Structure Chart for a program that prompts the user for an amount and displays the equivalent in British Pounds, Euros, and Japanese Yen.
      Example:
      ```
      How much money do you want to convert? $100.00
          British Pounds: £61.50
          Euros: €70.09
          Japanese Yen: ¥8079.06
      ```
3. Submit your assignment:
- Please bring these Structure Charts into class on a sheet of paper (face-to-face students) or take a picture and submit it electronically (online students). Don’t forget to put your name on your assignment!

**Tip:**
Draw your Structure Charts on paper or use a diagram tool, then refer to them as you plan your program design. Be sure to include your name on your assignment.

**Requirements:**
- Follow any diagramming or documentation standards specified by your instructor.
- Clearly label each Structure Chart with the problem number and your name.
- Make sure your charts are neat and legible.

**Tip:**
Organize your charts and notes carefully, and ask for help if you have questions about modularization concepts or structure chart notation.

---

### Author Notes

- This assignment introduces modularization, structure charts, cohesion, and coupling in both C++ and JavaScript.
- Practice planning your program before coding, and use multiple functions to manage complexity.
- Understanding modularization is essential for all future programming assignments.
