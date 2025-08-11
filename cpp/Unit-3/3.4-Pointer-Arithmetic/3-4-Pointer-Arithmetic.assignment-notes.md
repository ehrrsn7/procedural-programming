## Assignment Notes

### 3.4 Pointer Arithmetic — Assignment Overview

#### Context

In this assignment, you'll practice traversing strings using pointers instead of array indexes. You'll modify the `countLetters()` function from Assignment 3.2 to use pointer arithmetic, and write a driver program to test it.

---

### Original Assignment Requirements (C++)

**Scenario:**
Modify `countLetters()` so that it walks through the string using pointers instead of array indexes. The output should be exactly the same as with Assignment 3.2.

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
- Implement `countLetters()` using pointer arithmetic to traverse the string.
- In `main()`, prompt for a letter and a line of text.
- Call `countLetters()` and display the result.
- Run the test bed: `testBed cs124/assign34 assignment34.cpp`
- Submit your assignment with the name “Assignment 34” in the header.

**Requirements:**
- Use pointer arithmetic to traverse the string.
- Follow University coding standards (see Appendix A).
- Include your name and assignment details in the header.
- Ensure your code runs without errors.

---

### JavaScript Equivalent Assignment

**Scenario:**
JavaScript does not have pointer arithmetic, but for practice, you can use iterators or simulate pointer-like traversal using variables. The output should match Assignment 3.2.

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
- Simulate pointer-like traversal (e.g., using a while loop and a variable as a "pointer").
- In `main()`, prompt for a letter and a line of text.
- Call your function and display the result.
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. Add code to `main.js` to:
    - Prompt for a letter and a line of text.
    - Call your function and display the result.
3. Save the file.
4. Open the terminal.
5. Run `npm i` to install the needed dependencies.
6. Run your program with the command: `node main.js`
7. (Optional) Use the `npm run styleCheck` command.
8. Test your program using `npm run testBed`.
9. Submit your assignment as described in the course instructions.

---

### Author Notes

- This assignment reinforces pointer arithmetic (C++) and string traversal in both C++ and JavaScript.
- Practice using pointers to process strings.
- Understanding pointer arithmetic is essential for advanced programming assignments in C++.
- In JavaScript, this isn't a critical idea. It will probably be omitted in AP CSP.
