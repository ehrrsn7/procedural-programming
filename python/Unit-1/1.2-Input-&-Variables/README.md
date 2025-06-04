### [Unit 1: Simple Programs](../1.0-First-Program/README.md)

# 1.2 Input & Variables

Sue is excited because she just got a list of ancestor names from her grandmother. Finally, she can get some traction on her genealogy work! Unfortunately, the names are in the wrong order. Rather than being in the format of \[LastName, FirstName MiddleInitial], they are \[FirstName MiddleInitial LastName]. Instead of retyping the entire list, Sue writes a program to swap the names.

### Objectives

By the end of this class, you will be able to:

- Choose the best data-type to represent your data.
- Declare a variable.
- Accept user input from the keyboard and store it in a variable.

### Prerequisites

Before reading this section, please make sure you are able to:

- Type the code for a simple program (Chapter 0.2).
- Use the provided tools to complete a homework assignment (Chapter 1.0).
- Display text and numbers on the screen (Chapter 1.1).

## Overview

Variables in computer languages are much like variables in mathematics:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
***Variables are a named location where we store data.***

There are two parts to this definition. The first part is the name. We always refer to variables by a name which the programmer identifies. It is always worthwhile to make the name as unambiguous as possible so it won't get confused with other variables or used later in the program. The second part is the data. A wide variety of data-types can be stored in a variable.

## Variables

All the data in a computer is stored in memory. This memory consists of collections of 1’s and 0’s which are meant  to  represent  numbers,  letters,  and  text.  There  are  two  main  considerations  when  working  with variables: how to interpret the memory into something (like the number 3.8 or the text “Computer Science”), and what that something means (like your GPA or your major).

There is no intrinsic meaning for these 1’s and 0’s; they could mean or refer to just about anything. It is therefore the responsibility of the programmer to specify how to interpret these 1’s and 0’s. This is done through the data-type. A data-type can be thought of as a formula through which the program interprets the 1’s and 0’s in memory. An integer umber, for example, is interpreted quite differently than a real number or a letter. Every computer has a built-in set of data-types facilitating working with text, numbers, and logical data. C++ facilitates these built-in data-types with the following type names:

<p class="footer" style="
text-align: right;
font-size: .75em;">
<br><br>
Procedural Programming in Python
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.2 Input & Variables
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 35</strong>
</p>

<div style="page-break-after: always;"></div>

<table>
<thead style="border-top: 3px solid black; background: #4f81bd">
<tr>
<td style="border: 1px solid #ffffff50; color: white; text-align: center;"><h4 style="margin: 0">Data-type</h4></td>
<td style="border: 1px solid #ffffff50; color: white; text-align: center;"><h4 style="margin: 0">Use</h4></td>
<td style="border: 1px solid #ffffff50; color: white; text-align: center;"><h4 style="margin: 0">Size</h4></td>
<td style="border: 1px solid #ffffff50; color: white; text-align: center;"><h4 style="margin: 0">Range of Values</h4></td>
</tr>
</thead>
<tbody style="border-top: 3px solid black; border-bottom: 3px solid black">
<tr>
<td><code>bool</code></td>
<td>Logic</td>
<td>1</td>
<td><code>true</code>, <code>false</code></td>
</tr>
<tr>
<td><code>char</code></td>
<td>Letters and symbols</td>
<td>1</td>
<td style="white-space: nowrap"><code>-128</code> to <code>127</code> ... or <code>'a'</code>, <code>'b'</code>, etc.</td>
</tr>
<tr>
<td><code>short</code></td>
<td style="white-space: nowrap">Small numbers, Unicode characters</td>
<td>2</td>
<td>-32,767 to 32,767</td>
</tr>
<tr>
<td><code>int</code></td>
<td>Counting</td>
<td>4</td>
<td>-2 billion to 2 billion</td>
</tr>
<tr>
<td style="white-space: nowrap"><code>long (long int)</code></td>
<td>Larger Numbers</td>
<td>8</td>
<td>±9,223,372,036,854,775,808</td>
</tr>
<tr>
<td><code>float</code></td>
<td>Numbers with decimals</td>
<td>4</td>
<td>10⁻³⁸ to 10³⁸ accurate to 7 digits</td>
</tr>
<tr>
<td><code>double</code></td>
<td>Larger numbers with decimals</td>
<td>8</td>
<td>10⁻³⁰⁸ to 10³⁰⁸ accurate to 15 digits</td>
</tr>
<tr>
<td><code>long double</code></td>
<td>Huge Numbers</td>
<td>16</td>
<td style="white-space: nowrap">10⁻⁴⁹³² to 10⁴⁹³² accurate to 19 digits</td>
</tr>
</tbody>
</table>

Thus when you declare a variable to be an integer (int), the 1’s and 0’s in memory will be interpreted using the integer formula and only integer data can be stored in the variable.

<table>
<theader>
<tr style="background: #244061">
<td width="80%">
   <p style="color: white; font-weight: bold; margin-top: 10px; line-height: 0">Sam's Corner</p>
</td>
<td></td>
</tr>
</theader>
<tbody>
<tr>
<td>
   <p>
      Under the covers, all data in a computer is represented as a charge stored in a very small capacitor on a chip. We call these bits, 1 indicating “true” (corresponding to a charge in the capacitor) and 0 corresponding to “false” (corresponding to no charge). Bits are stored differently on CDs, flash memory, and hard drives.
   </p>
</td>
<td style="display: flex; padding: 0; height: 100%">
   <img src="../../.etc/assets/sam.png" width="200px" height="auto"">
</td>
</tr>
</tbody>
</table>

### Integers

Integers are possibly the most commonly used data-type. Integers are useful for counting or for numbers that cannot have a decimal. For example, the number of members in a family is always an integer; there can never be 2.4 people in a family. You can declare a variable as an integer with:

```py
age : int = 42
```

With this line of code, a new variable is created. The name is “`age`” which is how the variable will be referenced for  the  remainder  of  the  program.  Since  the  data-type  is  an  integer  (as  specified by  the  int  keyword), we know two things. First, the amount of memory used by the variable is 4 bytes (1 byte equals 8 bits so it takes a total of 32 bits to store one integer). Second, the value of the variable age must be between -2,147,483,648 and 2,147,483,647. Observe how the integer is initialized to the value of 42 in this example.

<table>
<theader>
<tr style="background: #244061">
<td width="80%">
   <p style="color: white; font-weight: bold; margin-top: 10px; line-height: 0">Sam's Corner</p>
</td>
<td></td>
</tr>
</theader>
<tbody>
<tr>
<td>
   <p>
      It is easiest to explain how integers are stored in memory by considering a special integer that  is only positive and has 8 bits (this is actually an unsigned char). In this case, the right-most bit correspond to the 1’s place, the next corresponds to the 2’s place, the next corresponds to the 4’s place, and so on. Thus the bits (00101010) is interpreted as:
   </p>
   <table>
      <tr>
         <td>2⁷</td>
         <td></td>
         <td>2⁶</td>
         <td></td>
         <td>2⁵</td>
         <td></td>
         <td>2⁴</td>
         <td></td>
         <td>2³</td>
         <td></td>
         <td>2²</td>
         <td></td>
         <td>2¹</td>
         <td></td>
         <td>2⁰</td>
      </tr>
      <tr>
         <td>0</td>
         <td></td>
         <td>0</td>
         <td></td>
         <td>1</td>
         <td></td>
         <td>0</td>
         <td></td>
         <td>1</td>
         <td></td>
         <td>0</td>
         <td></td>
         <td>1</td>
         <td></td>
         <td>0</td>
      </tr>
      <tr>
         <td>0</td>
         <td>+</td>
         <td>0</td>
         <td>+</td>
         <td>32</td>
         <td>+</td>
         <td>0</td>
         <td>+</td>
         <td>8</td>
         <td>+</td>
         <td>0</td>
         <td>+</td>
         <td>2</td>
         <td>+</td>
         <td>0</td>
         <td>=</td>
         <td>42</td>
      </tr>
   </table>
   <p>
      Each place corresponds to a power of two in binary; add the value only if there's a 1 in that place. Integers are typically 32 bits (4 bytes), with the left-most bit indicating the sign.
   </p>
<td style="display: flex; padding: 0; height: 100%">
   <img src="../../.etc/assets/sam.png" width="200px" height="auto"">
</td>
</tr>
</tbody>
</table>

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<br><br>
Procedural Programming in Python
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.2 Input & Variables
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 36</strong>
</p>

<div style="page-break-after: always;"></div>

### Floating Point Numbers

In mathematics, real numbers are numbers that can have a decimal. It is often convenient to represent very large or very small real numbers in scientific notation:

```
1888 = 1.888 × 10³
```

Observe how the decimal point position is specified by the exponent (10³ in this case). In many ways, the decimal point can be said to “float” or move according to the exponent, the origin of the term “floating point numbers” in computer science. Floating point numbers are characterized by two parts: the precision part of the equation (1.888 in the above example) and the exponent (10³). There are three floating point types available in the C++ language.

<table style="margin: 0 auto">
<thead style="border-top: 3px solid black; background: #4f81bd">
<tr>
<td style="border: 1px solid #ffffff50; color: white; text-align: center;"><h4 style="margin: 0">Type name</h4></td>
<td style="border: 1px solid #ffffff50; color: white; text-align: center;"><h4 style="margin: 0">Memory used</h4></td>
<td style="border: 1px solid #ffffff50; color: white; text-align: center;"><h4 style="margin: 0">Exponent</h4></td>
<td style="border: 1px solid #ffffff50; color: white; text-align: center;"><h4 style="margin: 0">Precision</h4></td>
</tr>
</thead>
<tbody style="border-top: 3px solid black; border-bottom: 3px solid black">
<tr>
<td style="background: #4f81bd;"><code style="color: white">float</code></td>
<td>4</td>
<td>10⁻³⁸ to 10³⁸</td>
<td>7 digits</td>
</tr>
<tr>
<td style="background: #4f81bd;"><code style="color: white">double</code></td>
<td>8</td>
<td>10⁻³⁰⁸ to 10³⁰⁸</td>
<td>15 digits</td>
</tr>
<tr>
<td style="background: #4f81bd;"><code style="color: white">long double</code></td>
<td>16</td>
<td>10⁻⁴⁹³² to 10⁴⁹³²</td>
<td>19 digits</td>
</tr>
</tbody>
</table>

Observe how the more data is used (measured in bytes), the more accurately the number can be represented. However,  all  floating  point  numbers  are  approximations.  Examples  of  declaring  floating  point  numbers include:

```py
# in python, all decimals are encapsulated under the float type
pi : float = 3.14159265358979323
```

<table>
<theader>
<tr style="background: #632423">
<td width="80%">
   <p style="color: white; font-weight: bold; margin-top: 10px; line-height: 0">Sue's Tips</p>
</td>
<td></td>
</tr>
</theader>
<tbody>
<tr>
<td>
   <p>
      While it is wasteful to use a larger data-type than is strictly necessary (who would ever want their GPA to be represented to 19 digits?), it is much worse to not have sufficient room to store a number. In other words, it is a good idea to leave a little room for growth when declaring a floating point number.
   </p>
</td>
<td style="display: flex; padding: 0; height: 100%">
   <img src="../../.etc/assets/sue.png" width="200px" height="auto">
</td>
</tr>
</tbody>
</table>

### Characters

Another common data-type is a character, corresponding to a single letter, number, or symbol. We declare a character variable with:

```py
# in python, we use the str type instead of char
grade : str = 'A'
```

When making an assignment with `char`s, a single quote (`'`) is used on each side of the character.

Note: In python, both the `''` and `""` initialize the str type.

This is different from the double quotes (`"`) used when denoting text. Each character in the `char` range has a number associated with it. This mapping of numbers to characters is called the ASCII table:

<table>
<thead style="border-top: 3px solid black; background: #d8d8d8">
<tr>
<td style="border: 1px solid #ffffff50; background: #4f81bd; color: white; font-weight: bold;">Number</td>
<td style="border-left: 1px solid #c0c0c0;">46</td>
<td style="border-left: 1px solid #c0c0c0;">47</td>
<td style="border-left: 1px solid #c0c0c0;">48</td>
<td style="border-left: 1px solid #c0c0c0;">49</td>
<td style="border-left: 1px solid #c0c0c0;">50</td>
<td style="border-left: 1px solid #c0c0c0;">...</td>
<td style="border-left: 1px solid #c0c0c0;">65</td>
<td style="border-left: 1px solid #c0c0c0;">66</td>
<td style="border-left: 1px solid #c0c0c0;">67</td>
<td style="border-left: 1px solid #c0c0c0;">68</td>
<td style="border-left: 1px solid #c0c0c0;">...</td>
<td style="border-left: 1px solid #c0c0c0;">97</td>
<td style="border-left: 1px solid #c0c0c0;">98</td>
<td style="border-left: 1px solid #c0c0c0;">99</td>
<td style="border-left: 1px solid #c0c0c0;">100</td>
</tr>
</thead>
<tbody style="border-top: 3px solid black; border-bottom: 3px solid black">
<tr>
<td style="border: 1px solid #ffffff50; background: #4f81bd; color: white; font-weight: bold;">Letter</td>
<td style="border-left: 1px solid #d9d9d9">.</td>
<td style="border-left: 1px solid #d9d9d9">/</td>
<td style="border-left: 1px solid #d9d9d9">0</td>
<td style="border-left: 1px solid #d9d9d9">1</td>
<td style="border-left: 1px solid #d9d9d9">2</td>
<td style="border-left: 1px solid #d9d9d9">...</td>
<td style="border-left: 1px solid #d9d9d9">A</td>
<td style="border-left: 1px solid #d9d9d9">B</td>
<td style="border-left: 1px solid #d9d9d9">C</td>
<td style="border-left: 1px solid #d9d9d9">D</td>
<td style="border-left: 1px solid #d9d9d9">...</td>
<td style="border-left: 1px solid #d9d9d9">a</td>
<td style="border-left: 1px solid #d9d9d9">b</td>
<td style="border-left: 1px solid #d9d9d9">c</td>
<td style="border-left: 1px solid #d9d9d9">d</td>
</tr>
</tbody>
</table>

The complete ASCII table can be viewed on various websites, such as:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
[http://en.cppreference.com/w/cpp/language/ascii](http://en.cppreference.com/w/cpp/language/ascii)

<p class="footer" style="
   text-align: right;
   font-size: .75em;">
<br><br>
Procedural Programming in Python
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.2 Input & Variables
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 37</strong>
</p>

<div style="page-break-after: always;"></div>

<table>
<theader>
<tr style="background: #244061">
<td width="80%">
   <p style="color: white; font-weight: bold; margin-top: 10px; line-height: 0">Sam's Corner</p>
</td>
<td></td>
</tr>
</theader>
<tbody>
<tr>
<td>
   <p>
      The char data-type is actually a form of integer where the size is 1 byte (or 8 bits). This means there are only 256 possible values, not four billion. Each number in the char range corresponds to a glyph (letter, number, or symbol) in the ASCII table. Thus you can treat a char like a letter or you can do math with it like any other integer. For example, <code>'A' + 1</code> is the same as <code>'B'</code>, which is 66.
   </p>
</td>
<td style="display: flex; padding: 0; height: 100%">
   <img src="../../.etc/assets/sam.png" width="200px" height="auto"">
</td>
</tr>
</tbody>
</table>

### Text

Text consists of a collection or string of characters. While all the data-types listed below can readily fit into a small slot in memory, text can be exceedingly long. For example, the amount of memory necessary to store your name is much less than that required to store a complete book.

<table>
<theader>
<tr style="background: #632423">
<td width="80%">
   <p style="color: white; font-weight: bold; margin-top: 10px; line-height: 0">Sue's Tips</p>
</td>
<td></td>
</tr>
</theader>
<tbody>
<tr>
<td>
   <p>
      The standard size to make strings is 256 characters in length. This is plenty long enough for most applications. It is usually more convenient (and bug-free) to have the same string length for an entire project than to have many different string buffer sizes (which would require us to keep track of them all!).
   </p>
</td>
<td style="display: flex; padding: 0; height: 100%">
   <img src="../../.etc/assets/sue.png" width="200px" height="auto">
</td>
</tr>
</tbody>
</table>

### Logical Data

The final built-in data-type  is a  `bool`.  This enables us to  capture data having only two possible  values.  For example, a person is either pregnant or not, either alive or not, either male or not, or either a member of the church or not. For these data-types, we use a `bool`:

```py
isMale : bool = False
```

Note: In python, boolean values are written in PascalCase, and will throw an error if you don't (using `true` or `false` will cause python to try and interpret these as a variable, resulting in the interpreter throwing an undefined value error).

There are only two possible values for a `bool`: `True` or `False`. By convention, we name `bool` variables in such a way that we know what `True` means. In other words, it would be much less helpful to have a variable called `gender`. What does `False` mean (that one has no gender like a rock)?

<table>
<theader>
<tr style="background: #244061">
<td width="80%">
   <p style="color: white; font-weight: bold; margin-top: 10px; line-height: 0">Sam's Corner</p>
</td>
<td></td>
</tr>
</theader>
<tbody>
<tr>
<td>
   <p>
      A <code>bool</code> takes a single byte of memory, consisting of 8 bits. Note that we really only need a  single bit to capture Boolean (<code>True</code>/<code>False</code>) data. Why do we need 8 then?  This has to do with  how convenient it is for the computer to work with bytes and how awkward it is to work with bits. When evaluating a <code>bool</code>, any 1’s in any of the bits will result in a <code>True</code> evaluation. Only when all 8 bits are 0 will the <code>bool</code> evaluate to <code>False</code>. This means that there are 255 <code>True</code> values (2⁸ – 1) and 1 <code>False</code> value.
   </p>
</td>
<td style="display: flex; padding: 0; height: 100%">
   <img src="../../.etc/assets/sam.png" width="200px" height="auto"">
</td>
</tr>
</tbody>
</table>

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<br><br>
Procedural Programming in Python
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.2 Input & Variables
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 38</strong>
</p>

<div style="page-break-after: always;"></div>

## Input

Now that we know how to store data in a computer program using variables, it is possible to prompt the user for input. Note that without variables we would not have a place to store the user input so asking the user questions would be futile. The main mechanism with which we prompt users for input is the `input()` function. This function, like `print()`, is part of the `iostream` library. The code for prompting the user for his age is:

```py
age : int = int()
age = input()
```

In this example, we first declare a variable that can hold an integer. There are a couple important points here:

* Use `input()` rather than `print()`.
* There is always a variable on the left side of the assignment operator.

We can use `input()` with all built in data-types:

```py
# INTEGERS
age : int = int()       # integers can only hold digits.
age = input()           # if a non-digit is entered, then age remains uninitialized.

# FLOATS
price : float = float() # able to handle zero or many digits
price = input()

# TEXT
name : str = str()      # any text up to 255 characters in length
name = input()          # all user input up to the first white-space is accepted
```

<p class="footer" style="
   text-align: right;
   font-size: .75em;">
<br><br>
Procedural Programming in Python
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.2 Input & Variables
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 39</strong>
</p>

<div style="page-break-after: always;"></div>

### Multiple Extraction Operators
Often it is convenient to input data into more than one variable on a single input statement. This can be done by “stacking” the extraction operators much like we stacked the insertion operators:

```py
name : str = str()
age : int = int()
age = name = input()
```

In this example, the first thing the user inputs will be put into the `name` variable and the second into `age`.

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<br><br>
Procedural Programming in Python
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.2 Input & Variables
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 40</strong>
</p>

<div style="page-break-after: always;"></div>

<table style="width: 100%; min-width: 715px; border: 1px solid #00000010">
<thead>
<tr>
   <td>
      <!-- Blank -->
   </td>
   <td style="text-align: center; background: #17365d; height: 12px;">
      <h4 style="color: white; padding: 0; margin: 0;">Example 1.2 - Many Prompts</h4>
   </td>
   <td>
   <!-- Blank -->
   </td>
</tr>
<tr>
   <td style="background: #17365d">
      <h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 20px; left: 7px">
         Demo
      </h4>
   </td>
   <td>
      <p>
         This example will demonstrate how to declare text, integer, floating point, and character variables. It will also demonstrate how to accept data from the user with each of these data types.
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
   Write a program to prompt the user for his first name, age, GPA, and the expected grade in CS 124.
</p>

```
The information will then be displayed on the screen.
What is your first name:  Sam
What is your age: 19
What is your GPA: 3.91
What grade do you hope to get in CS 124: A
         Sam, you are 19 with a 3.9 GPA. You will get an A.
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
      Solution
   </h4>
</td>
<td>
<p>
   The four variables are declared as follows:
</p>

```py
name : str
age : int
gpa : float
letterGrade : str
```

<p>
   To prompt the user for his age, it is necessary to display a prompt first so the user knows what to do. Usually we precede the prompt and the input with a comment and blank line:
</p>

```py
# Prompt the user for his age
age = input("What is your age: ")
```

```py
# display the results
print(
   "\t", name,
   ", you are ", age,
   " with a ", {gpa:1f},
   " GPA. You will get an ", letterGrade,
   ".\n",
   sep=""
)
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
      The complete solution is available at <a href="https://content.byui.edu/file/66227afd-b800-4ba3-b6b3-18db4db6c440/1/1-2-manyPrompts.html">1-2-manyPrompts.cpp</a>
   </p>
   <a href="https://video.byui.edu/media/1.0+-+First+Program/0_9dc3rb33/18442462">
      <img src="image.png">
   </a>
   </td>
   <td style="background: #17365d">
      <!-- Blank -->
   </td>
</tr>
</thead>
</table>

<p class="footer" style="
   text-align: right;
   font-size: .75em;">
<br><br>
Procedural Programming in Python
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.2 Input & Variables
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 41</strong>
</p>

<div style="page-break-after: always;"></div>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 1
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
<p>
What is the output of the following line of code?
</p>

``` cpp
print("\\\"/\n")
```
<p>
Answer:
</p>

```

```
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 29 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 2
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
<p>
How do you put a tab on the screen?
</p>
<p>
Answer:
</p>

```

```
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 27 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 3
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
<p>
How do you output the following:
</p>

```c
You will need to use '\n' a ton in this class.
```
<p>
Answer:
</p>

```

```
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 29 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 4
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
<p>
How do you declare an integer variable?
</p>
<p>
Answer:
</p>

```

```
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 26 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 5
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6;">
<!--Empty Row-->
<p>
How do you declare a variable for each of the following?
</p>
<table>
<thead style="background: #466ba6; color: white; font-weight: bold">
<tr>
   <td style="border: 2px solid #ced3d6"><p>Variable name</p></td>
   <td style="border: 2px solid #ced3d6; min-width: 485px"><p>Declaration</p></td>
</tr>
</thead>
<tbody>
<tr>
   <td><code>yearBorn</code></td>
   <td><!--Blank row--></td>
</tr>
<tr>
   <td><code>gpa</code></td>
   <td><!--Blank row--></td>
</tr>
<tr>
   <td><code>nameStudent</code></td>
   <td><!--Blank row--></td>
</tr>
<tr>
   <td><code>ageStudent</code></td>
   <td><!--Blank row--></td>
</tr>
</tbody>
</table>
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 26 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<br><br>
Procedural Programming in Python
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.2 Input & Variables
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 42</strong>
</p>

<div style="page-break-after: always;"></div>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 6
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
<p>
Declare a variable to store the ratio of feet to meters
</p>
<p>
Answer:
</p>

```

```
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 27 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 7
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
<p>
What is the number of bytes for each data type?
</p>

```py
import sys.getsizeof as sizeof
import ctypes

print(sizeof(ctypes.c_char))  # Size in bytes of a one-character string
print(sizeof(ctypes.c_int))
print(sizeof(ctypes.c_float))
print(sizeof(ctypes.c_double))
print(sizeof(ctypes.c_longdouble))
print(sizeof(ctypes.c_bool))
```

<p>
Answer:
</p>

```

```
Note: Output sizes are platform- and architecture-dependent (e.g., 64-bit vs 32-bit).
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 26 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 8
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
<p>
Which of the following can store the largest number?
</p>

```py
value : bool
value : str
value : int
```

<p>
Answer:
</p>

```

```
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 27 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 9
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
<p>
Declare a str variable with number formatting in python:  8,820,198,883,463.39
</p>

```py
# hint: format strings support adding commas
value = f"{value:,}"
# hint: format rules can be compounded in format strings (no spaces allowed)
value = f"{value:<.2f}" # left aligned, 2 decimal places
```

<p>
Answer:
</p>

```

```
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 27 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<p class="footer" style="
   text-align: right;
   font-size: .75em;">
<br><br>
Procedural Programming in Python
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.2 Input & Variables
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 43</strong>
</p>

<div style="page-break-after: always;"></div>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
   background: #244061;
   border: 3px solid #a6a6a6"><p style="color: white;
   font-weight: bold;
   margin-top: 10px;
   line-height: 0">
Problem 10
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
<p>
Write the code to prompt a person for his first name.
</p>
<p>
Answer:
</p>

```

```
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 29 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
   background: #244061;
   border: 3px solid #a6a6a6"><p style="color: white;
   font-weight: bold;
   margin-top: 10px;
   line-height: 0">
Problem 11
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
<p>
Write the code to prompt a person for their two favorite numbers.
</p>
<p>
Answer:
</p>

```

```
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 29 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
   background: #244061;
   border: 3px solid #a6a6a6"><p style="color: white;
   font-weight: bold;
   margin-top: 10px;
   line-height: 0">
Problem 12
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
<p>
Write the code to prompt a person for his full name.
</p>
<p>
Answer:
</p>

```

```
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 40 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<br><br>
Procedural Programming in Python
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.2 Input & Variables
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 44</strong>
</p>

<div style="page-break-after: always;"></div>

<table style="width: 100%; min-width: 715px; border: 1px solid #00000010">
<thead>
<tr>
   <td>
      <!-- Blank -->
   </td>
   <td style="text-align: center; background: #17365d; height: 12px;">
      <h4 style="color: white; padding: 0; margin: 0;">Assignment 1.2</h4>
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
      Write a program that prompts the user for his or her income and displays the result on the screen. There will be two parts:
   </p>
   <h4>
      Get Income
   </h4>
   <p>
      The first part is code that prompts the user for his income. It will ask the user:
   </p>

   ```
           Your monthly income:
   ```

   <p>
      There will be a tab before “<code>Your</code>” and a single space after the “<code>:</code>”. There is no newline at the end of this prompt. The user will then provide his or her income as a float.
   </p>
   <h4>Display</h4>
   <p>
      The second part is code to display the results to the screen.
   </p>

   ```
   Your income is: $  1010.99
   ```

   <p>
      Note that there is one space between the colon and the dollar sign. The money is right aligned to 9 spaces from the dollar sign.
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
         Example
      </h4>
   </td>
   <td>
   <p>
      User input is <ins style="font-weight: bold">underlined</ins>. Note that you will not be making the input underlined; this is just the notation used in the assignments to distinguish input from output.
   </p>

   <pre><code>        Your monthly income:<ins style="font-weight: bold"> 932.16</ins>
   Your income is: $   932.16</code></pre>
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

   <p>Don’t forget to submit your assignment with the name “Assignment 12” in the header.</p>

   <div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 41 for a hint.</em></div>
   </td>
   <td style="background: #17365d">
      <!-- Blank -->
   </td>
</tr>
</thead>
</table>


<p class="footer" style="
   text-align: right;
   font-size: .75em;">
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
Procedural Programming in Python
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.2 Input & Variables
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 45</strong>
</p>