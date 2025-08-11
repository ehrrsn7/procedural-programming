## Assignment Notes

### Unit 2 Project: Calendar Program

#### Context

This project will guide you through designing and implementing a calendar program that displays any month from 1753 forward, taking into account leap years and correct weekday offsets. The project is divided into three phases: design, offset calculation, and table display.

---

### Project 05: Design the Calendar Program

- Write a structure chart for the calendar program.
- Ensure all functions exhibit high cohesion and low coupling.
- Self-grade your design using the provided rubric.

---

### Project 06: Compute Offset and Display Table (Pseudocode)

1. **computeOffset(month, year):**
   - Determine the day of the week for the first day of the month by counting days since January 1, 1753 (Monday, offset == 0).
   - Use a loop to sum the days for each year and month up to the target month/year.
   - The offset is the remainder of total days divided by 7.
   - Offset values: Sunday = 6, Monday = 0, ..., Saturday = 5.
   - Prototype: `int computeOffset(int month, int year);`

2. **displayTable(offset, numDays):**
   - Display the calendar table for the given month.
   - Print the column headers: `Su  Mo  Tu  We  Th  Fr  Sa`
   - Print spaces for the offset before the first day.
   - Print day numbers, inserting a newline after each Saturday.
   - Prototype: `void displayTable(int offset, int numDays);`

---

### Project 07: Implement the Calendar Program

- Prompt the user for the month number (1-12) and year (>= 1753). Re-prompt for invalid input.
- Calculate the offset using `computeOffset`.
- Display the calendar using `displayTable`.
- Handle edge cases:
  - No blank line between headers and first week (even if offset == 6).
  - No blank row at the bottom if the last day is Saturday.
- Use the Linux `cal` utility to verify your output.
- Test with: `testBed cs124/project07 project07.cpp`
- Submit with "Project 07, Calendar" in the program header.

**Sample Output:**
```
Enter a month number: 1
Enter year: 1753
  January, 1753
  Su  Mo  Tu  We  Th  Fr  Sa
       1   2   3   4   5   6
    7   8   9  10  11  12  13
   14  15  16  17  18  19  20
   21  22  23  24  25  26  27
   28  29  30  31
```

---

### JavaScript Equivalent Project

- Design and implement a calendar program in JavaScript that:
  - Prompts for month and year.
  - Validates input.
  - Calculates the offset for the first day of the month (using loops, not built-in date functions).
  - Displays the calendar table in the console.
- Use modular design: separate functions for input, offset calculation, and table display.
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Process:**
1. Download the zip folder and open in VS Code.
2. Implement the required functions in `main.js`.
3. Save the file.
4. Open the terminal.
5. Run `npm i` to install dependencies.
6. Run your program with `node main.js`.
7. (Optional) Use `npm run styleCheck`.
8. Test with `npm run testBed`.
9. Submit as described in the course instructions.

---

### Author Notes

- This project reinforces modular design, loops, date calculations, and formatted output in both C++ and JavaScript.
- Practice breaking down a complex problem into manageable phases.
- Understanding these concepts is essential for advanced programming projects.
