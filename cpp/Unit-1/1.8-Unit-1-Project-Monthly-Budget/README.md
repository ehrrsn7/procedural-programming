To create a program in C++ using procedural programming, follow these steps:

1.  **Login**: Access the Linux system either in the lab or remotely. Use tools like PuTTY (for Windows) or the terminal (macOS/Linux) with the `ssh` command for remote access.
2.  **Copy Template**: Copy the assignment template from the course directory using the `cp` command.
    *   Example: `cp /home/cs124/template.cpp hw10.cpp` copies the template to a file named `hw10.cpp`.
3.  **Edit with Emacs**: Use a code editor like `emacs` to edit the copied file.
    *   Open a file: `emacs hello.cpp`.
    *   Save: `C-x C-s`.
    *   Exit: `C-x C-c`.
4.  **Compile with g++**: Translate the C++ source code into machine language using the `g++` compiler.
    *   Syntax: `g++ <source file>`.
    *   Example: `g++ hw10.cpp`.
    *   Successful compilation creates an executable file named `a.out`.
    *   Compilation Steps:
        *   Lexing: Breaking the text into tokens.
        *   Parsing: Fitting the words into the syntax of the language.
        *   Generating: Creating assembly language.
        *   Linking: Creating machine language.
5.  **Test Bed**: Execute the compiled program and verify the output.
    *   Run the program: `./a.out`.
    *   Use `testBed` to compare the program's output against the expected output.
    *   Syntax: `testBed <test name> <file name>`.
    *   Example: `testBed cs124/assign10 hw10.cpp`.
6.  **Style Checker**: Ensure the code adheres to style guidelines using the `styleChecker` tool.
    *   Syntax: `styleChecker <file name>`.
    *   Example: `styleChecker hw10.cpp`.
    *   Style Guidelines:
        *   Meaningful variable names using camelCase.
        *   Function names that are verbs, also using camelCase.
        *   Indentation of three spaces, without tabs.
        *   Line length no longer than 80 characters.
        *   Program comments at the beginning of the file.
        *   Spacing around operators.
7.  **Submit**: Turn in the assignment using the `submit` command.
    *   The `submit` command identifies assignment details from the header comments.
    *   Verify the details that submit extracts from the header.
    *   `Submit` copies the program for the user and the instructor.

An example of a simple program is displaying "Hello World" on the screen.
