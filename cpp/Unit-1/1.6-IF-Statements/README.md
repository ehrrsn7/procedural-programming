In C++, procedural programming involves a structured process to create programs from source code, using tools like `emacs`, `g++`, `testBed`, `styleChecker`, and `submit`. The general steps are:

1.  **Logging into the Linux system**: Access the Linux environment either in the lab or remotely. For remote access, tools like PuTTY (for Windows) or the terminal (for macOS/Linux) can be used along with the `ssh` command.
2.  **Copying the template file**: Use the `cp` command to copy the assignment template from the course directory. For example, `cp /home/cs124/template.cpp hw10.cpp` copies the template to a file named `hw10.cpp`.
3.  **Editing the file using emacs**: Edit the copied file using a code editor like `emacs`. Open a file in `emacs` with the command `emacs hello.cpp`. After writing the code, save it using `C-x C-s` and exit `emacs` with `C-x C-c`.
4.  **Compiling the program using g++**: Translate the C++ source code into machine language using the `g++` compiler. The syntax is `g++ <source file>`, for example, `g++ hw10.cpp`. If the compilation is successful, an executable file named `a.out` is created. The compilation process involves several steps:
    *   Lexing: Breaking the text into tokens.
    *   Parsing: Fitting the words into the syntax of the language.
    *   Generating: Creating assembly language.
    *   Linking: Creating machine language.
5.  **Testing the program**: Execute the compiled program and verify the output. Execute the program by typing `./a.out` in the terminal.  Use the `testBed` tool to compare the program's output against the expected output. The syntax for `testBed` is `testBed <test name> <file name>`, for example, `testBed cs124/assign10 hw10.cpp`.
6.  **Checking the code style**: Ensure the code adheres to the University's style guidelines using the `styleChecker` tool. The syntax is `styleChecker <file name>`, for example, `styleChecker hw10.cpp`. Style guidelines include:

    *   Meaningful variable names, using camelCase.
    *   Function names that are verbs, also using camelCase.
    *   Indentation of three spaces, without tabs.
    *   Line length no longer than 80 characters.
    *   Program comments at the beginning of the file.
    *   Spacing around operators.
7.  **Submitting the assignment**: Use the `submit` command to turn in the assignment. The `submit` command identifies the assignment details from the header comments. Verify the details that submit extracts from the header. `Submit` is a fancy copy function that makes a copy for the user and one for the instructor.

An example of a simple program is displaying "Hello World" on the screen.
