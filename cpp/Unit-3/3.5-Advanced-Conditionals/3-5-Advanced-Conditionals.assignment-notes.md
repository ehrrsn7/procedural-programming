## Assignment Notes

### 3.5 Advanced Conditionals — Assignment Overview

#### Context

In this assignment, you'll practice using switch statements and conditional (ternary) operators. You'll write two functions to compute a letter grade and a grade sign from a numeric grade, and a driver program to test them.

---

### Original Assignment Requirements (C++)

**Scenario:**
Write two functions and a driver program:
- `computeLetterGrade()`: Returns the letter grade (A, B, C, D, F) from a number grade using a switch statement.
- `computeGradeSign()`: Returns the grade sign (+, -, or *) from a number grade using at least one conditional expression. If there is no grade sign, return '*'.
- `main()`: Prompts the user for a number grade and displays the letter grade and sign.

**Example:**
```
Enter number grade: 81
81% is B-

Enter number grade: 97
97% is A

Enter number grade: 77
77% is C+
```

**Assignment:**
- Implement `computeLetterGrade(int grade)` using a switch statement.
- Implement `computeGradeSign(int grade)` using at least one conditional (ternary) operator.
- In `main()`, prompt for a number grade and display the result.
- Run the test bed: `testBed cs124/assign35 assignment35.cpp`
- Submit your assignment with the name “Assignment 35” in the header.

**Requirements:**
- Use a switch statement for letter grade.
- Use a conditional operator for grade sign.
- Follow University coding standards (see Appendix A).
- Include your name and assignment details in the header.
- Ensure your code runs without errors.

---

### JavaScript Equivalent Assignment

**Scenario:**
Write two functions and a driver program:
- `computeLetterGrade(grade)`: Returns the letter grade (A, B, C, D, F) from a number grade using a switch statement.
- `computeGradeSign(grade)`: Returns the grade sign (+, -, or *) from a number grade using at least one conditional (ternary) operator. If there is no grade sign, return '*'.
- `main()`: Prompts the user for a number grade and displays the letter grade and sign.

**Example:**
```
Enter number grade: 81
81% is B-

Enter number grade: 97
97% is A

Enter number grade: 77
77% is C+
```

**Assignment:**
- Implement `computeLetterGrade(grade)` using a switch statement.
- Implement `computeGradeSign(grade)` using at least one conditional operator.
- In `main()`, prompt for a number grade and display the result.
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. Add code to `main.js` to:
    - Prompt for a number grade.
    - Call `computeLetterGrade()` and `computeGradeSign()`.
    - Display the result.
3. Save the file.
4. Open the terminal.
5. Run `npm i` to install the needed dependencies.
6. Run your program with the command: `node main.js`
7. (Optional) Use the `npm run styleCheck` command.
8. Test your program using `npm run testBed`.
9. Submit your assignment as described in the course instructions.

---

### Author Notes

- This assignment reinforces switch statements, conditional operators, and modular design in both C++ and JavaScript.
- Practice using advanced conditionals to process and display results.
- Understanding these concepts is essential for all future programming assignments.
