<a href="../1.0-First-Program/README.md"><h3>Unit 1: Simple Programs</h3></a>

## 1.4 Functions

Sue is working on a large project and is getting overwhelmed. How can she possibly keep all this code straight? To simplify her work, she decides to break the program into a collection of smaller, more manageable chunks. Each chunk can be individually designed, developed, and tested. Suddenly the problem seems much more manageable!

### Objectives

By the end of this class, you will be able to:
- Create a function in C++.
- Pass data into a function using both pass-by-value and pass-by-reference.
- Be able to identify the scope of a variable in a program.

### Prerequisites

Before reading this section, please make sure you are able to:
- Choose the best data-type to represent your data (Chapter 1.2).
- Declare a variable (Chapter 1.2).

## Overview

A function is a small part of a larger program. Other terms (procedure, module, subroutine, subprogram, and method) mean nearly the same thing in the Computer Science context and we will use them interchangeably this semester.

There are two main ways to look at functions. The first is like a medical procedure. A medical procedure is a small set of tasks designed to accomplish a specific purpose. Typically these procedures are relatively isolated; they can be used in a wide variety of contexts or operations. Functions in C++ often follow this procedural model: breaking large programs into smaller ones.

The second way to look at functions is similar to how a mathematician looks at functions: an operation that converts input into output. The Cosine function is a great example: input in the form of radians or degrees is converted into a number between one and negative one. Frequently functions in C++ follow this model as programmers need to perform operations on data.

The syntax for both procedures and mathematical functions is the same in C++. The purpose of this chapter is to learn the syntax of functions so they can be used in our programs. All assignments, projects, and tests in this class will involve multiple functions from this time forward.

## Function Syntax

There are two parts to function syntax: the syntax of declaring (or defining) a function, and the syntax of calling (or "running") a function.

**Declaring a Function**

The syntax of a function is exactly the same as the syntax of `main()` because `main()` is a function!

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<!--<br><br>-->
<strong>Page 58</strong>
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.3 Expressions
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Procedural Programming in C++
</p>

<div style="page-break-after: always;"></div>

<table style="max-width: 550px">
<tbody>
<tr>
<td style="padding: .5em">
<p style="background: #dfffeb; border: 1px solid green; border-radius: 3px; padding: 0 3px; margin: 0">
Output type of the function.
</p>
</td>
<td width=0 style="padding: 0"><!--Blank Cell--></td>
<td style="padding: .5em">
<p style="background: #ffebdf; border: 1px solid #7d6150; border-radius: 3px; padding: 0 3px; margin: 0">
Every function needs a name by which it will be called. 
</p>
</td>
<td width=0 style="padding: 0"><!--Blank Cell--></td>
<td style="padding: .5em">
<p style="background: #dff2ff; border: 1px solid #587588; border-radius: 3px; padding: 0 3px; margin: 0">
How  data  enters the function.
</p>
<td>
</tr>
</tbody>
</table>

<pre style="max-width: 500px"><code><span style="background: #dfffeb; border: 1px solid green; border-radius: 3px; padding: 0 3px;">&lt;return type&gt;</span> <span style="background: #ffebdf; border: 1px solid #7d6150; border-radius: 3px; padding: 0 3px;">&lt;function name&gt;</span>(<span style="background: #dff2ff; border: 1px solid #587588; border-radius: 3px; padding: 0 3px;">&lt;parameter list&gt;</span>)
{
   <span style="background: #ffeeff; border: 1px solid purple; border-radius: 3px; padding: 0 3px;">&lt;statement list&gt;</span>
   return <span style="background: #ffe9e9; border: 1px solid red; border-radius: 3px; padding: 0 3px;">&lt;return value&gt;;</span>
}</code></pre>

<table style="max-width: 550px">
<tbody>
<tr>
<td>
<p style="background: #ffeeff; border: 1px solid purple; border-radius: 3px; padding: 0 3px;">
The code to be executed when the function is called. 
</p>
</td>
<td width=0 style="padding: 0"><!--Blank Cell--></td>
<td style="padding: .5em">
<p style="background: #ffe9e9; border: 1px solid red; border-radius: 3px; padding: 0 3px;">
The answer to be returned to the caller indicating the results of the function.
</p>
</td>
<td width=0><!--Blank Cell--></td>
</tr>
</tbody>
</table>

Consider the following function to convert feet to meters:

```cpp
/***************************************************
 * CONVERT FEET TO METERS
 * Convert imperial feet to metric meters
 ***************************************************/
double convertFeetToMeters(double feet) {
  double meters = feet * 0.3048;
  return meters;
}
```

Observe the function header. As the number of functions gets large in a program, it becomes increasingly important to have complete and concise function comment blocks.

Function names are typically verbs because functions do things. Similarly, variable names are typically nouns because variables hold things. As with the function headers, strive to make the function names completely and concisely describe what the function does.

Finally, observe how one piece of information enters the function (`double feet`) and one piece of information leaves the function (`return meters;`). The input parameter (`feet`) is treated like any other variable inside the function.

### Calling a Function

Calling a function is similar to looking up a footnote in the scriptures. The first step is to mark your current spot in the reading so you can return once the footnote has been read. The second step is to read the contents of the footnote. The third is to return back to your original spot in the reading. Observe that we can also jump to the Topical Guide or Bible Dictionary from the footnote. This requires us to remember our spot in the footnote as well as our spot in the scriptures. While humans can typically only remember one or two spots before their place is lost, computers can remember an extremely large number of places.

Computers follow the same algorithm when calling functions as we do when looking up a footnote:

```cpp
{
  double heightFeet = 5.9;
  double heightMeters = convertFeetToMeters(heightFeet);
}
```

In this example, the user is converting their height in feet to the meters equivalent. To accomplish this, the function `convertFeetToMeters()` is called. This indicates the computer must stop working in the calling function and jump to the function `convertFeetToMeters()` much like a footnote in the scriptures indicates we should jump to the bottom of the page. After the computer has finished executing the code in `convertFeetToMeters()`, control returns to the calling function.

<p class="footer" style="
   text-align: right;
   font-size: .75em;">
<!--<br><br>-->
Procedural Programming in C++
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.4 Functions
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 59</strong>
</p>

<div style="page-break-after: always;"></div>

<table style="width: 100%; min-width: 715px; border: 1px solid #00000010">
<thead>
<tr>
<td>
   <!-- Blank -->
</td>
<td style="text-align: center; background: #17365d; height: 12px;">
   <h4 style="color: white; padding: 0; margin: 0;">Example 1.4 – Simple Function Calling</h4>
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
   This example will demonstrate how call a function and accept input from a function. There will be no parameter passing in this example. 
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
   Write a program to ask a simple question and receive a simple answer. This problem is inspired by one of the great literary works of our generation:
</p>

<p>
   What is the meaning of life, the universe, and everything?
</p>

<p>
   The answer is: 42
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
      Solution
   </h4>
</td>
<td>
<p>
   The first function will return nothing. Its only purpose is to display text on the screen:
</p>

```cpp
/************************************************************
 * RETURN NOTHING
 * This function will not return anything. Its only purpose is
 * to display text on the screen. In this case, it will display
 * one of the great questions of the universe.
 ************************************************************/
void returnNothing() 
{ 
   // display our profound question 
   cout << "What is the meaning of life, the universe, and everything?\n"; 

   // send no information back to main() 
   return; 
}
```

<p>
   The second function will return a single integer value back to the caller:
</p>

```cpp
/*******************************************************************
 * RETURN A VALUE
 * This function, when called, will return a single integer value.
 ******************************************************************/
int returnAValue() 
{ 
   // did you guess what value we will be returning here? 
   return 42; 
}
```

<p>
   The two functions can be called from <code>main</code>:
</p>

```cpp
int main() 
{ 
   // call the function asking the profound question 
   returnNothing();                   // no data is sent to main() 

   // display the answer: 
   cout << "The answer is: " 
        << returnAValue()             // the return value of 42 is sent to COUT 
        << endl; 

   return 0; 
}
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
      See Also
   </h4>
</td>
<td>
<p>
   The complete solution is available at <a href="https://content.byui.edu/file/66227afd-b800-4ba3-b6b3-18db4db6c440/1/1-4-simpleFunctionCalling.html">1-4-simpleFunctionCalling.cpp</a> or:
</p>

```
/home/cs124/examples/1-4-simpleFunctionCalling.cpp
```
</td>
<td style="background: #17365d">
   <!-- Blank -->
</td>
</tr>
</thead>
</table>

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<br><br>
<strong>Page 60</strong>
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.4 Functions
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Procedural Programming in C++
</p>

<div style="page-break-after: always;"></div>

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
<tr>
<td style="background: #17365d">
   <h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
      Demo
   </h4>
</td>
<td>
<p>
   This example will demonstrate how to create a simple prompt function. This function will display a message to the user asking for information, receive the information using <code>cin</code>, and return the value through the function return mechanism.
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
   Write a program to prompt the user for their age. The user’s age will then be displayed. User input is <strong>bold</strong> and <u>underlined</u>.
</p>

<p>
   What is your age? <strong><u>19</u></strong>
</p>

<p>
   Your age is 19 years old.
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
      Solution
   </h4>
</td>
<td>
<p>
   The prompt function follows the “return a value” pattern from the previous example:
</p>

```cpp
/************************************************************
 * GET AGE
 * Prompt the user for their age. First display a message stating
 * what information we hope the user will provide. Next receive
 * the user input. Finally, return the results to the caller.
 ************************************************************/
int getAge() 
{ 
   int age;                         // we need a variable to store the user input 
   cout << "What is your age? ";    // state what you want the user to give you 
   cin  >> age;                     // receive the user input 
   return age;                      // this sends data back to main() 
}
```

<p>
   Next we will create <code>main()</code> to test our function.
</p>

```cpp
/*******************************************************************
 * MAIN
 * The whole purpose of main() is to test our getAge() function.
 ******************************************************************/
int main() 
{ 
   // get the user input 
   int age = getAge();              // store the data from getAge() in a variable 

   // display the results 
   cout << "Your age is "           // note the space after “is” 
        << age                      // the value from getAge() is stored here 
        << " years old.\n";         // again a space before “year”  
   return 0;                        // return “success” 
}
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
<p>
   As a challenge, try to add a new function to prompt for GPA. Note that this one will return a floating-point number instead of an integer. What changes will you have to add to <code>main()</code> to test this function?
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
      See Also
   </h4>
</td>
<td>
<p>
   The complete solution is available at <a href="https://content.byui.edu/file/66227afd-b800-4ba3-b6b3-18db4db6c440/1/1-4-promptFunction.html">1-4-promptFunction.cpp</a> or:
</p>

```
/home/cs124/examples/1-4-promptFunction.cpp
```
</td>
<td style="background: #17365d">
   <!-- Blank -->
</td>
</tr>
</thead>
</table>

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<!--<br><br>-->
<strong>Page 60</strong>
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.4 Functions
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Procedural Programming in C++
</p>

<div style="page-break-after: always;"></div>
