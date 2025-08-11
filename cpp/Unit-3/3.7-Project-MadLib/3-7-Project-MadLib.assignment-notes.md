## Assignment Notes

### Unit 3 Project: Mad Lib

#### Context

This project guides you through designing and implementing a Mad Lib® word game. The program will prompt the user for a Mad Lib file, ask for word substitutions, and display the completed story. The project is divided into three phases: design, prompt and input, and display.

---

### Project 08: Design the Mad Lib Program

1. Create a structure chart for the Mad Lib program.
2. Write pseudocode for `readFile` to read the Mad Lib file into a data structure (e.g., array of words).
3. Write pseudocode for `askQuestion` to convert prompts (e.g., `:grandma's_name`) into human-readable form and store user responses.

---

### Project 09: Read File and Prompt User

- Prompt the user for the filename of the Mad Lib.
- Read the file into an array of words (c-strings, not String class).
- For each prompt in the file, display a human-readable question (tab, sentence-case, underscores to spaces, colon and space at the end).
- Store the user's responses in the story.
- Use modular design and stub functions based on your structure chart.
- Test with: `testBed cs124/project09 project09.cpp`
- Submit with "Project 09, Mad Lib" in the program header.

**File Format:**
- Tokens are separated by spaces or newlines.
- Prompts start with a colon (e.g., `:plural_noun`).
- Special symbols: `!` (newline), `<` (open quote), `>` (close quote), `.` (period), `,` (comma).
- No more than 1024 characters, 32 lines, 80 chars/line, 256 words, 32 chars/word.

---

### Project 10: Display the Mad Lib

- After collecting all user input, display the completed story.
- Insert spaces before each word by default, except:
  - No space after open quote or newline.
  - No space before close quote, period, or comma.
- Allow the user to play multiple games in a loop.
- Test with: `testBed cs124/project10 project10.cpp`
- Submit with "Project 10, Mad Lib" in the program header.

**Sample Output:**
```
Please enter the filename of the Mad Lib: madlibZoo.txt
        Plural noun: boys
        Plural noun: girls
        Type of liquid: lemonade
        Adjective: fuzzy
        Funny noise: squeak
        Another funny noise: snort
        Adjective: hungry
        Animal: mouse
        Another animal: blue-fin tuna
Zoos are places where wild boys are kept in pens or cages so that girls can come and look at them. ...
Do you want to play again (y/n)? n
Thank you for playing.
```

---

### JavaScript Equivalent Project

- Design and implement a Mad Lib program in JavaScript that:
  - Prompts for the filename and reads the file (use Node.js file I/O).
  - Prompts for all word substitutions.
  - Displays the completed story with correct formatting.
  - Allows the user to play multiple games.
- Use modular design: separate functions for file reading, prompting, and display.
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

- This project reinforces modular design, file I/O, string processing, and formatted output in both C++ and JavaScript.
- Practice breaking down a complex problem into manageable phases.
- Understanding these concepts is essential for advanced programming projects.
