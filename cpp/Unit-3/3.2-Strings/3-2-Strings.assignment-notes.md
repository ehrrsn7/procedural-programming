## Assignment Notes

### 3.2 Strings — Assignment Overview

#### Context

In this assignment, you'll practice traversing strings (and arrays) using index notation. You'll write a function to count the number of occurrences of a given letter in a string, and a driver program to test it. This is the first part of a two-part series (the next will use pointers).

---

### Original Assignment Requirements (C++)

**Scenario:**
Write a function `countLetters()` to return the number of times a given letter appears in a string. Use array notation (indexing) to traverse the string. Write a driver program to prompt the user for a letter and a line of text, then display the result.

**Example:**
```
Enter a letter: z
Enter text: NoZ'sHere!
Number of 'z's: 0

Enter a letter: a
Enter text: Brigham Young University - Idaho
Number of 'a's: 2
```

**Assignment:**
- Implement `countLetters()` using array notation.
- In `main()`, prompt for a letter and a line of text (use `cin.ignore()` before `getline()` if needed).
- Call `countLetters()` and display the result.
- Run the test bed: `testBed cs124/assign32 assignment32.cpp`
- Submit your assignment with the name “Assignment 32” in the header.

**Requirements:**
- Use array notation to traverse the string.
- Follow University coding standards (see Appendix A).
- Include your name and assignment details in the header.
- Ensure your code runs without errors.

---

### JavaScript Equivalent Assignment

**Scenario:**
Write a JavaScript function to count the number of times a given letter appears in a string, using array notation (indexing). Write a driver program to prompt the user for a letter and a line of text, then display the result.

**Example:**
```
Enter a letter: z
Enter text: NoZ'sHere!
Number of 'z's: 0

Enter a letter: a
Enter text: Brigham Young University - Idaho
Number of 'a's: 2
```

**Assignment:**
- Implement `countLetters()` using array notation.
- In `main()`, prompt for a letter and a line of text (using `readline-sync` or similar for Node.js).
- Call `countLetters()` and display the result.
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. Add code to `main.js` to:
    - Prompt for a letter and a line of text.
    - Call `countLetters()` and display the result.
3. Save the file.
4. Open the terminal.
5. Run `npm i` to install the needed dependencies.
6. Run your program with the command: `node main.js`
7. (Optional) Use the `npm run styleCheck` command.
8. Test your program using `npm run testBed`.
9. Submit your assignment as described in the course instructions.

---

### Author Notes

- This assignment reinforces string traversal, array notation, and modular design in both C++ and JavaScript.
- Practice using loops and indexing to process strings.
- Understanding string and array traversal is essential for all future programming assignments.
