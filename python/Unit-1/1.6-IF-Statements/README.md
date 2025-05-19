<a href="../1.0-First-Program/README.md">Back to Unit 1.0</a>

# 1.6 IF Statements

## Objectives
By the end of this class, you will be able to:
- Create an if statement to modify program flow.
- Recognize the pitfalls associated with if statements.

## Prerequisites
Before reading this section, please make sure you are able to:
- Declare a Boolean variable (Chapter 1.5).
- Convert a logic problem into a Boolean expression (Chapter 1.5).
- Recite the order of operations (Chapter 1.5).

## Overview

If statements allow the program to choose between two courses of action depending on the result of a Boolean expression. In some cases, the options are “action” and “no action.” In other cases, the options may be “action A” or “action B.” In each of these cases, the if statement is the tool of choice.

---

## Action/No-Action

The first flavor of the if statement is represented with the following syntax:

```python
if <boolean expression>:
    # body statement
```

For example:

```python
if assignment_late == True:
    assignment_grade = 0
```

The Boolean expression, also called the controlling expression, determines whether the statements inside the body of the if statement are to be executed. If the Boolean expression evaluates to True, then control enters the body of the if statement. Otherwise, the body of the if statement is skipped.

---

## Action-A/Action-B

The second flavor of the if statement is represented with the following syntax:

```python
if <boolean expression>:
    # body statement
else:
    # body statement
```

For example:

```python
if grade >= 60:
    print("Great job! You passed!")
else:
    print("I will see you again next semester...")
```

Much like the Action/No-Action if statement, the Boolean expression determines whether the first set of statements is executed or the second. The first statement is often called the “true condition” and the second the “else condition”.

---

## Example 1.6 – IF Statements

This example will demonstrate both types of if statements: the Action/No-Action type and the Action-A/Action-B type.

### Problem

Write a program to prompt the user for their GPA and display whether the value is in the valid range.

**Sample Output**
```
Please enter your GPA: 4.01
Your GPA is not in the valid range
```

### Solution

The first part of the program is a function determining whether the GPA is within the acceptable range. It will take a float GPA as input and return a bool, whether the value is valid.

```python
def valid_gpa(gpa):
    if gpa > 4.0 or gpa < 0.0:  # Boolean expression
        return False  # True condition
    else:
        return True   # False or Else condition
```

The second part of the program displays an error message only in the case where GPA is outside the accepted range. This is an example of the Action/No-Action flavor.

```python
def main():
    gpa = float(input("Please enter your GPA: "))
    if not valid_gpa(gpa):  # Boolean expression
        print("Your GPA is not in a valid range")  # Action or Body of the IF

if __name__ == "__main__":
    main()
```

---

## Compound and Nested Statements

Anytime there is a place for a statement in Python, multiple statements can be added by using indentation. For example, the body of an if statement could contain another if statement.

**Compound Statements**

Frequently we want to have more than one statement inside the body of the if. We use indentation to surround all the statements going inside the body:

```python
if not (class_grade >= 60):
    class_fail = True
    class_retake = True
    student_happy = False
```

Each time an additional indentation is added, four more spaces are used (by convention). In this case, the if statement is indented 4 spaces. The three assignment statements are indented an additional four spaces for a total of 8.

**Nested Statements**

Often we want to put an if statement inside the body of another if statement. This is called a nested statement because one statement is inside of (or part of) another:

```python
if grade >= 90 and grade <= 100:
    print("A")
    if grade <= 93:
        print("-")
```

There really is no limit to the number of degrees of nesting you can use. However, when indentation gets too extreme (much more than 12), human readability of code often suffers.

---

## Multi-Way IF Statements

An if statement can only differentiate between two options. However, often the program requires more than two options. This can be addressed by chaining elif statements:

```python
if option == 1:
    print("Good!")
elif option == 2:
    print("Better")
else:
    print("Best!")
```

This is the preferred style for a multi-way if. Technically speaking, we can achieve a multi-way if without resorting to elif statements, but using `elif` is much more readable and efficient.

---

## Pitfalls

**Pitfall: = instead of ==**

It is common to mistakenly use a single equals when a double is needed:

```python
fail = False
if fail = True:  # PITFALL: Assignment = used instead of ==
    print("You failed!")
```

In this statement, we are not comparing `fail` with True. Instead, we are trying to set `fail` to True, which will result in a syntax error in Python. Always use `==` for comparison.

**Pitfall: Extra colon or indentation**

Remember that the colon (`:`) signifies the start of a block, and indentation defines the body. If you forget the colon or mis-indent, Python will give you an error.

```python
if False:  # Correct
    print("False!")
```

If you forget the colon or indentation, Python will not know where the body of the if is.

**Pitfall: Missing indentation**

A common mistake is to forget to indent the statements. Python uses indentation to determine what statements are part of the if:

```python
if class_grade < 60:
    class_fail = True
class_retake = True  # PITFALL: Not indented, so not part of the IF
student_happy = False
```

Observe how only the first statement (`class_fail = True`) is part of the if.

---

## Example 1.6 – Overtime

This example will demonstrate how to send data to a function and receive data from a function. This follows the “Processing” model of information flow through a function.

### Problem

Write a program to compute the hourly wage taking into account time-and-a-half overtime. In other words, if more than 40 hours are worked, then any additional hour benefits from a 50% increase in the wage.

**Sample Output**
```
What is your hourly wage? 10
How many hours did you work? 41
Pay: $ 415.00
```

### Solution

The function to compute pay taking the hourly wage and hours worked as input.

```python
def compute_pay(hourly_wage, hours_worked):
    # regular rate
    if hours_worked < 40:
        pay = hours_worked * hourly_wage  # regular rate
    else:
        pay = (40.0 * hourly_wage) + ((hours_worked - 40.0) * (hourly_wage * 1.5))  # overtime
    return pay
```

---

## Challenge

Some companies credit employees with an hour of work each month even if they only worked a few minutes. In other words, there are four pay rates: no pay for those who did not work, a full hour’s wage for those working less than an hour a week, regular wage, and the overtime wage. As a challenge, modify the above function to include this first-hour special case.

---

## Assignment 1.6 – Tax Bracket

Write a function (`compute_tax()`) to determine which tax bracket a user is in. The tax tables are:

```
If taxable income is over-- But not over-- Bracket
$0                  $15,100         10%
$15,100             $61,300         15%
$61,300             $123,700        25%
$123,700            $188,450        28%
$188,450            $336,550        33%
$336,550            no limit        35%
```

The yearly income is passed as a parameter to the function. The function returns the percentage bracket that the user's income falls in. The return value from the function will be an integer (10, 15, 25, 28, 33, or 35).

Next write `main()` so that it prompts the user for his or her income and accepts the result from the `compute_tax()` function and displays the result to the screen with a “%” after the number.

**Examples**
```
Income: 150000
Your tax bracket is 28%
```
```
Income: 1000000
Your tax bracket is 35%
```
```
Income: 5
Your tax bracket is 10%
```

The test bed is available at:
```
testBed cs124/assign16 assignment16.py
```

Don’t forget to submit your assignment with the name “Assignment 16” in the header.

---