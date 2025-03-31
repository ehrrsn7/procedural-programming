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
Procedural Programming in C++ 
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

```cpp
int age = 42; 
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
Procedural Programming in C++ 
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

```cpp
float gpa = 3.9;
double income = 103295.05;
long double pi = 3.14159265358979323;
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

```cpp
char grade = 'A';
```

When making an assignment with `char`s, a single quote (`'`) is used on each side of the character. This is different from the double quotes (`"`) used when denoting text. Each character in the `char` range has a number associated with it. This mapping of numbers to characters is called the ASCII table:

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
Procedural Programming in C++ 
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
