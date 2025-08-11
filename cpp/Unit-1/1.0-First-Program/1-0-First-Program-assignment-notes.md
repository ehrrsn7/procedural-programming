## Assignment Notes

### Original Assignment Requirements (C++)

- **Objective:**
    - Write your first C++ program to display "Hello World" on the screen.

- **Tools:**
    - Linux system
    - emacs (or vi) editor
    - g++ compiler
    - styleChecker
    - testBed
    - submit utility

- **Process:**
    1. Log into the Linux lab system (locally or remotely).
    2. Copy the assignment template from `/home/cs124/template.cpp` using the `cp` command.`
    3. Edit your program file with emacs.
    4. Write a simple C++ program that outputs "Hello World".
    5. Compile your program with `g++`.
    6. Check your program with `testBed` and `styleChecker`.
    7. Submit your assignment using the `submit` command.

- **Requirements:**
    - Follow University coding standards (see Appendix A).
    - Use the provided template and fill in your name and assignment details.
    - Save and exit your editor properly.

- **Prerequisite:**
    - Be able to type and save a simple C++ program.

- **Challenge:**

    - As a challenge, modify your program to display a paragraph including your name and a short introduction. For example:
    ```
    Hello, I am Br. Helfrich.
    
    My favorite thing about teaching is interacting with interesting students every 
    day. Some days, however, students have no questions and don’t bother to come by 
    my office. Those are long and lonely days...
    ```
    - Update your code so that it prints your own introduction paragraph to the console.

- **Tip:**
    - Organize your files carefully and ask lab assistants for help if needed.

---

### JavaScript Equivalent Assignment

- **Description:**
    - Write your first JavaScript program to display "Hello World" in the console.

- **Tools:**
    - Text editor (we will be using VS Code this class)
        - Before proceeding, install VS Code by following the instructions in [vscode-installation-instructions.md](../../../../vscode-installation-instructions.md) before proceeding.
    - Node.js installed on your system
        - Before running your javascript files, make sure Node.js is installed on your system by following the instructions in [nodejs-installation-instructions.md](../../../../nodejs-installation-instructions.md).

- **Process:**
    1. Download the zip folder with all the contents included, then open the folder in VS Code.
        - A common pitfall is not opening the correct folder after extracting. The folder must have the `README.md` and `main.js` files in the top level. The provided commands simply don't work.
    2. Add the following code to `main.js` using the reading to display "Hello World" in the console:
        ```js
        process.stdout.write("Hello, World!\n");
        ```
    3. Save the file.
    4. Open the terminal.
    5. Run `npm i` to install the needed dependencies.
    6. Run your program with the command: `node main.js`
    7. (Optional) Use the `npm run styleCheck` command.
    8. Test your program using `npm run testBed`.
    9. Submit your assignment as described in the course instructions.

- **Prerequisite:**
    - VS Code installed.
    - Nodejs runtime installed.

    **Objectives:**
        - Be able to type, save, and run a simple JavaScript program.

- **Requirements:**
    - Follow JavaScript coding standards as specified by your instructor.
    - Include your name and assignment details as comments at the top of the file.
    - Ensure your code runs without errors.

- **Stretch Requirements:**
    - Modify your JavaScript program to display a paragraph introducing yourself, similar to the C++ challenge.
    - Example:
    ```
    Hello, I am Mr. Eli.

    My favorite thing about teaching is interacting with interesting students every 
    day. Some days, however, students are too good at coding and watch skibidi toilet memes instead of coming to my desk. Those are long and lonely days...
    ```
    - Update your code so that it prints your own introduction paragraph to the console.

- **Tip:**
    - Organize your files and ask for help if you encounter issues with your editor or Node.js setup.

---

### Author Notes

- In university, students (including myself) became comfortable with command line navigation and basic Linux commands for managing assignments.
- We used `g++` for compiling, ran `a.out`, and verified code with `testBed` and `styleCheck`.
- `testBed`: Test results - green output for passing, red for errors or style issues.
- `styleCheck`: Style Check - one line for each style standard violated, points generally deducted in the rubric for this.
- IDEs like Visual Studio or Xcode were used for advanced projects. Midway through getting my degree the program was changed, and Python scripting became the primary tool using VS Code for development.
- It was common for us to collaborate using tools such as Git/GitHub and VS Code tunnels.
- This assignment helps set up your development environment:
    - Install VS Code.
    - Configure the testing environment.
    - Set up Node.js runtime.
    - Run provided `npm` scripts for testing (`testBed`) and style checking (`styleCheck`).
- These steps will prepare students for future assignments and collaborative work.

- To encapsulate the test bed properly, I'd like to provide a `testBed` and `styleCheck` package published to the npm package registry.

- After students submit their assignments to Google Classroom, the files can be synced through google drive to my hard drive on my desktop. A script can then be created to run the test bed for all student file submissions in google drive (uploaded via the Google Classroom LMS) to automate grading for this assignment:
    - The script will run tests on all student files in a specified folder (e.g., after syncing Google Drive submissions).
    - It will output the results for each file into a CSV file in the same folder for easy review and record-keeping.
    - This will support batch grading and streamline the feedback process.
