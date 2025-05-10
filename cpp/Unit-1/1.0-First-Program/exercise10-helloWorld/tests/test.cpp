/**********************************************************************
 * Program:
 *    Exercise 1.0, Hello World - TEST
 * Author:
 *    Mr. Eli, AP CSP
 * Summary:
 *    This program is designed to test your first C++ program.
 * Test Criteria:
 *    The helloWorld function should print "Hello, World!" to the console.
 *    The test should check if the output is correct.
 *    The test should also check if the function returns 0.
 *    The test should be written in C++ and use the cassert.
 *    The test should be written in a separate file. (this file)
 *    The test should be written in a way that it can be run from the command line.
 *    The test should allow the student to focus on the code and not the test.
 *    The main function should be found in ../main.cpp (a template authored by me).
 *    The main.cpp is authored by me, but should be used as a template and modified.
 *    The code to make it pass should be written by the student.
 *    The test should not be difficult to understand.
 *    The test should be easy to read.
 *    The test should be easy to modify.
 *    The test should be easy to run.
 *    The test should be easy to debug.
 ***********************************************************************/

#include <iostream>
#include <cassert>
#include <sstream>
#include <string>
#include <cstdlib> // For system()
#include <fstream> // For file operations
#include <algorithm> // For std::find_if and std::isspace
#include <sys/ioctl.h>
#include <unistd.h>
#include <chrono>
#include <iomanip> // for std::setprecision


using namespace std;

// ANSI color codes
const string RESET = "\033[0m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string CYAN = "\033[36m";
const string BOLD = "\033[1m";

/**********************************************************************
 * Prototype
 ***********************************************************************/
bool testMain(
   const char * filePath,
   const char * executableName,
   const string & label,
   bool debug = false);

string runProgram(
   const char * filePath,
   const char * executableName,
   const string & label,
   bool debug = false);

std::string centeredHeader(const std::string & title);
std::string centeredBody(const std::string & body, int width);
std::string centeredBody(const std::string & body);
std::string leftAlignedBody(const std::string & body);
std::string footer();

/**********************************************************************
 * Main function to run the test
 ***********************************************************************/
int main()
{
   // Test the student's file
   auto studentPass = testMain("./main.cpp", "student_program", "Student");

   // Test the key file silently
   auto keyPass = testMain("../../../../../stretch-programs-keys/cpp/exercise10-helloWorld.cpp", "key_program", "Key");

   // If any test fails, exit with an error code
   if (!studentPass || !keyPass) exit(1);

   return 0;
}

/**********************************************************************
 * Test the main function
 *    This function will compile and run the program and check
 *    if the output is correct.
 ***********************************************************************/
bool testMain(
   const char * filePath,
   const char * executableName,
   const string & label,
   bool debug)
{
   std::ifstream file(filePath);
   if (label == "Key" && !file.good()) {
      file.close();
      return true; // Silently pass the test if the key is missing
   }

   try {
      auto start = std::chrono::high_resolution_clock::now();

      string output = runProgram(filePath, executableName, label, debug);
      string expectedOutput   = "Hello, World!";

      // Check the output
      std::cout << std::endl
         << centeredHeader(CYAN + "STANDARD OUTPUT TEST" + RESET)
         << std::endl;
      std::cout << footer() << std::endl;

      if (output == expectedOutput)
      {
         std::cout << centeredBody(GREEN + label + " Test passed!" + RESET) << std::endl;

         // End timer and print elapsed time
         auto end = std::chrono::high_resolution_clock::now();
         std::chrono::duration<double> elapsed = end - start;

         // Format with 3 decimal places
         std::ostringstream oss;
         oss << std::fixed << std::setprecision(3) << elapsed.count();

         // Now you can use oss.str() as your string version
         std::cout << centeredHeader(CYAN + "Time Elapsed: " + BOLD + oss.str() + " s" + RESET) << std::endl << std::endl;

         return true;
      }
      else
      {
         std::cout << centeredBody(RED + label + " Test failed!" + RESET) << std::endl;
         std::cout << leftAlignedBody(BOLD + CYAN   + "Expected: " + RESET + expectedOutput) << std::endl;
         std::cout << leftAlignedBody(BOLD + YELLOW + "  Actual: " + RESET + output) << std::endl;

         // End timer and print elapsed time
         auto end = std::chrono::high_resolution_clock::now();
         std::chrono::duration<double> elapsed = end - start;

         // Format with 3 decimal places
         std::ostringstream oss;
         oss << std::fixed << std::setprecision(3) << elapsed.count();

         // Now you can use oss.str() as your string version
         std::cout << centeredHeader(CYAN + "Time Elapsed: " + BOLD + oss.str() + " s" + RESET) << std::endl << std::endl;

         throw std::runtime_error("Test failed: Output does not match expected output.");
      }
   }
   catch (const std::exception& e)
   {
      std::cerr << RED << "Error: An exception occurred while testing the "
         << label << " program:" << std::endl
         << e.what()
         << RESET << std::endl;
      return false;
   }
   catch (...)
   {
      std::cerr << RED << "Error: An unknown error occurred while testing the " << label << " program." << RESET << std::endl;
      exit(1); // abort the program (no need to return false)
   }
}

/**********************************************************************
 * Prototypes for all helper functions
 ***********************************************************************/

int compileFile(
   const char * filePath,
   const char * executableName,
   bool debug,
   std::string label);
int runCompiledExecutable(
   const char * executableName,
   bool debug,
   std::string label,
   const char * tempFileName = "temp_output.txt");
std::string extractTempFileOutput(
   const char * tempFileName = "temp_output.txt",
   std::string label = "");
string trim(const string & str);

/**********************************************************************
 * Helper functions
 ***********************************************************************/


/**********************************************************************
 * Run the program
 *    This function will compile and run the program and return the output.
 *    Any errors will be thrown to the caller as exceptions.
 ***********************************************************************/
string runProgram(
   const char * filePath,
   const char * executableName,
   const string & label,
   bool debug)
{
   try {

      // Compile the file
      int compileReturnCode = compileFile(filePath, executableName, debug, label);
      if (compileReturnCode != 0)
      {
         throw std::runtime_error("Error: Compilation failed for the " + label + " program.");
      }

      // Run the compiled executable
      int runReturnCode = runCompiledExecutable(executableName, debug, label);
      if (runReturnCode != 0)
      {
         throw std::runtime_error("Error: Execution failed for the " + label + " program.");
      }

      // Extract the output from the temporary file
      string output = extractTempFileOutput("temp_output.txt", label);
      return output;
   }
   catch (const std::exception & e)
   {
      throw std::runtime_error(
         "Error: An exception occurred while running the program: " +
         std::string(e.what()));
   }
}

/**********************************************************************
 * Compile the file
 *    This function will compile the file, and return the return code.
 ***********************************************************************/
int compileFile(
   const char * filePath,
   const char * executableName,
   bool debug,
   std::string label)
{
   // Compile the file
   string compileCommand = "g++ " + string(filePath) + " -o " + string(executableName);

   if (debug) {
      std::cout << CYAN << "Compiling " << label << " program..."
         << RESET << std::endl;
   }

   int compileReturnCode = system(compileCommand.c_str());
   return compileReturnCode;
}

/**********************************************************************
 * Run the compiled executable
 *    This function will run the compiled executable, redirect the output
 *    and return the return code.
 ***********************************************************************/
int runCompiledExecutable(
   const char * executableName,
   bool debug,
   std::string label,
   const char * tempFileName)
{
   // Run the compiled executable, redirecting the output to a temporary file
   string command = "./" + string(executableName) + " > " + string(tempFileName);

   int returnCode = system(command.c_str());
   return returnCode;
}

/**********************************************************************
 * Extract the output from the temporary file
 *    This function will read the contents of the temporary file and return
 *    the output as a string.
 ***********************************************************************/
std::string extractTempFileOutput(
   const char * tempFileName,
   std::string label)
{
   // Read the contents of the temporary file
   ifstream tempFile(tempFileName);
   if (!tempFile.is_open())
   {
      std::cerr << RED
         << "Error: Could not open the temporary file to read the "
         << label << " program's output."
         << RESET << std::endl;
      exit(1);
   }
   string output((istreambuf_iterator<char>(tempFile)), istreambuf_iterator<char>());
   tempFile.close();

   // Remove the temporary file
   remove(tempFileName);

   // Trim the output
   output = trim(output);
   return output;
}

/**********************************************************************
 * Helper function to trim whitespace from a string
 ***********************************************************************/
string trim(const string & str)
{
   auto start = find_if_not(str.begin(), str.end(), ::isspace);
   auto end = find_if_not(str.rbegin(), str.rend(), ::isspace).base();
   return (start < end ? string(start, end) : "");
}

/**********************************************************************
 * Terminal-Wide Header
 *    This function will print a header that is centered in the terminal.
 *    It will use the terminal width to determine the padding.
 ***********************************************************************/

/**********************************************************************
 * Get the terminal width
 *   This function will get the width of the terminal window.
 *  It will use the ioctl system call to get the size of the terminal.
 ***********************************************************************/
int getTerminalWidth() {
   struct winsize w;
   if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &w) == -1) return 100; // fallback
   return w.ws_col;
}

/**********************************************************************
 * Count the number of Escape characters in a string
 ***********************************************************************/
int countEscapeChars(const std::string & str) {
   int count = 0;
   bool inEscape = false;

   for (char c : str) {
      if (c == '\033') {
         inEscape = true;
         count++; // Count ESC character
      } else if (inEscape) {
         count++; // Count characters in the escape sequence
         if (c == 'm') {
            inEscape = false; // End of ANSI sequence
         }
      }
   }

   return count;
}

/**********************************************************************
 * Center the header
 *    This function will create a centered header for the terminal.
 ***********************************************************************/
std::string centeredHeader(const std::string & title, int width) {
   std::string titleStr = ' ' + title + ' '; // add spaces to the sides
   int visibleLength = titleStr.length() - countEscapeChars(titleStr);
   std::cout << visibleLength % 2 << std::endl;
   if (visibleLength % 2 == 1) {
      titleStr = '=' + titleStr; // add 
   }
   int padding = 0.5 * (width - visibleLength);
   // generate ======'s
   std::string sides(padding, '=');
   // all together
   return sides + titleStr + sides;
}

/**********************************************************************
 * Center the header
 *    Overloaded function to use the default terminal width.
 ***********************************************************************/
std::string centeredHeader(const std::string & title) {
   return centeredHeader(title, std::min(getTerminalWidth(), 72));
}

/**********************************************************************
 * Footer
 *    This function will create a footer for the terminal.
 ***********************************************************************/
std::string footer(int width) {
   return std::string(width, '=');
}

/**********************************************************************
 * Footer
 *    This function will create a footer for the terminal.
 *    Overloaded function to use the default terminal width.
 ***********************************************************************/
std::string footer() {
   return footer(std::min(getTerminalWidth(), 72));
}

/**********************************************************************
 * Center the body line inside a box: "| centered text |"
 * ANSI escape codes are ignored for padding math (approximate).
 ***********************************************************************/
std::string centeredBody(const std::string & body, int width) {
   
   const int paddingSides = 2; // for "| " and " |"
   int cleanLength = 0;
   int escapeLength = 0;
   bool inEscape = false;

   // Calculate visible length and count escape characters
   for (char c : body) {
      if (c == '\033') {
         inEscape = true; // Start of ANSI escape sequence
         escapeLength++;  // Count the escape character
      } else if (inEscape && c == 'm') {
         inEscape = false; // End of ANSI escape sequence
         escapeLength++;   // Count the 'm' character
      } else if (inEscape) {
         escapeLength++;   // Count characters within the escape sequence
      } else {
         cleanLength++;    // Count visible characters
      }
   }

   // Adjust padding based on visible length
   int totalPadding = width - (cleanLength + escapeLength + paddingSides);
   int side = totalPadding / 2;
   std::string line(side, ' ');
   return "| " + line + body + line + ((totalPadding % 2) ? " " : "") + " |";
}

/**********************************************************************
 * Center the body
 * Center the body line inside a box: "| centered text |"
 * ANSI escape codes are ignored for padding math (approximate).
 *    Overloaded function to use the default terminal width.
 ***********************************************************************/
std::string centeredBody(const std::string & body) {
   return centeredBody(body, std::min(getTerminalWidth(), 72));
}

/**********************************************************************
 * Left-align the body line inside a box: "| left-aligned text     |"
 * ANSI escape codes are preserved but not counted for padding.
 ***********************************************************************/
std::string leftAlignedBody(const std::string & body, int width) {
   const int boxPadding = 4; // 2 spaces + '| ' and ' |'
   int cleanLength = 0;
   int escapeLength = 0;
   bool inEscape = false;

   // Calculate visible length and count escape characters
   for (char c : body) {
      if (c == '\033') {
         inEscape = true; // Start of ANSI escape sequence
         escapeLength++;  // Count the escape character
      } else if (inEscape && c == 'm') {
         inEscape = false; // End of ANSI escape sequence
         escapeLength++;   // Count the 'm' character
      } else if (inEscape) {
         escapeLength++;   // Count characters within the escape sequence
      } else {
         cleanLength++;    // Count visible characters
      }
   }

   // Adjust padding based on visible length
   int paddingRight = width - (cleanLength + escapeLength + boxPadding);
   std::string line(paddingRight, ' ');
   return "| " + body + line + " |";
}

/**********************************************************************
 * Left-align the body
 * Left-align the body line inside a box: "| left-aligned text     |"
 * ANSI escape codes are preserved but not counted for padding.
 *    Overloaded function to use the default terminal width.
 ***********************************************************************/
std::string leftAlignedBody(const std::string & body) {
   return leftAlignedBody(body, std::min(getTerminalWidth(), 72));
}
