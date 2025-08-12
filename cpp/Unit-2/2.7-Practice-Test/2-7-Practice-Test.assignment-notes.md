## Assignment Notes

### Unit 2 Practice Test — Practice 2.1: Coin Flip Simulation

#### Context

This practice test will help you review random number generation, loops, modularization, and program style. You will write a program to simulate flipping a coin multiple times and count the number of heads and tails.

---

### Original Assignment Requirements (C++)

**Scenario:**
Mike’s teacher wants to demonstrate that probability does not guarantee an exact 50/50 split in coin flips. Write a program to simulate flipping a coin a user-specified number of times, and display the number of heads and tails.

**Example:**
```
How many coin flips for this experiment: 100
There were 49 heads.
There were 51 tails.
```

**Assignment:**
- Write a function to simulate a coin flip, returning true for heads and false for tails.
- Prompt the user for the number of trials.
- Use a loop to flip the coin the specified number of times.
- Count and display the number of heads and tails.
- Start from the standard template: `/home/cs124/tests/templateTest2.cpp`
- Make sure your professor’s name is in the program header.
- Run test bed: `testBed cs124/practice21 test2.cpp`
- Run style checker.

**Random Number Setup:**
```cpp
#include <stdlib.h>   // needed for rand(), srand()
#include <ctime>      // needed for time()
int main(int argc, char **argv) {
   srand(argc == 1 ? time(NULL) : (int)argv[1][1]);
   // ...
}
```

**Requirements:**
- Use modular design: at least one function for the coin flip.
- Use a loop to perform the experiment.
- Follow University coding standards (see Appendix A).
- Include your name and assignment details in the header.
- Ensure your code runs without errors.

**Grading Criteria:**
- Expressions: 10%
- Modularization: 20%
- Loop: 40%
- Output: 20%
- Style: 10%

---

### JavaScript Equivalent Assignment

**Scenario:**
Write a JavaScript program to simulate flipping a coin a user-specified number of times, and display the number of heads and tails.

**Example:**
```
How many coin flips for this experiment: 100
There were 49 heads.
There were 51 tails.
```

**Assignment:**
- Write a function to simulate a coin flip, returning true for heads and false for tails.
- Prompt the user for the number of trials (using `readline-sync` or similar for Node.js).
- Use a loop to flip the coin the specified number of times.
- Count and display the number of heads and tails.
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. Add code to `main.js` to:
    - Prompt for the number of coin flips.
    - Use a function to simulate a coin flip.
    - Use a loop to perform the experiment and count results.
    - Output the number of heads and tails.
3. Save the file.
4. Open the terminal.
5. Run `npm i` to install the needed dependencies.
6. Run your program with the command: `node main.js`
7. (Optional) Use the `npm run styleCheck` command.
8. Test your program using `npm run testBed`.
9. Submit your assignment as described in the course instructions.

---

### Author Notes

- This practice test reinforces random number generation, loops, and modularization in both C++ and JavaScript.
- Practice using functions, loops, and randomization to simulate experiments.
- Understanding these concepts is essential for all future programming assignments.
