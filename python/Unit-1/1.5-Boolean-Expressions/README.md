<a href="../1.0-First-Program/README.md">Back to Unit 1.0</a>

# 1.5 Boolean Expressions

## Objectives
By the end of this class, you will be able to:
- Declare a Boolean variable.
- Convert a logic problem into a Boolean expression.
- Recite the order of operations.

## Prerequisites
Before reading this section, please make sure you are able to:
- Represent simple equations in Python (Chapter 1.3).
- Choose the best data-type to represent your data (Chapter 1.2).

## Overview

Boolean algebra is a way to express logical statements mathematically. This is important because virtually all programs need to have decision-making logic. There are three parts to Boolean algebra:
1. **Boolean variables** – variables enabling the programmer to store the results of Boolean expressions.
2. **Boolean operators** – operations that can be performed on Boolean variables.
3. **Comparison operators** – allowing the programmer to convert a number to a Boolean value by comparing it to some value.

### Common Boolean Operators

| Math | English | Python | Example |
|------|---------|--------|---------|
| ~    | Not     | `not`  | `not True` |
| ∧    | And     | `and`  | `True and False` |
| ∨    | Or      | `or`   | `True or False` |
| =    | Equals  | `==`   | `x + 5 == 42 / 2` |
| ≠    | Not Equals | `!=` | `graduated != True` |
| <    | Less than | `<`   | `age < 16` |
| ≤    | Less than or equal to | `<=` | `time_now <= time_limit` |
| >    | Greater than | `>` | `age > 65` |
| ≥    | Greater than or equal to | `>=` | `grade >= 90` |

---

## Boolean Operators: And, Or, and Not

### AND (`and`)
The Boolean operator **AND** evaluates to `True` only if both the left-side and right-side are `True`. If either is `False`, the expression evaluates to `False`.

Example:
```python
answer = left_side and right_side
```

**Truth Table for AND:**

| Left-Side | Right-Side | Result |
|-----------|------------|--------|
| `True`    | `True`     | `True` |
| `True`    | `False`    | `False`|
| `False`   | `True`     | `False`|
| `False`   | `False`    | `False`|

### OR (`or`)
The Boolean operator **OR** evaluates to `True` if either the left-side or the right-side is `True`.

Example:
```python
answer = left_side or right_side
```

**Truth Table for OR:**

| Left-Side | Right-Side | Result |
|-----------|------------|--------|
| `True`    | `True`     | `True` |
| `True`    | `False`    | `True` |
| `False`   | `True`     | `True` |
| `False`   | `False`    | `False`|

### NOT (`not`)
The Boolean operator **NOT** is a unary operator that negates the Boolean value.

Example:
```python
wrong = not right
```

**Truth Table for NOT:**

| Right-Side | Result |
|------------|--------|
| `True`     | `False`|
| `False`    | `True` |

---

## Comparison Operators

### Equivalence
The first class of comparison operators consists of **equivalence** and **inequality**. These determine whether values are the same or not.

Example:
```python
grade = 100
is_perfect_score = (grade == 100)  # Evaluates to True only when grade is 100
```

It is also possible to check if two values are not the same:
```python
num_students = 21
is_class_held_today = (num_students != 0)  # True if class is held
```

### Relative Operators
The second class of comparison operators performs relative evaluations:
- Greater than `>`
- Less than `<`
- Greater than or equal to `>=`
- Less than or equal to `<=`

Example:
```python
num_boys = 6
num_girls = 8
is_more_girls = (num_girls > num_boys)  # True
```

Comparison operators also work with floating-point numbers and characters:
```python
grade = 82.5
has_passed_cs124 = (grade >= 60.0)  # Passed if grade is 60 or higher

letter_grade = 'B'
good_grade = ('C' >= letter_grade)  # True since 'B' comes before 'C'
```

---

## Example 1.5 – Decision Function

This example demonstrates how to write a function to make a binary decision (choosing between two options).

### Problem Statement

Write a program to compute whether a user qualifies for the child tax credit. The rule states:
- You qualify if your income is less than $110,000 per year.
- Otherwise, you do not qualify.

**Sample Output**
```
What is your income: 115000.00
How many children? 2
Child Tax Credit: $ 0.00
```

### Solution

The key part of this problem is the function deciding whether the user qualifies for the tax credit.

```python
def qualify(income):
    return income <= 110000.00
```

Observe how the function name clearly indicates what `True` means. If `qualify()` returns `True`, then the user qualifies for the tax credit. Otherwise, they do not.

---

### Challenge

Modify the above example to reflect the law more accurately:
- The full $1,000 per child is given if income is less than $110,000.
- The credit phases out at 5¢ per $1 over $110,000.
- Families making more than $130,000 receive no credit.

---

## Order of Operations in Boolean Expressions

With multiple Boolean operators, the **order of operations** becomes complex. Here is the priority order:

| Operator | Description |
|----------|-------------|
| `()`     | Parentheses (highest precedence) |
| `not`    | NOT |
| `* / %`  | Multiply, Divide, Modulo |
| `+ -`    | Addition, Subtraction |
| `> >= < <=` | Greater than, Less than, etc. |
| `== !=`  | Equality |
| `and`    | AND |
| `or`     | OR |
| `=` `+=` `*=` | Assignment (lowest precedence) |

---

## Assignment 1.5 – Full Tithe Payer

Write a function to determine if an individual is a **full tithe payer**.

- Function accepts **income** and **payment** as parameters.
- Returns a **Boolean value** indicating whether the user is a full tithe payer.

**Example Output**

```
Income: 100
Tithe: 91
You are a full tithe payer.
```
```
Income: 532
Tithe: 40
Will a man rob God?  Yet ye have robbed me.
But ye say, Wherein have we robbed thee?
In tithes and offerings. Malachi 3:8
```

Test your solution using:
```
testBed cs124/assign15 assignment15.py
```

---