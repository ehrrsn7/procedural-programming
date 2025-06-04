<a href="../1.0-First-Program/README.md"><h3>Unit 1: Simple Programs</h3></a>

# 1.3 Expressions

Sam once spent a summer working as a cashier in a popular fast-food outlet. One of his responsibilities was to make change for customers when they paid with cash. While he enjoyed the mental exercise of doing the math in his head, he immediately started wondering how this could best be done with the computer. After a few iterations, he came up with a program to make light work of his most tedious task...

#### Objectives

By the end of this class, you will be able to:
- Represent simple equations in Python.
- Understand the differences between integer division and floating point division.
- See how to use the modulus operator to solve math and logic problems.

#### Prerequisites

Before reading this chapter, please make sure you are able to:
- Choose the best data-type to represent your data (Chapter 1.2).
- Declare a variable (Chapter 1.2).
- Display text and numbers on the screen (Chapter 1.1).

## Overview

Computer programs perform mathematical operations much the way one would expect. There are a few differences, however, owing to the way computers store numbers. For example, there is no distinction between integers and floating point numbers in Algebra. This means that dividing one by two will yield a half. However, in Python, integers can't store the number 0.5 or 1/2, but Python will automatically use floats when needed. Also, a variable can update its value in Python where in Algebra it remains constant through the entire equation. These challenges along with a few others makes performing math with Python a little tricky.

In Python, mathematical equations are called expressions. An expression is a collection of values and operations that, when evaluated, result in a single value.

## Evaluating Expressions

As you may recall from our earlier discussion of how computers work, a CPU can only perform elementary mathematical operations and these can only be done one at a time. This means that the interpreter must break complex equations into simple ones for them to be evaluated correctly by the CPU. To perform this task, things are done in the following order:
1. Variables are replaced with the values they contain.
2. The order of operations is honored: parentheses first and assignment last.
3. When there is an integer being compared/computed with a float, it is converted to a float just before evaluation.

---

### Step 1 - Variables are replaced with values

Every variable refers to a location of memory. This memory location is guaranteed to be filled with 1's and 0's. In other words, there is always a value in a variable and that value can always be accessed at any time. Sometimes the value is meaningless. Consider the following example:

```python
number = None
print(number)  # the output is None because the variable was never assigned a value
```

The first step in the expression evaluation process is to substitute the variables in the expression with the values contained therein. Consider the following code:

```python
age_human_years = 4
age_dog_years = age_human_years * 7
```

In this example, the first step of evaluating the last statement is to substitute `age_human_years` with `4`:

```python
age_dog_years = 4 * 7
```

---

### Step 2 - Order of Operations

The order of operations for mathematical operators in Python is:

| Operator         | Description                                 |
|------------------|---------------------------------------------|
| `()`             | Parentheses                                 |
| `**`             | Exponentiation                              |
| `+x`, `-x`, `~x` | Unary plus, minus, bitwise NOT              |
| `*`, `/`, `//`, `%` | Multiply, Divide, Floor Divide, Modulo   |
| `+`, `-`         | Addition, Subtraction                       |
| `=` `+=` `-=` `*=` `/=` `%=` | Assignment and compound assignment |

This should be very familiar; it is similar to the order of operations for Algebra. There are, of course, a few differences.

#### Increment/Decrement

Python does **not** have `++` or `--` operators. To increment or decrement a variable, use `+= 1` or `-= 1`:

```python
age = 10
age += 1
print(age)  # the output is 11
```

---

### Multiplication `*`

In Python, the multiplication operator is an asterisk `*`. You cannot use the dot operator (ex: •), the multiplication x (ex: ×), or put a number next to a variable (ex: 7y) as you can in standard algebra notation.

```python
answer1 = 1.2 * 2.3    # the value of answer1 is 2.76
answer2 = 2 * 3        # the value of answer2 is 6
```

---

### Division `/` and `//`

Floating point division `/` behaves the way it does in mathematics. Integer division (floor division) uses `//` and always rounds down to the nearest integer. To illustrate this, consider the following:

```python
answer1 = 19 // 10
answer2 = 19 / 10
print(answer1)  # the output is 1
print(answer2)  # the output is 1.9
```

In this case, the output of the first line is **not** 1.9 because `//` performs integer division. To get 1.9, we need to use floating point division `/`.

---

### Modulus `%`

Recall that integer division drops the remainder of the division problem. What if you want to know the remainder? This is the purpose of the modulus operator `%`. Consider the following code:

```python
remainder = 19 % 10
print(remainder)  # the output is 9
```

For example, consider the following problem:

```python
total_minutes = 161  # The movie "Out of Africa" is 161 minutes
num_hours = total_minutes // 60  # The movie is 2 hours long...
num_minutes = total_minutes % 60  # ... plus 41 minutes
```

---

### Assignment `=`

In mathematics, the equals symbol `=` is a statement of equality. In Python, the equals symbol is a statement of assignment. You are specifying that the evaluation of the right-side is to be assigned to the variable on the left-side. Consider the following code:

```python
x = 2
x = x + 1  # the value of x is updated from 2 to 3
```

The second statement would not be possible in mathematics; there is no value for x where x=x+1 is true. However, in Python, this is quite straightforward: the right-side evaluates to 3 and the variable on the left is assigned to that value. The most common variants are:

| Operator | Description         | Use         |
|----------|---------------------|-------------|
| `+=`     | Add and assign      | Add onto    |
| `-=`     | Subtract and assign | Subtract from |
| `*=`     | Multiply and assign | Multiply by |
| `/=`     | Divide and assign   | Divide by   |

---

## Step 3 - Converting

The final step in evaluating an expression is to convert data from one type to another. This arises from the fact that you can’t add an integer to a floating point number in some languages, but Python will automatically convert as needed. Consider the following code:

```python
print(4 + 3.2)  # Output: 7.2
```

Python will always convert `ints` to `floats` in these circumstances.

### Casting

Rather than allowing the interpreter to convert integers or values from one data type to another, it is often useful to perform that conversion yourself explicitly. This can be done with casting. Casting is the process of specifying that a given value is to be treated like another data-type just for the purpose of evaluating a single expression. Consider the following code:

```python
value = 4
print("float:", float(value))    # Output: float: 4.0
print("integer:", int(value))    # Output: integer: 4
```

There are a few quirks to casting. First, the variable you are casting does not change. Once you declare a variable as a given data-type, it remains that data-type for the remainder of the program. Casting just changes how that variable behaves for one expression. Second, not all data-types convert in the most obvious way. Consider converting `ints` and `bools`:

```python
a = bool(7)      # True    any number but 0 turns into True
b = bool(0)      # False   only zero turns to False
c = int(True)    # 1       True always becomes 1
d = int(False)   # 0       False always becomes 0
```

---

## Putting it all together

So how does this work together? Consider the following example:

```python
f = 34
c = 5.0 / 9 * (f - 32)
print(c)  # Output: 1.111111...
```

Seemingly simple expressions can be quite complex and unpredictable when data-type conversion occurs. It is far easier to use only one data-type in an expression. In other words, don’t mix `floats` and `ints` unless you intend to!

---

### Example 1.3 - Compute Change

This example will demonstrate how to evaluate simple expressions, how to update the value in a variable, casting, and how to use modulus.

#### Problem

Write a program to prompt the user for an amount of money. The program will then display the number of dollars, quarters, dimes, nickels, and pennies required to match the amount.

#### Solution

```python
# prompt the user
dollars = float(input("Please enter a positive dollar amount (ex: 4.23): "))

# convert to cents
cents = int(dollars * 100.0)

# compute change
print("Dollars: ", cents // 100)
cents %= 100
print("Quarters:", cents // 25)
cents %= 25
print("Dimes:   ", cents // 10)
cents %= 10
print("Nickels: ", cents // 5)
cents %= 5
print("Pennies: ", cents)
```

#### Challenge

As a challenge, try to modify the above program so it will not only compute change with coins, but also for bills. For example, it will display the number of $1’s, $5’s, $10’s, and $20’s.

---

<table style="width: 100%; min-width: 715px; border: 1px solid #00000010">
<thead>
<tr>
   <td>
      <!-- Blank -->
   </td>
   <td style="text-align: center; background: #17365d; height: 12px;">
      <h4 style="color: white; padding: 0; margin: 0;">Assignment 1.3 - Temperature Conversion</h4>
   </td>
   <td>
   <!-- Blank -->
   </td>
</tr>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
    Problem
</h4>
</td>
<td>
<p>
Write a program to convert Fahrenheit to Celsius. This program will prompt the user for the Fahrenheit number and convert it to Celsius. The equation is:
</p>

```
C = 5/9 * (F – 32)
```

The program will prompt the user for the temperature, compute the Celsius value, and display the results.

**Hint:** If you keep getting zero for an answer, you are probably not taking integer division into account. Please review the text for insight as to what is going on.

**Hint:** If the last test fails, then you are probably not rounding correctly. Note that integers cannot hold the decimal part of a number so they always round down. If you use `round()`, then the rounding will occur the way you expect.

</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
<tr>
  <td>
    <!-- Blank -->
  </td>
  <td style="border: 1px solid #70839c">
    <!-- Blank -->
  </td>
  <td>
    <!-- Blank -->
  </td>
</tr>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
    Example
</h4>
</td>
<td>
User input is **underlined**.

```
Please enter Fahrenheit degrees: 72
Celsius: 22
```
</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
<tr>
   <td>
      <!-- Blank -->
   </td>
   <td style="border: 1px solid #70839c">
      <!-- Blank -->
   </td>
   <td>
      <!-- Blank -->
   </td>
</tr>
<tr>
<td style="background: #17365d">
    <h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
        Instructions
    </h4>
</td>
<td>

The Test Bed is available by running

```powershell
pytest
```

The Style Checker is available by running 
```powershell
flake8
```

Don’t forget to submit your assignment with the name “Assignment 13” in the header.

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 41 for a hint.</em></div>
</td>
<td style="background: #17365d">
    <!-- Blank -->
</td>
</tr>
</thead>
</table>

---