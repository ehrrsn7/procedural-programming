## Assignment Notes

### Unit 1 Practice Test — Assignment Overview

#### Context

This practice test will help you review the key concepts from Unit 1, including user input, conditionals, modularization, and program style. You will write a program to prompt the user for their grade and inform them if they passed, using multiple functions. You will also see the structure for the Unit 1 Project: Monthly Budget.

---

### Practice 1.2 — Pass/Fail Program (C++)

**Scenario:**
Write a program to prompt the user for their grade on a test and inform them if they passed. The program must use three functions: one to prompt for the grade, one to display the "passed" message, and one to display the "failed" message.

**Example:**
```
What was your grade on the last test? 92
You passed the test.

What was your grade on the last test? 59
You failed the test.
```

**Requirements:**
- Use three functions: promptGrade, displayPassed, displayFailed.
- Copy the template from `/home/cs124/tests/templateTest1.cpp`.
- Compile, test, and check style as usual.
- Run the test bed: `testBed cs124/practice12 practice12.cpp`

**Grading Criteria:**
- Copy template: 10%
- Compile: 20%
- Modularization (functions): 20%
- Conditional: 10%
- I/O: 20%
- Programming Style: 20%

---

### JavaScript Equivalent Assignment

**Scenario:**
Write a JavaScript program to prompt the user for their grade on a test and inform them if they passed. Use three functions: one to prompt for the grade, one to display the "passed" message, and one to display the "failed" message.

**Example:**
```
What was your grade on the last test? 92
You passed the test.

What was your grade on the last test? 59
You failed the test.
```

**Requirements:**
- Use three functions: promptGrade, displayPassed, displayFailed.
- Follow JavaScript coding standards as specified by your instructor.
- Include your name and assignment details as comments at the top of the file.
- Ensure your code runs without errors.

**Process:**
1. Download the zip folder with all the contents included, then open the folder in VS Code.
2. Add code to `main.js` to:
    - Prompt the user for their grade (using `readline-sync` or similar for Node.js).
    - Use three functions as described above.
    - Display the appropriate message based on the grade.
3. Save the file.
4. Open the terminal.
5. Run `npm i` to install the needed dependencies.
6. Run your program with the command: `node main.js`
7. (Optional) Use the `npm run styleCheck` command.
8. Test your program using `npm run testBed`.
9. Submit your assignment as described in the course instructions.

---

### Unit 1 Project: Monthly Budget

**Scenario:**
Write a program to manage a user's personal finances for a month. The program will prompt the user for various pieces of financial information and display a report on whether the user is on target to meet their financial goals. The project is done in three phases:
- Project 02: Prompt the user for input and display the input back in a table.
- Project 03: Split the program into separate functions and do some of the budget calculations.
- Project 04: Determine the tax burden.

**Example Output:**
```
This program keeps track of your monthly budget
Please enter the following:
    Your monthly income: 1000.00
    Your budgeted living expenses: 650.00
    Your actual living expenses: 700.00
    Your actual taxes withheld: 100.00
    Your actual health insurance: 200.00
    Your actual other expenses: 150.00
The following is a report on your monthly expenses
    Item                   Budget          Actual
    ================ =============== ===============
    Income           $    1000.00    $    1000.00
    Taxes            $     100.00    $     100.00
    Health Insurance $     200.00    $     200.00
    Living           $     650.00    $     700.00
    Other            $     150.00    $     150.00
    ================ =============== ===============
    Difference       $       0.00    $     -150.00
```
*Note: Health insurance is budgeted at 20% of income.*

**Structure Chart:**
You may use the following functions as part of your design:
- main
- getIncome
- getBudgetLiving
- getActualLiving
- getActualHealthInsurance
- display
- getActualOther
- computeTax
- computeHealthInsurance
- getActualTax

---

## Hints and Algorithms

### General Approach

- **main()**: Acts as the coordinator. It calls all the input functions to gather user data, then calls `display()` to show the results.
- **Input Functions**: Each `get` function (e.g., `getIncome`, `getBudgetLiving`, etc.) prompts the user for a specific value and returns it.
- **display()**: Formats and prints the budget report. It also calls calculation functions like `computeTax` and `computeTithing`.
- **computeTax()**: Calculates monthly tax based on annualized income and tax brackets.
- **computeTithing()**: Calculates tithing as 10% of income.

### Pseudocode Examples

#### main()
```
main
    PUT greeting on the screen
    income ← getIncome()
    budgetLiving ← getBudgetLiving()
    actualLiving ← getActualLiving()
    actualTax ← getActualTax()
    actualTithing ← getActualTithing()
    actualOther ← getActualOther()
    display(income, budgetLiving, actualTax, actualTithing, actualLiving, actualOther)
end
```

#### getIncome()
```
getIncome
    PROMPT for income
    GET income
    RETURN income
end
```
*Repeat similar structure for other `get` functions.*

#### display()
```
display(income, budgetLiving, actualTax, actualTithing, actualLiving, actualOther)
    budgetTax ← computeTax(income)
    budgetTithing ← computeTithing(income)
    budgetOther ← income - budgetTax - budgetTithing - budgetLiving
    actualDifference ← income - actualTax - actualTithing - actualLiving - actualOther
    budgetDifference ← 0
    PUT row header on the screen
    PUT income
    PUT budgetTax, actualTax
    PUT budgetTithing, actualTithing
    PUT budgetLiving, actualLiving
    PUT budgetOther, actualOther
    PUT budgetDifference, actualDifference
end
```

#### computeTithing()
- Tithing is 10% of income.

#### computeTax()
```
computeTax(monthlyIncome)
    yearlyIncome ← monthlyIncome * 12
    if yearlyIncome < 15100
        yearlyTax ← yearlyIncome * 0.10
    else if yearlyIncome < 61300
        yearlyTax ← 1510 + 0.15 * (yearlyIncome - 15100)
    else if yearlyIncome < 123700
        yearlyTax ← 8440 + 0.25 * (yearlyIncome - 61300)
    else if yearlyIncome < 188450
        yearlyTax ← 24040 + 0.28 * (yearlyIncome - 123700)
    else if yearlyIncome < 336550
        yearlyTax ← 42170 + 0.33 * (yearlyIncome - 188450)
    else
        yearlyTax ← 91043 + 0.35 * (yearlyIncome - 336550)
    monthlyTax ← yearlyTax / 12
    return monthlyTax
end
```

### Additional Tips

- Use tabs for indentation in output.
- The "Difference" row is income minus all expenses.
- The budgeted "Difference" should always be zero.
- Follow the structure chart for modularization.
- You may add helper functions for clarity.

--- 
