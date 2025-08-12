## Assignment Notes

### 2.5 Loop Design — Assignment Overview

#### Context

In this assignment, you'll write a function to display a calendar for a month, given the number of days and the offset for the first day of the week. This will help you practice loop design, formatting output, and function parameters.

---

### Original Assignment Requirements (C++)

**Scenario:**
Write a function `displayTable()` to display a calendar on the screen. The function takes two parameters:
- `numDays`: The number of days in the month.
- `offset`: The offset from Monday (0 = Monday, 2 = Wednesday, 6 = Sunday).

The function should format the calendar as shown in the examples. Write a `main()` function to prompt the user for the number of days and the offset.

**Example:**
```
Number of days: 30
Offset: 3
  Su  Mo  Tu  We  Th  Fr  Sa
                   1   2   3
   4   5   6   7   8   9  10
  11  12  13  14  15  16  17
  18  19  20  21  22  23  24
  25  26  27  28  29  30

Number of days: 28
Offset: 0
  Su  Mo  Tu  We  Th  Fr  Sa
       1   2   3   4   5   6
   7   8   9  10  11  12  13
  14  15  16  17  18  19  20
  21  22  23  24  25  26  27
  28

Number of days: 31
Offset: 6
  Su  Mo  Tu  We  Th  Fr  Sa
   1   2   3   4   5   6   7
   8   9  10  11  12  13  14
  15  16  17  18  19  20  21
  22  23  24  25  26  27  28
  29  30  31
```

**Assignment:**
- Implement `displayTable(numDays, offset)` to print the calendar.
- Write `main()` to prompt for input and call `displayTable()`.
- Run the test bed: `testBed cs124/assign25 assignment25.cpp`
- Submit your assignment with the name “Assignment 25” in the header.

**Hint:**
See page 182 for a hint (likely about loop structure or formatting).

**Requirements:**
- Use loops and formatting to display the calendar.
- Follow University coding standards (see Appendix A).
- Include your name and assignment details in the header.
- Ensure your code runs without errors.

---

### JavaScript Equivalent Assignment

**Scenario:**
Write a JavaScript function to display a calendar for a month, given the number of days and the offset for the first day of the week. Prompt the user for input and display the calendar in the console.

**Example:**
```
Number of days: 30
Offset: 3
  Su  Mo  Tu  We  Th  Fr  Sa
                   1   2   3
   4   5   6   7   8   9  10
  11  12  13  14  15  16  17
  18  19  20  21  22  23  24
  25  26  27  28  29  30
```

**Assignment:**
- Implement `displayTable(numDays, offset)` to print the calendar.
- Prompt the user for input (using `readline-sync` or similar for Node.js).
- Call `displayTable()` with the user input.
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. Add code to `main.js` to:
    - Prompt for the number of days and offset.
    - Call `displayTable(numDays, offset)` to print the calendar.
3. Save the file.
4. Open the terminal.
5. Run `npm i` to install the needed dependencies.
6. Run your program with the command: `node main.js`
7. (Optional) Use the `npm run styleCheck` command.
8. Test your program using `npm run testBed`.
9. Submit your assignment as described in the course instructions.

---

### Author Notes

- This assignment reinforces loop design, formatting, and function parameters in both C++ and JavaScript.
- Practice using loops and formatting to display structured output.
- Understanding loop design is essential for all future programming assignments.
