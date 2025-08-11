## Assignment Notes

### 3.3 Pointers — Assignment Overview

#### Context

In this assignment, you'll practice using pointers to select and modify data. You'll write a program to compare two account balances, use a pointer to the account with the highest balance, and deduct the cost of a date from that account.

---

### Original Assignment Requirements (C++)

**Scenario:**
Ask two people for their account balance. The person with the most money pays for the date (dinner, movie, ice cream). Use a pointer to modify the correct account balance.

**Example:**
```
What is Sam's balance? 229.12
What is Sue's balance? 241.45
Cost of the date:
        Dinner:    32.19
        Movie:     14.50
        Ice cream: 6.00
Sam's balance: $229.12
Sue's balance: $188.76
```

**Assignment:**
- Prompt for Sam's and Sue's balances.
- Store both balances as variables.
- Create a pointer to the account with the largest balance.
- Prompt for the cost of dinner, movie, and ice cream (with tab formatting).
- Deduct the costs from the account pointed to by the pointer.
- Display both balances at the end.
- Challenge: Write a function `void date(float *pAccount)` to handle the deductions.
- Run the test bed: `testBed cs124/assign33 assignment33.cpp`
- Submit your assignment with the name “Assignment 33” in the header.

**Requirements:**
- Use pointers to select and modify the correct account.
- Follow University coding standards (see Appendix A).
- Include your name and assignment details in the header.
- Ensure your code runs without errors.

---

### JavaScript Equivalent Assignment

**Scenario:**
Write a JavaScript program to compare two account balances, use a reference to the account with the highest balance, and deduct the cost of a date from that account.

**Example:**
```
What is Sam's balance? 229.12
What is Sue's balance? 241.45
Cost of the date:
        Dinner:    32.19
        Movie:     14.50
        Ice cream: 6.00
Sam's balance: $229.12
Sue's balance: $188.76
```

**Assignment:**
- Prompt for Sam's and Sue's balances (using `readline-sync` or similar for Node.js).
- Store both balances as variables.
- Use a reference (object or array) to the account with the largest balance.
- Prompt for the cost of dinner, movie, and ice cream (with tab formatting).
- Deduct the costs from the correct account.
- Display both balances at the end.
- Challenge: Write a function to handle the deductions.
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. Add code to `main.js` to:
    - Prompt for both balances.
    - Use a reference to the account with the highest balance.
    - Prompt for and deduct the costs.
    - Display both balances.
3. Save the file.
4. Open the terminal.
5. Run `npm i` to install the needed dependencies.
6. Run your program with the command: `node main.js`
7. (Optional) Use the `npm run styleCheck` command.
8. Test your program using `npm run testBed`.
9. Submit your assignment as described in the course instructions.

---

### Author Notes

- This assignment reinforces pointers (C++) and references (JavaScript), modular design, and formatted output.
- Practice using pointers/references to select and modify data.
- Understanding pointers and references is essential for advanced programming assignments.
- Pointers are less of a critical idea in JavaScript. This assignment might be omitted in my AP CSP course.
