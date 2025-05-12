/**********************************************************************
 * Program:
 *    Exercise 1.1, Align Money - TEST
 * Author:
 *    Mr. Eli, AP CSP
 * Summary:
 *    This program is designed to test the alignMoney program.
 * Test Criteria:
 *    The alignMoney program should output formatted monetary values
 *    in aligned columns. 
 *    The test will check if the output matches the expected formatted 
 *    output.
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
#include <unistd.h> // for chdir()

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
   auto studentPass = testMain("./alignMoney.cpp", "student_program", "Student");

   // Test the key file silently
   auto keyPass = testMain("../../../../../stretch-programs-keys/cpp/exercise11-alignMoney.cpp", "key_program", "Key");

   // If any test fails, exit with an error code
   if (!studentPass || !keyPass) exit(1);

   return 0;
}

string trim(const string & str);

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
      string expectedOutput = trim(
         string("$  124.45\t$  321.31\n") +
         string("$    1.74\t$    4.21\n") +
         string("$ 7539.12\t$   54.92\n"));

      // Check the output
      std::cout << std::endl
         << centeredHeader(CYAN + "STANDARD OUTPUT TEST" + RESET)
         << std::endl;

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
         std::cout << BOLD + CYAN   + "Expected: \n" + RESET + expectedOutput << std::endl;
         std::cout << BOLD + YELLOW + "  Actual: \n" + RESET + output << std::endl;

         if (debug)
         {
            std::cout << "Contents of temp_output.txt:" << std::endl;
            std::cout << output << std::endl;
         }

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
      if (compileReturnCode == 0 && debug)
      {
         std::cout << GREEN 
            << "Compilation successful for the " << label << " program." 
            << RESET << std::endl;
      }
      else if (compileReturnCode == 256)
      {
         throw std::runtime_error(
            "Error: system command cannot locate the binary. " +
            std::string("Compilation failed for the " + label + " program.")
         );
      }
      else if (compileReturnCode != 0)
      {
         throw std::runtime_error("Error: Compilation failed for the " + label + " program.");
      }

      // Run the compiled executable
      int runReturnCode = runCompiledExecutable(executableName, debug, label);
      if (runReturnCode == 0 && debug)
      {
         std::cout << GREEN 
            << "Execution successful for the " << label << " program." 
            << RESET << std::endl;
      }
      else if (runReturnCode != 0)
      {
         throw std::runtime_error("Error: Execution failed for the " + label + " program.");
      }

      // Extract the output from the temporary file
      string output = extractTempFileOutput("temp_output.txt", label);

      // Cleanup: Remove the executables
      if (debug) {
         std::cout << YELLOW << "Cleaning up " << executableName << "..." << RESET << std::endl;
      }
      remove(executableName);

      return output;
   }
   catch (const std::exception & e)
   {
      throw std::runtime_error(
         "Error: An exception occurred while running the program: " +
         std::string(e.what()));
   }
}

string get_current_dir_name();
void check_tests_dir(bool debug);
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

   // check if we're in the tests directory (and `cd ..` if not)
   check_tests_dir(debug);

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
   const std::string titleStr = ' ' + title + ' '; // add spaces to the sides
   const int visibleLength = titleStr.length() - countEscapeChars(titleStr);
   // generate ======'s
   const int padding = 0.5 * (width - visibleLength) > 0 // edge case: must be positive
      ? (width - visibleLength) 
      : 0; // overflow case: no padding
   const std::string sides = string(padding, '=');
   // all together
   return sides + ((visibleLength % 2) ? "=" : "") + titleStr + sides;
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
   const std::string bodyStr = ' ' + body + ' ';
   const int visibleLength = bodyStr.length() - countEscapeChars(bodyStr);
   const int paddingSides = 2; // for '|' and '|'
   // generate spaces
   const int padding = 0.5 * (width - (visibleLength + paddingSides)) > 0
      ? (width - (visibleLength + paddingSides)) 
      : 0; // overflow case: no padding
   const std::string sides(padding, ' ');
   // all together
   return '|' + sides + ((width % 2) ? " " : "") + bodyStr + sides + '|';
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
   const std::string bodyStr = ' ' + body + ' ';
   const int visibleLength = bodyStr.length() - countEscapeChars(bodyStr);
   const int paddingSides = 2; // for '|' and '|'

   // generate spaces
   const int paddingRight = width - (visibleLength + paddingSides) > 0
      ? (width - (visibleLength + paddingSides)) 
      : 0; // overflow case: no padding
   const std::string line(paddingRight, ' ');
   // all together
   return '|' + bodyStr + line + ((width % 2) ? " " : "") + '|';
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

/**********************************************************************
 * Get the current working directory
 *    This function will get the current working directory.
 ***********************************************************************/
string get_current_dir_name() {
   char cwd[1024];
   if (getcwd(cwd, sizeof(cwd)) != NULL) {
      return string(cwd);
   } else {
      throw std::runtime_error(
         "Error: Failed to get the current working directory.");
   }
}

/**********************************************************************
 * Check the tests directory
 *    This function will check if the current working directory is
 *    the tests directory. If it is, it will change to the parent
 *    directory.
 ***********************************************************************/
void check_tests_dir(bool debug = false) {
   // Save the current working directory
   string cwd = get_current_dir_name();

   // Change to the directory of the file if necessary
   if (get_current_dir_name().find("tests") != string::npos) {
      // We're in the tests directory, so we need to go up one level
      if (chdir("..") != 0) {
         throw std::runtime_error(
            "Error: Failed to change directory to the parent directory.");
      }

      string newCwd = get_current_dir_name();
      
      if (newCwd.find("tests") != string::npos) { // we've found "tests" in the newCwd string
         // We successfully changed to the parent directory
         throw std::runtime_error(
            "Error: Failed to change directory to the correct location.");
      }

      if (debug) {
         std::cout << CYAN << "Changed working directory to: " << newCwd << RESET << std::endl;
      }
   }
}
