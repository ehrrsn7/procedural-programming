Here’s the relevant section from Unit 1.4, transcribed and formatted in Markdown:

---

## Unit 1: Simple Programs

### 1.4 Functions

Sue is working on a large project and is getting overwhelmed. How can she possibly keep all this code straight? To simplify her work, she decides to break the program into a collection of smaller, more manageable chunks. Each chunk can be individually designed, developed, and tested. Suddenly the problem seems much more manageable!

#### Objectives

By the end of this class, you will be able to:
- Create a function in C++.
- Pass data into a function using both pass-by-value and pass-by-reference.
- Be able to identify the scope of a variable in a program.

#### Prerequisites

Before reading this section, please make sure you are able to:
- Choose the best data-type to represent your data (Chapter 1.2).
- Declare a variable (Chapter 1.2).

#### Overview

A function is a small part of a larger program. Other terms (procedure, module, subroutine, subprogram, and method) mean nearly the same thing in the Computer Science context and we will use them interchangeably this semester.

There are two main ways to look at functions. The first is like a medical procedure. A medical procedure is a small set of tasks designed to accomplish a specific purpose. Typically these procedures are relatively isolated; they can be used in a wide variety of contexts or operations. Functions in C++ often follow this procedural model: breaking large programs into smaller ones.

The second way to look at functions is similar to how a mathematician looks at functions: an operation that converts input into output. The Cosine function is a great example: input in the form of radians or degrees is converted into a number between one and negative one. Frequently functions in C++ follow this model as programmers need to perform operations on data.

The syntax for both procedures and mathematical functions is the same in C++. The purpose of this chapter is to learn the syntax of functions so they can be used in our programs. All assignments, projects, and tests in this class will involve multiple functions from this time forward.

#### Function Syntax

There are two parts to function syntax: the syntax of declaring (or defining) a function, and the syntax of calling (or "running") a function.

**Declaring a Function**

The syntax of a function is exactly the same as the syntax of `main()` because `main()` is a function!

```cpp
<return type> <function name>(<parameter list>) {
  <statement list>
  return <return value>;
}
```

Consider the following function to convert feet to meters:

```cpp
/**
 * CONVERT FEET TO METERS
 * Convert imperial feet to metric meters
 */
double convertFeetToMeters(double feet) {
  double meters = feet * 0.3048;
  return meters;
}
```

Observe the function header. As the number of functions gets large in a program, it becomes increasingly important to have complete and concise function comment blocks.

Function names are typically verbs because functions do things. Similarly, variable names are typically nouns because variables hold things. As with the function headers, strive to make the function names completely and concisely describe what the function does.

Finally, observe how one piece of information enters the function (`double feet`) and one piece of information leaves the function (`return meters;`). The input parameter (`feet`) is treated like any other variable inside the function.

**Calling a Function**

Calling a function is similar to looking up a footnote in the scriptures. The first step is to mark your current spot in the reading so you can return once the footnote has been read. The second step is to read the contents of the footnote. The third is to return back to your original spot in the reading. Observe that we can also jump to the Topical Guide or Bible Dictionary from the footnote. This requires us to remember our spot in the footnote as well as our spot in the scriptures. While humans can typically only remember one or two spots before their place is lost, computers can remember an extremely large number of places.

Computers follow the same algorithm when calling functions as we do when looking up a footnote:

```cpp
{
  double heightFeet = 5.9;
  double heightMeters = convertFeetToMeters(heightFeet);
}
```

In this example, the user is converting their height in feet to the meters equivalent. To accomplish this, the function `convertFeetToMeters()` is called. This indicates the computer must stop working in the calling function and jump to the function `convertFeetToMeters()` much like a footnote in the scriptures indicates we should jump to the bottom of the page. After the computer has finished executing the code in `convertFeetToMeters()`, control returns to the calling function.

---

If there's anything more you need from this section or any other, feel free to ask!
