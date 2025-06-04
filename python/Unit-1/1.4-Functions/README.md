<a href="../1.0-First-Program/README.md"><h3>Unit 1: Simple Programs</h3></a>

## 1.4 Functions

Sue is working on a large project and is getting overwhelmed. How can she possibly keep all this code straight? To simplify her work, she decides to break the program into a collection of smaller, more manageable chunks. Each chunk can be individually designed, developed, and tested. Suddenly the problem seems much more manageable!

### Objectives

By the end of this class, you will be able to:
- Create a function in Python.
- Pass data into a function using parameters.
- Be able to identify the scope of a variable in a program.

### Prerequisites

Before reading this section, please make sure you are able to:
- Choose the best data-type to represent your data (Chapter 1.2).
- Declare a variable (Chapter 1.2).

## Overview

A function is a small part of a larger program. Other terms (procedure, module, subroutine, subprogram, and method) mean nearly the same thing in the Computer Science context and we will use them interchangeably this semester.

There are two main ways to look at functions. The first is like a medical procedure: a small set of tasks designed to accomplish a specific purpose. Typically these procedures are relatively isolated; they can be used in a wide variety of contexts or operations. Functions in Python often follow this procedural model: breaking large programs into smaller ones.

The second way to look at functions is similar to how a mathematician looks at functions: an operation that converts input into output. The cosine function is a great example: input in the form of radians or degrees is converted into a number between one and negative one. Frequently functions in Python follow this model as programmers need to perform operations on data.

The syntax for both procedures and mathematical functions is the same in Python. The purpose of this chapter is to learn the syntax of functions so they can be used in our programs. All assignments, projects, and tests in this class will involve multiple functions from this time forward.

## Function Syntax

There are two parts to function syntax: the syntax of defining a function, and the syntax of calling (or "running") a function.

**Defining a Function**

The syntax of a function is similar to the syntax of `main()` because `main()` is a function!

```python
def function_name(parameter_list: parameter_type) -> return_type:
    # statements to execute
    return value  # optional
```

- **Parameter Types:**  
While Python does not require you to specify parameter types, you can add type hints for clarity and better code readability. For example:

```python
def add_numbers(a: int, b: int) -> int:
    return a + b
```

Here, `a` and `b` are expected to be integers.

- **Return Type:**  
The `-> return_type` syntax after the parameter list is a type hint indicating what type of value the function is expected to return. This is optional but recommended for documentation and tooling support.

For example, a function returning a string:

```python
def greet(name: str) -> str:
    return f"Hello, {name}!"
```

- `def` starts the function definition.
- `function_name` is how you will call the function.
- `parameter_list` is how data enters the function.
- The code inside the function is indented.
- `return` sends a value back to the caller (optional).

Consider the following function to convert feet to meters:

```python
def convert_feet_to_meters(feet):
    """Convert imperial feet to metric meters."""
    meters = feet * 0.3048
    return meters
```

Function names are typically verbs because functions do things. Similarly, variable names are typically nouns because variables hold things. As with the function headers, strive to make the function names completely and concisely describe what the function does.

Finally, observe how one piece of information enters the function (`feet`) and one piece of information leaves the function (`return meters`). The input parameter (`feet`) is treated like any other variable inside the function.

### Calling a Function

Calling a function is like looking up a footnote in a book. The program pauses at the function call, jumps to the function, executes its code, and then returns to where it left off.

```python
height_feet = 5.9
height_meters = convert_feet_to_meters(height_feet)
```

In this example, the user is converting their height in feet to the meters equivalent. To accomplish this, the function `convert_feet_to_meters()` is called. This indicates the computer must stop working in the calling function and jump to the function `convert_feet_to_meters()`. After the computer has finished executing the code in `convert_feet_to_meters()`, control returns to the calling function.

---

### Example 1.4 – Simple Function Calling

This example will demonstrate how to call a function and accept input from a function. There will be no parameter passing in this example.

#### Problem

Write a program to ask a simple question and receive a simple answer. This problem is inspired by one of the great literary works of our generation:

What is the meaning of life, the universe, and everything?

The answer is: 42

#### Solution

The first function will return nothing. Its only purpose is to display text on the screen:

```python
def return_nothing():
    """Display a profound question."""
    print("What is the meaning of life, the universe, and everything?")
    # No return value needed
```

The second function will return a single integer value back to the caller:

```python
def return_a_value():
    """Return the answer to the ultimate question."""
    return 42
```

The two functions can be called from `main`:

```python
def main():
    return_nothing()  # no data is sent to main()
    print("The answer is:", return_a_value())  # the return value of 42 is printed

if __name__ == "__main__":
    main()
```

---

### Example 1.4 – Prompt Function

This example will demonstrate how to create a simple prompt function. This function will display a message to the user asking for information, receive the information using `input()`, and return the value through the function return mechanism.

#### Problem

Write a program to prompt the user for their age. The user’s age will then be displayed. User input is **bold** and <u>underlined</u>.

```
What is your age? 19
Your age is 19 years old.
```

#### Solution

The prompt function follows the “return a value” pattern from the previous example:

```python
def get_age():
    """Prompt the user for their age and return it as an integer."""
    age = int(input("What is your age? "))
    return age
```

Next we will create `main()` to test our function.

```python
def main():
    age = get_age()
    print(f"Your age is {age} years old.")

if __name__ == "__main__":
    main()
```

---

### Challenge

As a challenge, try to add a new function to prompt for GPA. Note that this one will return a floating-point number instead of an integer. What changes will you have to add to `main()` to test this function?

---


<table style="width: 100%; min-width: 715px; border: 1px solid #00000010">
<thead>
<tr>
<td>
<!-- Blank -->
</td>
<td style="text-align: center; background: #17365d; height: 12px;">
<h4 style="color: white; padding: 0; margin: 0;">Example 1.4 – Prompt Function</h4>
</td>
<td>
<!-- Blank -->
</td>
</tr>
</thead>
<tbody>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
    Demo
</h4>
</td>
<td>
This example will demonstrate how to create a simple prompt function. This function will display a message to the user asking for information, receive the information using `input()`, and return the value through the function return mechanism.

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
<tbody>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
    Problem
</h4>
</td>
<td>

Write a program to prompt the user for their age. The user’s age will then be displayed. User input is **bold** and <u>underlined</u>.

<pre><code>What is your age? <span style="text-decoration: underline; font-weight: bold">19</span>
Your age is 19 years old.</code></pre>

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

The prompt function follows the “return a value” pattern from the previous example:

```python
def get_age():
    """Prompt the user for their age and return it as an integer."""
    age = int(input("What is your age? "))
    return age
```

Next we will create `main()` to test our function.

```python
def main():
    age = get_age()
    print(f"Your age is {age} years old.")

if __name__ == "__main__":
    main()
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
    Challenge
</h4>
</td>
<td>

As a challenge, try to add a new function to prompt for GPA. Note that this one will return a floating-point number instead of an integer. What changes will you have to add to `main()` to test this function?

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
    See Also
</h4>
</td>
<td>

<p>Don’t forget to submit your assignment with the name “Assignment 12” in the header.</p>

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 41 for a hint.</em></div>
</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
</tbody>
</table>

### Parameter Passing

Parameter passing is the process of sending data between functions. The programmer can send only one piece of data from the callee (the function responding to the function call) and the caller (the function issuing or initiating the function call). This data is sent through the return mechanism. However, the programmer can specify an unlimited amount of data to flow from the caller to the callee through the parameter passing mechanism.

### Multiple Parameters

To specify more than one parameter to a function in Python, the programmer lists each parameter as a comma-separated list. For example, consider the scenario where the programmer is sending a row and column coordinate to a display function. The display function will need to accept two parameters.

```python
def display_coordinates(row, column):
    """Display the row and column coordinates on the screen."""
    print(f"({row}, {column})")
```

For this function to be called, two values need to be provided.

```python
display_coordinates(5, 10)
```

Parameter matchup occurs by order, not by name. In other words, the first parameter sent to `display_coordinates()` will always be sent to the `row` variable. The second parameter will always be sent to the `column`. Note that the two parameters do not need to be of the same data-type.

```python
def compute_pay(wage, hours_worked):
    """Compute pay based on wage and number of hours worked."""
    return wage * hours_worked
```

Common mistakes when working with parameters include:

  - Passing the wrong number of parameters. For example, the function may expect two parameters but the programmer only supplied one:

    ```python
    # This would cause a TypeError in Python
    # display_coordinates(4)
    ```

  - Getting the parameters crossed. For example, the function expects the first parameter to be row but the programmer supplied column instead:

    ```python
    display_coordinates(column, row) # first parameter should be row, not column
    ```

-----

### Working with Parameters

There are four main ways to think of parameter passing in a Python program:

**Input Only:** The first way involves data traveling one-way into a function. Observe how there is an input parameter (`value`) but no explicit return. This is appropriate in those scenarios when you want a function to do something with the data (such as display it) but do not want to send any data back to the caller:

```python
def display(value):
    print(value)
```

**Output Only:** The second way occurs when data flows from a function, but not into it. An example would be a function prompting the user for information (like `get_income()`). In this case, the parameter list is empty but there is a return value.

```python
def get_value():
    return input()
```

**Processing:** The third way occurs when a function converts data from one type to another. This model was followed in both our `compute_savings()` and `convert_feet_to_meters()` examples (from earlier in the unit). It is important to realize that you can have more than one input parameter (in the parentheses) but only one output parameter (the return mechanism).

```python
def is_leap(year: int) -> bool:
    # Placeholder for leap year logic
    return False

def add(value1: float, value2: float) -> float:
    return value1 + value2
```

**Update:** In Python, the concept of "update" via pass-by-reference as seen in C++ with `&` doesn't directly translate for immutable types like integers, floats, strings, and tuples. For mutable types like lists and dictionaries, changes inside a function *do* affect the original object. If you need to simulate an "update," you typically return the modified value.

```python
def update_money(money: int) -> int:
    money += 1
    return money
```

| Input-only          | Output-only     | Processing                      | Update (Python style) |
| :------------------ | :-------------- | :------------------------------ | :-------------------- |
| `def display(value):` | `def get_value():` | `def is_leap(year: int) -> bool:` | `def update_money(money: int) -> int:` |
|                     |                 | `def add(value1: float, value2: float) -> float:` |                       |

-----

### Example 1.4 – Compute Function

**Demo**

This example will demonstrate how to send data to a function and receive data from a function. This follows the “Processing” model of information flow through a function.

**Problem**

Write a program to compute how much money to put in a savings account. The policy is “half the income after tithing is removed.”

```
What is your allowance? 10.00
You need to deposit $4.50
```

**Solution**

The function to compute savings takes income as input and returns the savings amount:

```python
def compute_savings(cents_income: int) -> int:
    """For a given amount of earned income, compute the amount to be saved."""
    # first take care of tithing
    cents_tithing = cents_income // 10  # D&C 119:4 (integer division)
    cents_income -= cents_tithing        # remove tithing from the income

    # next compute the savings
    cents_savings = cents_income // 2   # savings are half the remaining (integer division)
    return cents_savings
```

This function will be called from `main`. It will provide the input `cents_income` and present the results to the user through a `print()` statement.

```python
def main():
    """Prompt the user for their allowance and display the savings component."""
    # prompt the user for their allowance
    dollars_allowance = float(input("What is your allowance? "))  # a float for decimal #s
    cents_allowance = int(dollars_allowance * 100)             # convert to cents

    # display how much is to be deposited
    cents_deposit = compute_savings(cents_allowance)          # call the function!
    print(f"You need to deposit ${cents_deposit / 100.0:.2f}") # convert back to dollars and format
    return 0

if __name__ == "__main__":
    main()
```

**Challenge**

As a challenge, create a function to convert a floating-point dollars amount (`dollars_allowance`) into an integral cents amount (`cents_allowance`). Use the formula currently in `main()`:

```python
cents_allowance = int(dollars_allowance * 100)
```

**See Also**

The concept is similar, though the file path is specific to the C++ environment.

-----

In the preceding example, there are a few things to observe about the function `compute_savings()`. First, integers were chosen instead of floating-point numbers. This is because, though floats can work with decimals, they are approximations and often yield unwieldy answers containing fractions of pennies\! It is much cleaner to work with integers when dealing with money. To make sure this is obvious, include the units in the variable name.

Data is passed from `main()` into the function `compute_savings()` through the `()` after the function name. In this case, the expression containing the variable `cents_allowance` is evaluated (to the value 2150 if the user typed 21.50). This value (not the variable\!) is sent to the function `compute_savings()` where a new variable called `cents_income` is created. This variable will be initialized with the value from the calling function (2150 in this case).

It is important to realize that a copy of the data (for immutable types) from `main()` is used by the function through the parameter list; the original variable itself is not directly modified (for immutable types)\! In other words, the variable `cents_income` in `compute_savings()` can be changed without the variable `cents_allowance` in `main()` being changed. This is because they are different variables referring to different locations in memory\!

When execution is in the function `compute_savings()`, only variables declared in that function can be used. This means that the statements in the function only have access to the variables `cents_income`, `cents_tithing`, and `cents_savings`. The variables from the caller (`dollars_allowance`, `cents_allowance`, and `cents_deposit`) are not visible to `compute_savings()`. To pass data between the functions, parameters must be used.

### Pass-By-Object-Reference (Similar to C++ Pass-By-Reference for Mutable Types)

In Python, the behavior is often described as "pass-by-object-reference". For immutable objects, it acts like pass-by-value. For mutable objects, it acts like pass-by-reference in that changes within the function can affect the original object.

| Pass By Value (for immutable types)                                                                                              | Pass By "Reference" (for mutable types)                                                                                                  |
| :------------------------------------------------------------------------------------------------------------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------- |
| ` python def not_change(number):     number += 1  `                                                                             | ` python def change(data_list):     data_list.append(4)  `                                                                         |
| Calling `not_change` with a number won't change the original number.                                                             | Calling `change` with a list *will* modify the original list.                                                                             |

To simulate the effect of C++'s pass-by-reference for all types, you would typically return the modified value from the function.

```python
def get_coordinates():
    row = int(input("Specify the row: "))
    column = int(input("Specify the column: "))
    return row, column

# In main:
# r, c = get_coordinates()
```

-----

### Example 1.4 – Passing By "Reference" (Python Style)

**Demo**

This example will demonstrate how the behavior similar to pass-by-value (for immutable types) and pass-by-reference (for mutable types) works in Python, and how to achieve updating through return values.

**Solution**

The first function doesn't explicitly pass data in or out (though it uses a local variable):

```python
def pass_nothing():
    """No information is explicitly sent to or returned from the function."""
    # a different variable than one might have in the calling scope
    value = 0
    print("Function pass_nothing executed.")
```

The second demonstrates behavior similar to pass-by-value for immutable types:

```python
def pass_by_value_like(value):
    """One-way flow of information conceptually similar to pass-by-value."""
    print(f"pass_by_value_like({value})")
    # this is a local modification and won't affect the caller for immutable types
    value = 1
    print(f"Inside function, value is now: {value}")

# Example of calling:
# num = 5
# pass_by_value_like(num)
# print(f"Outside function, num is still: {num}")
```

The final demonstrates behavior similar to pass-by-reference for mutable types (like a list), and the typical Python way to "update" immutable types via return:

```python
def pass_by_reference_like_mutable(data_list):
    """Two-way flow of data for mutable types."""
    print(f"pass_by_reference_like_mutable({data_list})")
    # this will modify the original list
    data_list.append(2)
    print(f"Inside function, data_list is now: {data_list}")

def update_via_return(value):
    """Updating a value by returning the new value."""
    print(f"update_via_return({value})")
    new_value = value + 2
    print(f"Inside function, new_value is: {new_value}")
    return new_value

# Example of calling:
# my_list = [0]
# pass_by_reference_like_mutable(my_list)
# print(f"Outside function, my_list is now: {my_list}")
#
# num = 0
# num = update_via_return(num)
# print(f"Outside function, num is now: {num}")
```

The key difference to observe is how mutable objects passed to functions can be modified in place, while for immutable objects, you'd typically return a new value if you want the change to persist outside the function.

**See Also**

The concepts are similar, though the file paths are specific to the C++ environment.

-----

### Prototypes (Not strictly necessary in Python)

Python does not require explicit prototypes in the same way C++ does because it is an interpreted language. The interpreter reads and executes code line by line. As long as a function is defined before it is called during the execution flow, it will work. However, it's good practice to define functions before you call them for readability.

### Scope

A final topic essential to understanding how data is accessible within functions is Scope. Scope is the context in which a given variable is available for use. For example, if a variable is defined in one function, it cannot be directly accessed in another without being passed as a parameter or being a global variable. The general rule of variable scope is the following:

> A variable is only directly accessible within the block (defined by indentation) where it is created.

```python
def add(value1: float, value2: float) -> float:
    return value1 + value2
```

```python
import sys

def display_instructions():
    print("Please press the Enter key to quit the program")
    input()
    return

def main():
    display_instructions()
    # pause effect achieved by input()
    return 0

if __name__ == "__main__":
    main()
```

In Python, you'd typically define functions before `main()` for clarity, but the interpreter doesn't strictly enforce a top-down definition order like C++ compilation.

-----

### Local Variables

The most common way to declare variables is within a function. This is called a “local variable” because the variable is local to (or restricted to) that one function. Consider the following example:

```python
def print_name():
    """Display the user’s name. No direct data sharing with the outer scope."""
    name = input("Enter your name: ")  # Local variable only visible in this function
    print(name)

def main():
    print_name()  # no direct variable access from here
    return 0

if __name__ == "__main__":
    main()
```

Here `name` is a local variable. It exists only while `print_name()` is executing. It is not accessible outside of `print_name()`.

### IF Local

Consider the following Python code:

```python
first = 20
second = 10
if first > second:
    temp = first      # the variable temp is in scope within this if block
    first = second
    second = temp
    # temp is still in scope here
print(f"{first}, {second}")
# temp is no longer directly accessible here (it's local to the if block)
```

Here the variable `temp` is only relevant inside the `if` block. Once the `if` block finishes, `temp` is no longer directly accessible. Its scope is local to the `if` block.

-----

### Blocks

In Python, blocks of code are defined by indentation, not curly braces `{}`. A variable's scope is generally within the indented block where it is created.

```python
def example_block():
    display() # Assuming display() is defined elsewhere

    print("Press any key to continue")
    something = input() # 'something' is local to this function
    # the scope of 'something' ends at the end of this function

def display():
    print("Displaying something...")

def main():
    example_block()

if __name__ == "__main__":
    main()
```

Since we are getting user input into `something` and might not use it further, its scope is limited to within `example_block`.

### Globals

A global variable is defined as a variable defined outside any function, usually at the top of a file.

```python
input_value = None  # global variable - use with caution!

def main():
    global input_value
    input_value = int(input("Enter your age: "))
    if input_value > 25:
        print("Man you are old!")
    return 0

if __name__ == "__main__":
    main()
```

These are very problematic because they can be accessed and modified by any function in the entire program. It therefore becomes exceedingly difficult to answer questions like:

  - Is the variable initialized?
  - Which part of the code set the variable last?
  - Which part of the code will set the variable next?
  - Which parts of the code depend on this variable's value?

Unfortunately, these questions are not only exceedingly difficult to answer with global variables, but they are exceedingly important when trying to fix bugs. For this reason, excessive use of global variables is generally discouraged in Python as well, as it can lead to less maintainable and harder-to-debug code.


Absolutely, here's a fully styled and Python-ified version of the original assignment that aligns with the previous format you're using for your curriculum docs. I kept all paragraph text the same unless language-specific changes were needed (like `cout` becoming `print`, and references to `.cpp` changing to `.py`):

---

# Unit 1.4: Functions and Scope

**Procedural Programming in Python**
**Unit 1: Simple Programs**
**Pages 71–75**

---

### Problem 1

Write the Python statements for the following:

* `c = 2 * π * r`
* `x = 8 + 3`
* `e = m * c ** 2`
* `x = 1 / (2 * y)`
  Please see page 47 for a hint.

---

### Problem 2

What is the value of `c` when the expression is evaluated?

```python
f = 34
c = (f - 32) * 5 / 9
```

**Answer:**

---

Please see page 49 for a hint.

---

### Problem 3

Write a function to display “Hello World”. Call it `hello()`.
**Answer:**

```python
def hello():
    print("Hello World")
```

Please see page 60 for a hint.

---

### Problem 4

Write a function to return a number. Call it `get()`.
**Answer:**

```python
def get():
    return 42  # Or any number
```

Please see page 64 for a hint.

---

### Problem 5

What is the output?

```python
def two():
    return 3

def main():
    one = 2
    three = two() + one
    print(three)

main()
```

**Answer:**

---

Please see page 59 for a hint.

---

### Problem 6

What is the output?

```python
def a():
    print("a", end='')

def b():
    print("bb", end='')

def main():
    a()
    b()
    a()

main()
```

**Answer:**

---

Please see page 59 for a hint.

---

### Problem 7

What is the output?

```python
def a(b, c):
    return b - c

def main():
    x = a(4.0, 3.0)
    y = a(7.0, 5.0)
    print(a(x, y))

main()
```

**Answer:**

---

Please see page 62 for a hint.

---

### Problem 8

What is the output?

```python
def add(n1, n2):
    return n1 + n2

def main():
    n3 = add(0.1, 0.2)
    n4 = add(n3, add(0.3, 0.4))
    print(n4)

main()
```

**Answer:**

---

Please see page 62 for a hint.

---

### Problem 9

What is the output?

```python
def weird(a, b):
    a = 1
    b[0] = 2

def main():
    a = 3
    b = [4]
    weird(a, b)
    print(a * b[0])

main()
```

**Answer:**

---

Please see page 65 for a hint.

---

### Problem 10

What is the output?

```python
def setTrue(a):
    a = True

def main():
    a = False
    setTrue(a)
    print(int(a))

main()
```

**Answer:**

---

Please see page 65 for a hint.

---

### Problem 11

What is the output?

```python
def a(value):
    return value * 2

def b():
    return 3

def main():
    print(a(b()))

main()
```

**Answer:**

---

Please see page 67 for a hint.

<table>

### Problem 12

What is the output?

```python
value = 'a'

def main():
    value = 'b'
    if True:
        value = 'c'
    print(value)

main()
```

**Answer:**

---

Please see page 67 for a hint.

</table>

### Assignment 1.4

You should start this assignment by copying the file down from Google Classroom.

There are two functions that you will need to write:

#### Display Message

Please create a function called `questionBob()`. The function should not return anything but instead display the following message:

```
How many donuts are you gonna have?
I've had 3.
```

#### Display Answer

The second function, called `responseBilly()`, will return the Billy's response: 7 * 3.

#### Main

`main()` is provided in the file.

```python
def main():
    # ask Billy's question
    questionBob()

    # the first part of the Lord's response
    print("I do say, I could really go for, like 7")
    print(f"times that: {responseBilly()}.")

main()
```

#### Example Output

```
How many donuts are you gonna have?
I've had 3.
I do say, I could really go for, like 7  
times that: 21.
```

---

### Instructions

Please verify your solution against:

```powershell
pytest
```

Don’t forget to submit your assignment with the name “Assignment 14” in the header.
