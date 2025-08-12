## Assignment Notes

### Unit 3 Practice Test — Practice 3.3: Letter Frequency in a File

#### Context

This practice test will help you review file input, character processing, modularization, and program style. You will write a program to count the frequency of a given letter in a file.

---

### Original Assignment Requirements (C++)

**Scenario:**
Write a program to count the frequency of a given letter in a file. Prompt the user for the filename and the letter, read the file one character at a time, and display the count.

**Example:**
```
What is the name of the file: /home/cs124/tests/practice33.cpp
What letter should we count: t
There are 125 t's in the file

What is the name of the file: /home/cs124/tests/practice33.cpp
What letter should we count: i
There are 66 i's in the file
```

**Assignment:**
- Prompt the user for the filename.
- Prompt the user for the letter to count.
- Read the file one character at a time.
- Compare each character to the target letter.
- Display the count of instances on the screen.
- Use proper modularization (functions).
- Run the test bed: `testBed cs124/practice33 practice33.cpp`
- Validate your answers against `/home/cs124/tests/practice33.cpp`.

**Requirements:**
- Use arrays and file input as needed.
- Follow University coding standards (see Appendix A).
- Include your name and assignment details in the header.
- Ensure your code runs without errors.

**Grading Criteria:**
- Syntax of the array: 30%
- File interface: 30%
- Problem solving: 20%
- Modularization: 10%
- Programming Style: 10%

---

### JavaScript Equivalent Assignment

**Scenario:**
Write a JavaScript program to count the frequency of a given letter in a file. Prompt the user for the filename and the letter, read the file one character at a time, and display the count.

**Example:**
```
What is the name of the file: practice33.js
What letter should we count: t
There are 125 t's in the file

What is the name of the file: practice33.js
What letter should we count: i
There are 66 i's in the file
```

**Assignment:**
- Prompt the user for the filename (using `readline-sync` or similar for Node.js).
- Prompt the user for the letter to count.
- Read the file one character at a time.
- Compare each character to the target letter.
- Display the count of instances on the screen.
- Use proper modularization (functions).
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. Add code to `main.js` to:
    - Prompt for the filename and letter.
    - Read the file and count the letter frequency.
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

- This practice test reinforces file input, character processing, and modularization in both C++ and JavaScript.
- Practice reading files, processing characters, and using functions.
- Understanding these concepts is essential for all future programming assignments.
