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