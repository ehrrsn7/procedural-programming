<a href="../1.0-First-Program/README.md">Back to Unit 1.0</a>

# 1.5 Boolean Expressions

## Objectives
By the end of this class, you will be able to:
- Declare a Boolean variable.
- Convert a logic problem into a Boolean expression.
- Recite the order of operations.

## Prerequisites
Before reading this section, please make sure you are able to:
- Represent simple equations in C++ (Chapter 1.3).
- Choose the best data-type to represent your data (Chapter 1.2).

## Overview

Boolean algebra is a way to express logical statements mathematically. This is important because virtually all programs need to have decision-making logic. There are three parts to Boolean algebra:
1. **Boolean variables** – variables enabling the programmer to store the results of Boolean expressions.
2. **Boolean operators** – operations that can be performed on Boolean variables.
3. **Comparison operators** – allowing the programmer to convert a number to a Boolean value by comparing it to some value.

### Common Boolean Operators

| Math | English | C++ | Example |
|------|---------|-----|---------|
| ~    | Not     | `!` | `!true` |
| ∧    | And     | `&&`| `true && false` |
| ∨    | Or      | `||`| `true || false` |
| =    | Equals  | `==`| `x + 5 == 42 / 2` |
| ≠    | Not Equals | `!=` | `graduated != true` |
| <    | Less than | `<` | `age < 16` |
| ≤    | Less than or equal to | `<=` | `timeNow <= timeLimit` |
| >    | Greater than | `>` | `age > 65` |
| ≥    | Greater than or equal to | `>=` | `grade >= 90` |

---

## Boolean Operators: And, Or, and Not

### AND (`&&`)
The Boolean operator **AND** evaluates to `true` only if both the left-side and right-side are `true`. If either is `false`, the expression evaluates to `false`.

Example:
```cpp
bool answer = leftSide && rightSide;
```

**Truth Table for AND:**

| Left-Side | Right-Side | Result |
|-----------|------------|--------|
| `true`    | `true`     | `true` |
| `true`    | `false`    | `false`|
| `false`   | `true`     | `false`|
| `false`   | `false`    | `false`|

### OR (`||`)
The Boolean operator **OR** evaluates to `true` if either the left-side or the right-side is `true`.

Example:
```cpp
bool answer = leftSide || rightSide;
```

**Truth Table for OR:**

| Left-Side | Right-Side | Result |
|-----------|------------|--------|
| `true`    | `true`     | `true` |
| `true`    | `false`    | `true` |
| `false`   | `true`     | `true` |
| `false`   | `false`    | `false`|

### NOT (`!`)
The Boolean operator **NOT** is a unary operator that negates the Boolean value.

Example:
```cpp
bool wrong = !right;
```

**Truth Table for NOT:**

| Right-Side | Result |
|------------|--------|
| `true`     | `false`|
| `false`    | `true` |

---

## Comparison Operators

### Equivalence
The first class of comparison operators consists of **equivalence** and **inequality**. These determine whether values are the same or not.

Example:
```cpp
int grade = 100;
bool isPerfectScore = (grade == 100);  // Evaluates to true only when grade is 100
```

It is also possible to check if two values are not the same:
```cpp
int numStudents = 21;
bool isClassHeldToday = (numStudents != 0); // True if class is held
```

### Relative Operators
The second class of comparison operators performs relative evaluations:
- Greater than `>`
- Less than `<`
- Greater than or equal to `>=`
- Less than or equal to `<=`

Example:
```cpp
int numBoys = 6;
int numGirls = 8;
bool isMoreGirls = (numGirls > numBoys); // True
```

Comparison operators also work with floating-point numbers and characters:
```cpp
float grade = 82.5;
bool hasPassedCS124 = (grade >= 60.0); // Passed if grade is 60 or higher

char letterGrade = 'B';
bool goodGrade = ('C' >= letterGrade); // True since 'B' comes before 'C'
```

---

<table style="width: 100%; min-width: 715px; border: 1px solid #00000010">
<thead>
<tr>
<td>
   <!-- Blank -->
</td>
<td style="text-align: center; background: #17365d; height: 12px;">
   <h4 style="color: white; padding: 0; margin: 0;">Example 1.5 – Decision Function</h4>
</td>
<td>
   <!-- Blank -->
</td>
</tr>
<tr>
<td style="background: #17365d">
   <h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
      Demo
   </h4>
</td>
<td>
<p>
   This example demonstrates how to write a function to make a binary decision (choosing between two options).
</p>
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
      Problem
   </h4>
</td>
<td>
<p>
   Write a program to compute whether a user qualifies for the child tax credit. The rule states:
</p>
<ul>
<li>You qualify if your income is less than $110,000 per year.</li>
<li>Otherwise, you do not qualify.</li>
</ul>
<p>
   <strong>Sample Output</strong>
</p>
<pre>
What is your income: 115000.00
How many children? 2
Child Tax Credit: $ 0.00
</pre>
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
      Solution
   </h4>
</td>
<td>
<p>
   The key part of this problem is the function deciding whether the user qualifies for the tax credit.
</p>

```cpp
bool qualify(double income)
{
   return (income <= 110000.00);
}
```

<p>
   Observe how the function name clearly indicates what <code>true</code> means. If <code>qualify()</code> returns <code>true</code>, then the user qualifies for the tax credit. Otherwise, they do not.
</p>
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
      Challenge
   </h4>
</td>
<td>
<p>
   Modify the above example to reflect the law more accurately:
</p>
<ul>
<li>The full $1,000 per child is given if income is less than $110,000.</li>
<li>The credit phases out at 5¢ per $1 over $110,000.</li>
<li>Families making more than $130,000 receive no credit.</li>
</ul>
</td>
<td style="background: #17365d">
   <!-- Blank -->
</td>
</tr>
</thead>
</table>

---

## Order of Operations in Boolean Expressions

With multiple Boolean operators, the **order of operations** becomes complex. Here is the priority order:

| Operator      | Description                      |
| ------------- | -------------------------------- |
| `()`          | Parentheses (highest precedence) |
| `++ --`       | Increment, Decrement             |
| `!`           | NOT                              |
| `* / %`       | Multiply, Divide, Modulo         |
| `+ -`         | Addition, Subtraction            |
| `> >= < <=`   | Greater than, Less than, etc.    |
| `== !=`       | Equality                         |
| `&&`          | AND                              |
| `||`          | OR                               |
| `=` `+=` `*=` | Assignment (lowest precedence)   |

---

<table style="width: 100%; min-width: 715px; border: 1px solid #00000010">
<thead>
<tr>
<td>
   <!-- Blank -->
</td>
<td style="text-align: center; background: #17365d; height: 12px;">
   <h4 style="color: white; padding: 0; margin: 0;">Assignment 1.5 – Full Tithe Payer</h4>
</td>
<td>
   <!-- Blank -->
</td>
</tr>
<tr>
<td style="background: #17365d">
   <h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
      Assignment
   </h4>
</td>
<td>
<p>
   Write a function to determine if an individual is a <strong>full tithe payer</strong>.
</p>
<ul>
<li>Function accepts <strong>income</strong> and <strong>payment</strong> as parameters.</li>
<li>Returns a <strong>Boolean value</strong> indicating whether the user is a full tithe payer.</li>
</ul>
<p>
   <strong>Example Output</strong>
</p>
<pre>
Income: 100
Tithe: 91
You are a full tithe payer.
</pre>
<pre>
Income: 532
Tithe: 40
Will a man rob God?  Yet ye have robbed me.
But ye say, Wherein have we robbed thee?
In tithes and offerings. Malachi 3:8
</pre>
<p>
   Test your solution using:
</p>
<pre>
testBed cs124/assign15 assignment15.cpp
</pre>
</td>
<td style="background: #17365d">
   <!-- Blank -->
</td>
</tr>
</thead>
</table>

---
