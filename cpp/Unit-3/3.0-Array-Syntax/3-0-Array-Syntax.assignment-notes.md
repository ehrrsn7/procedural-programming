## Assignment Notes

### 3.0 Arrays — Assignment Overview

#### Context

In this assignment, you'll practice using arrays, functions, and modular program design. You'll write a program to prompt the user for ten integer grades, calculate the average, and display the result.

---

### Original Assignment Requirements (C++)

**Scenario:**
Write a program with the following parts:
- `getGrades()`: Prompts the user for ten grades and stores them in an array passed as a parameter.
- `averageGrades()`: Calculates and returns the average of the grades in the array.
- `main()`: Declares the grades array, calls `getGrades()`, calls `averageGrades()`, and displays the result.

**Example:**
```
Grade 1: 90
Grade 2: 86
Grade 3: 95
Grade 4: 76
Grade 5: 92
Grade 6: 83
Grade 7: 100
Grade 8: 87
Grade 9: 91
Grade 10: 0
Average Grade: 80%
```

**Assignment:**
- Use integers throughout the program.
- Use modular design: main calls getGrades and averageGrades.
- Run the test bed: `testBed cs124/assign30 assignment30.cpp`
- Submit your assignment with the name “Assignment 30” in the header.

**Requirements:**
- Use arrays and functions as described.
- Follow University coding standards (see Appendix A).
- Include your name and assignment details in the header.
- Ensure your code runs without errors.

---

### JavaScript Equivalent Assignment

**Scenario:**
Write a JavaScript program to prompt the user for ten integer grades, calculate the average, and display the result. Use the following functions:
- `getGrades(grades)`: Prompts the user for ten grades and stores them in an array passed as a parameter.
- `averageGrades(grades)`: Calculates and returns the average of the grades in the array.
- `main()`: Declares the grades array, calls `getGrades()`, calls `averageGrades()`, and displays the result.

**Example:**
```
Grade 1: 90
Grade 2: 86
Grade 3: 95
Grade 4: 76
Grade 5: 92
Grade 6: 83
Grade 7: 100
Grade 8: 87
Grade 9: 91
Grade 10: 0
Average Grade: 80%
```

**Additional Example:**

```
Grade 1: -1
Grade 2: -1
Grade 3: -1
Grade 4: -1
Grade 5: -1
Grade 6: -1
Grade 7: -1
Grade 8: -1
Grade 9: -1
Grade 10: -1
Average Grade: ---% 
```

If all grades are -1, there is no valid average. Your program should detect this condition and display an appropriate message instead of an average.

**Assignment:**
- Use integers throughout the program.
- Use modular design: main calls getGrades and averageGrades.
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. Add code to `main.js` to:
    - Declare the grades array.
    - Prompt for ten grades and store them in the array.
    - Calculate and display the average.
3. Save the file.
4. Open the terminal.
5. Run `npm i` to install the needed dependencies.
6. Run your program with the command: `node main.js`
7. (Optional) Use the `npm run styleCheck` command.
8. Test your program using `npm run testBed`.
9. Submit your assignment as described in the course instructions.

---

### Author Notes

- This assignment reinforces arrays, modular design, and user input in both C++ and JavaScript.
- Practice passing arrays to functions and calculating averages.
- Understanding arrays and modularization is essential for all future programming assignments.
