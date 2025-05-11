/***********************************************************************
 * Program:
 *    Assignment 10, Hello World
 *    Mr. Eli, AP CSP
 * Author:
 *    <YOUR NAME HERE>
 * Summary:
 *    This program is designed to be the first C++ program you have ever
 *    written. While not particularly complex, it is often the most difficult
 *    to write because the tools are so unfamiliar.
 ************************************************************************/

 #include <iostream>
 using namespace std;

 /**********************************************************************
 * Hello world on the screen
 ***********************************************************************/
int main()
{
   // display
   cout << "" << endl;

   return 0;
}

/**********************************************************************
 * How to run this program
 *    1. Open a terminal window.
 *    2. Navigate to the folder where this file is located using the
 *       `cd` command.
 *    3. Compile the program using the command:
 *       `g++ -o main main.cpp`
 *    4. Run the program using the command: `./main`
 *    5. You should see the output "Hello, World!" on the screen.
 *    6. If you see the output, congratulations!
 *       You have successfully run your first C++ program.
 *    7. If you encounter any errors, please check the code and
 *       try again.
 * All together it should look like this:
```PowerShell
g++ main.cpp
./a.out
```
> Hello, World!
***********************************************************************/

/**********************************************************************
 * How to test this program:
 *    1. First, re-compile the program using the command:
 *       `g++ -o main main.cpp`
 *    2. Test your program using the command:
 *       `g++ -o tests/test tests/test.cpp; ./tests/test`
 *    3. Success or failure output will be displayed on the screen.
 * 
 * All together it should look like this:

```PowerShell
g++ tests/test.cpp -o tests/test
./tests/test
```

> Hello, World!
> Test passed!
 ***********************************************************************/

/**********************************************************************
 * Note for Windows Users:
 *    If you are using a Windows system, you may need to replace the
 *    `./main` command with `& main.exe` to execute the program.
 * Example:

```PowerShell
g++ main.cpp -o main.exe
& main.exe
```

```PowerShell
g++ tests/test.cpp -o tests/test.exe
& tests/test.exe
```
 ***********************************************************************/
