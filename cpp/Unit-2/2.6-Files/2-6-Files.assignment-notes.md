## Assignment Notes

### 2.6 Files — Assignment Overview

#### Context

In this assignment, you'll write a program to read 10 grades from a file and display the average. You'll practice file input, error handling, and modular program design using multiple functions.

---

### Original Assignment Requirements (C++)

**Scenario:**
Write a program with the following functions:
- `getFileName(char fileName[])`: Prompts the user for the file name and returns it via a parameter.
- `readFile(char fileName[])`: Reads the file and returns the average score of the ten values. If there are not exactly ten values, display an error message.
- `display(float average)`: Displays the average score to zero decimals of accuracy (rounded).

**Example:**
File: `grades.txt`
```
90 86 95 76 92 83 100 87 91 88
```
Output:
```
Please enter the filename: grades.txt
Average Grade: 89%
```
If the file is missing or does not contain exactly ten values:
```
Error reading file "grades.txt"
```

**Assignment:**
- Implement the three functions as described.
- Use modular design: main calls getFileName, readFile, and display.
- Run the test bed: `testBed cs124/assign26 assignment26.cpp`
- Submit your assignment with the name “Assignment 26” in the header.

**Requirements:**
- Use file input and error handling.
- Follow University coding standards (see Appendix A).
- Include your name and assignment details in the header.
- Ensure your code runs without errors.

---

### JavaScript Equivalent Assignment

**Scenario:**
Write a JavaScript program to read 10 grades from a file and display the average. Use the following functions:
- `getFileName()`: Prompts the user for the file name and returns it.
- `readFile(fileName)`: Reads the file and returns the average score of the ten values. If there are not exactly ten values, display an error message.
- `display(average)`: Displays the average score to zero decimals of accuracy (rounded).

**Example:**
File: `grades.txt`
```
90 86 95 76 92 83 100 87 91 88
```
Output:
```
Please enter the filename: grades.txt
Average Grade: 89%
```
If the file is missing or does not contain exactly ten values:
```
Error reading file "grades.txt"
```

**Assignment:**
- Implement the three functions as described.
- Use modular design: main calls getFileName, readFile, and display.
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. Add code to `main.js` to:
    - Prompt for the file name.
    - Read the file and calculate the average.
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

- This assignment reinforces file input, error handling, and modular design in both C++ and JavaScript.
- Practice reading files, validating input, and displaying results.
- Understanding file I/O is essential for all future programming assignments.
