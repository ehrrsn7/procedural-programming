<a href="../1.0-First-Program/README.md">Back to Unit 1.0</a>

# Unit 1 Project: Monthly Budget

Our first project will be to write a program to manage a user’s personal finances for a month. This program will ask the user for various pieces of financial information and then display a report of whether the user is on target to meet his or her financial goals.

This project will be done in one phase:

- **Project 04:** Determine the tax burden

---

## Interface Design

The following is an example run of the program. An example of input is **underlined**.

```
This program keeps track of your monthly budget
Please enter the following:
Your monthly income: 1000.00
Your budgeted living expenses: 650.00
Your actual living expenses: 700.00
Your actual taxes withheld: 100.00
Your actual other expenses: 150.00
```
```
The following is a report on your monthly expenses
Item           Budget      Actual
=============== =============== ===============
Income         $ 1000.00   $ 1000.00
Taxes          $  100.00   $  100.00
Living         $  650.00   $  700.00
Other          $  150.00   $  150.00
=============== =============== ===============
Difference     $    0.00   $  -70.00
```

---

## Structure Chart

You may choose to use the following functions as part of your design:

```
main
get_income
get_budget_living
get_actual_living
get_actual_tax
get_actual_other
display
compute_tax
```

---

## Algorithms

### main()

Main is the function that signifies the beginning of execution. Typically main() does not do anything; it just calls other functions to get the job done. You can think of main() as a delegator. For this program, main() will call the get functions, call the display() function, and hold the values that the user has input. The pseudocode for main() is:

```
main
  print greeting on the screen
  income ← get_income()
  budget_living ← get_budget_living()
  actual_living ← get_actual_living()
  actual_tax ← get_actual_tax()
  actual_other ← get_actual_other()
  display(income, budget_living, actual_tax, actual_living, actual_other)
end
```

### get_income()

The purpose of get_income() is to prompt the user for their income and return the value to main():

```
get_income
  prompt for income
  get income
  return income
end
```

The pseudocode for the other get functions is the same. Note that all input from the users is gathered in the “get” functions. Also note that there is a tab before the "Your monthly income:".

---

### display()

Display takes the input gathered from the other modules and puts it on the screen in an easy to read format. Display formats the output, displays some of the data to the user, and calls other functions to display the rest.

The pseudocode for display() is the following:

```
display (income, budget_living, actual_tax, actual_living, actual_other)
  budget_tax ← compute_tax(income)
  budget_other ← income – budget_tax – budget_living
  actual_difference ← income – actual_tax – actual_living – actual_other
  budget_difference ← 0
  print row header on the screen
  print income
  print budget_tax, actual_tax
  print budget_living, actual_living
  print budget_other, actual_other
  print budget_difference, actual_difference
end
```

---

### compute_tax()

In order to determine the tax burden, it is necessary to project the monthly income to yearly income, compute the tax, and reduce that amount back to a monthly amount. In each case, it is necessary to determine the tax bracket of the individual and to then apply the appropriate formula. The tax brackets for the 2006 year are:

| If taxable income is over-- | But not over-- | The tax is: |
|-----------------------------|---------------|-------------|
| $0                          | $15,100       | 10% of the amount over $0 |
| $15,100                     | $61,300       | $1,510.00 plus 15% of the amount over $15,100 |
| $61,300                     | $123,700      | $8,440.00 plus 25% of the amount over $61,300 |
| $123,700                    | $188,450      | $24,040.00 plus 28% of the amount over $123,700 |
| $188,450                    | $336,550      | $42,170.00 plus 33% of the amount over $188,450 |
| $336,550                    | no limit      | $91,043.00 plus 35% of the amount over $336,550 |

The pseudocode for compute_tax() is the following:

```
compute_tax (monthly_income)
  yearly_income ← monthly_income * 12

  if $0 ≤ yearly_income < $15,100:
    yearly_tax ← yearly_income * 0.10
  elif $15,100 ≤ yearly_income < $61,300:
    yearly_tax ← $1,510 + 0.15 * (yearly_income - $15,100)
  elif $61,300 ≤ yearly_income < $123,700:
    yearly_tax ← $8,440 + 0.25 * (yearly_income - $61,300)
  elif $123,700 ≤ yearly_income < $188,450:
    yearly_tax ← $24,040 + 0.28 * (yearly_income - $123,700)
  elif $188,450 ≤ yearly_income < $336,550:
    yearly_tax ← $42,170 + 0.33 * (yearly_income - $188,450)
  elif $336,550 ≤ yearly_income:
    yearly_tax ← $91,043 + 0.35 * (yearly_income - $336,550)

  monthly_tax ← yearly_tax / 12
  return monthly_tax
end
```

Note that this algorithm is vastly oversimplified because it does not take into account deductions and other credits. Please do not use this algorithm to compute your actual tax burden!

---

## Project Phase

### Project 04

This part of the Monthly Budget project will be to add the compute tax component.

```
This program keeps track of your monthly budget
Please enter the following:
Your monthly income: **1000.00**
Your budgeted living expenses: **650.00**
Your actual living expenses: **700.00**
Your actual taxes withheld: **100.00**
Your actual other expenses: **150.00**
The following is a report on your monthly expenses
=============== =============== ===============
Income         $ 1000.00   $ 1000.00
Taxes          $  100.00   $  100.00
Living         $  650.00   $  700.00
Other          $  150.00   $  150.00
=============== =============== ===============
Difference     $    0.00   $  -70.00
```

Notice how the taxes were computed to $100.00.

To complete this project, please do the following:

1. Implement the compute_tax() function.
2. Run the program to ensure that it works as you expect:
   ```
   python3 project04.py
   ```
3. Test the program with testbed and fix all the errors:
   ```
   testBed cs124/project04 project04.py
   ```
4. Run the style checker and fix all the errors:
   ```
   styleChecker project04.py
   ```
5. Submit it with "Project 04, Monthly Budget" in the program header:
   ```
   submit project04.py
   ```
An executable version of the project is available at:
```
/home/cs124/projects/prj04.py
```

---