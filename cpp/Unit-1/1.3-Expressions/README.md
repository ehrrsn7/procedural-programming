<a href="../1.0-First-Program/README.md"><h3>Unit 1: Simple Programs</h3></a>

# 1.3 Expressions

Sam once spent a summer working as a cashier in a popular fast-food outlet. One of his responsibilities was to make change for customers when they paid with cash. While he enjoyed the mental exercise of doing the math in his head, he immediately started wondering how this could best be done with the computer. After a few iterations, he came up with a program to make light work of his most tedious task...

#### Objectives

By the end of this class, you will be able to:
- Represent simple equations in C++.
- Understand the differences between integer division and floating point division.
- See how to use the modulus operator to solve math and logic problems.

#### Prerequisites

Before reading this chapter, please make sure you are able to:
- Choose the best data-type to represent your data (Chapter 1.2).
- Declare a variable (Chapter 1.2).
- Display text and numbers on the screen (Chapter 1.1).

## Overview

Computer programs perform mathematical operations much the way one would expect. There are a few differences, however, owing to the way computers store numbers. For example, there is no distinction between integers and floating point numbers in Algebra. This means that dividing one by two will yield a half. However, in C++, integers can't store the number 0.5 or 1/2. Also, a variable can update its value in C++ where in Algebra it remains constant through the entire equation. These challenges along with a few others makes performing math with C++ a little tricky.

In C++, mathematical equations are called expressions. An expression is a collection of values and operations that, when evaluated, result in a single value.

## Evaluating Expressions

As you may recall from our earlier discussion of how computers work, a CPU can only perform elementary mathematical operations and these can only be done one at a time. This means that the compiler must break complex equations into simple ones for them to be evaluated correctly by the CPU. To perform this task, things are done in the following order:
1. Variables are replaced with the values they contain.
2. The order of operations is honored: parentheses first and assignment last.
3. When there is an integer being compared/computed with a float, it is converted to a float just before evaluation.

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<br><br>
<br><br>
<br><br>
<strong>Page 46</strong>
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

### Step 1 - Variables are replaced with values

Every variable refers to a location of memory. This memory location is guaranteed to be filled with 1's and 0's. In other words, there is always a value in a variable and that value can always be accessed at any time. Sometimes the value is meaningless. Consider the following example:

```cpp
{
   int number;
   cout << number << endl;             // the output is different every time because
                                       //    the variable number was never initialized
}
```

Since the variable was never initialized, the value is not predictable. In other words, whoever last used that particular location in memory left data lying around. This means that there is some random collection of 1’s and 0’s in that location. We call this state uninitialized because the programmer never got around to assigning a value to the variable `number`. All this could be rectified with a simple:

```cpp
int number = 0;
```

The first step in the expression evaluation process is to substitute the variables in the expression with the values contained therein. Consider the following code:

```cpp
{
    int ageHumanYears = 4;
    int ageDogYears = ageHumanYears * 7;
}
```

In this example, the first step of evaluating the last statement is to substitute `ageHumanYears` with `4`.

```cpp
int ageDogYears = 4 * 7;
```

### Step 2 - Order of Operations

The order of operations for mathematical operators in C++ is:

<table>
   <thead>
      <tr style="background-color:#466ba6; color:white;">
         <th>Operator</th>
         <th>Description</th>
      </tr>
   </thead>
   <tbody>
      <tr>
         <td><code>()</code></td>
         <td>Parentheses</td>
      </tr>
      <tr>
         <td><code>++</code> <code>--</code></td>
         <td>Increment, Decrement</td>
      </tr>
      <tr>
         <td><code>*</code> <code>/</code> <code>%</code></td>
         <td>Multiply, Divide, Modulo</td>
      </tr>
      <tr>
         <td><code>+</code> <code>-</code></td>
         <td>Addition, Subtraction</td>
      </tr>
      <tr>
         <td><code>=</code> <code>+=</code> <code>-=</code> <code>*=</code> <code>/=</code> <code>%=</code></td>
         <td>Assign, Add-on, Subtract-from, Multiply onto, Divide from, Modulo from.</td>
      </tr>
      <tr>
      </tr>
   </tbody>
</table>

This should be very familiar; it is similar to the order of operations for Algebra. There are, of course, a few differences:

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
<strong>Page 47</strong>
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

#### Increment ++

Because it is possible to change the value of a variable in C++, we have an operator designed specifically for the task. Consider the following code:

```cpp
{
   int age = 10;
   age++;
   cout << age << endl;       // the output is 11
}
```

In this example, the `age++` statement serves to add one to the current value of `age`. Of course, `age--` works in the opposite way. There are two flavors of the increment (and decrement) operators: increment before the expression is evaluated and increment after. To illustrate, consider the following example:

```cpp
{
   int age = 10;
   cout << age++ << endl;     // the output is 10 and the new value of age is 11
}
```

In this example, we increment the value of `age` after the expression is evaluated (as indicated by the `age++` rather than `++age` where we would evaluate before). Therefore, the output would be 10 although the value of `age` would be 11 at the end of execution. This would not be true with:

```cpp
{
   int age = 10;
   cout << ++age << endl;     // the output is 11 and the new value of age is 11
}
```

In this case, `age` is incremented before the expression is evaluated and the output would be 11. In short:

<table>
   <tbody>
      <tr style="border: 0px solid transparent">
         <td style="border: 3px solid #b2b2b2">
            <p style="
               width: 100%;
               text-align: center;
               margin: 0;
               padding: 0;
               font-size: 24px;
               font-weight: bold;
               font-family: monospace;
               text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.25);"
            >
               x++
            </p>
         </td>
         <td><!--Blank Cell--></td>
         <td style="border: 3px solid #b2b2b2">
            <p style="
               width: 100%;
               text-align: center;
               margin: 0;
               padding: 0;
               font-size: 24px;
               font-weight: bold;
               font-family: monospace;
               text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.25);"
            >
               ++x
            </p>
         </td>
      </tr>
      <tr style="border: none">
         <td style="background: #b2b2b2; border: 3px solid #b2b2b2">
            <table>
               <tr>
                  <td style="background: white; border: 3px solid black; max-width: 250px" colspan=3>
                     When the <code>++</code> is <u>before</u> the variable, the increment occurs <u>before</u> the expression is evaluated.
                  </td>
               </tr>
               <tr>
                  <td colspan=3><!--Blank Cell--></td>
               </tr>
               <tr>
                  <td style="background: white; border: 3px solid black; max-width: 250px">
                     <pre style="padding: .5em 1em; margin: 0;"><code>y = ++x;</code></pre>
                  </td>
                  <td>
                     <img src=".etc\assets\Screenshot_2025-04-05_194242-removebg-preview.png" width=40>
                  </td>
                  <td style="background: white; border: 3px solid black; max-width: 250px">
                     <pre style="padding: .5em 1em; margin: 0;"><code>y = x;<br>x += 1;</code></pre>
                  </td>
               </tr>
            </table>
         </td>
         <td><!--Blank Cell--></td>
         <td style="background: #b2b2b2; border: 3px solid #b2b2b2">
            <table>
               <tr>
                  <td style="background: white; border: 3px solid black; max-width: 250px" colspan=3>
                     When the <code>++</code> is <u>after</u> the variable, the increment occurs <u>after</u> the expression is evaluated.
                  </td>
               </tr>
               <tr>
                  <td colspan=3><!--Blank Cell--></td>
               </tr>
               <tr>
                  <td style="background: white; border: 3px solid black; max-width: 250px">
                     <pre style="padding: .5em 1em; margin: 0;"><code>y = ++x;</code></pre>
                  </td>
                  <td>
                     <img src=".etc\assets\Screenshot_2025-04-05_194242-removebg-preview.png" width=40>
                  </td>
                  <td style="background: white; border: 3px solid black; max-width: 250px">
                     <pre style="padding: .5em 1em; margin: 0;"><code>x += 1;<br>y = x;</code></pre>
                  </td>
               </tr>
            </table>
         </td>
      </tr>
   </tbody>
</table>

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<strong>Page 48</strong>
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

### Multiplication \*

In C++ (and most other computer languages for that matter), the multiplication operator is an asterisk `*`. You cannot use the dot operator (ex: •), the multiplication x (ex: ×), or put a number next to a variable (ex: 7y) as you can in standard algebra notation.

```cpp
{
   float answer1 = 1.2 * 2.3;    // the value of answer1 is 2.76
   int   answer2 = 2 * 3;        // the value of answer2 is 6
}
```

### Division /

Floating point division `/` behaves the way it does in mathematics. Integer division, on the other hand, does not. The evaluation of integer division is always an integer. In each case, the remainder is thrown away. To illustrate this, consider the following:

```cpp
{
   int answer1 = 19 / 10;
   float answer2 = 19.0 / 10.0;
   cout << answer1 << endl       // the output is 1
        << answer2 << endl;      // the output is 1.9
}
```

In this case, the output of the first line is <u>not</u> 1.9 because the variable `answer1` cannot store a floating point value. When 19 is divided by 10, the result is 1 with a remainder of 9. Therefore, `answer1` will get the value 1 and the remainder is discarded. To get 1.9, we need to use floating point division.

### Modulus %

Recall that integer division drops the remainder of the division problem. What if you want to know the remainder? This is the purpose of the modulus operator `%`. Consider the following code:

```cpp
{
   int remainder = 19 % 10;
   cout << remainder;         // the output is 9
}
```

In this case, when you divide 19 by 10, the remainder is 9. Therefore, the value of `remainder` will be 9 in this case. For example, consider the following problem:

```cpp
{
   int totalMinutes = 161;             // The movie "Out of Africa" is 161 minutes
   int numHours   = totalMinutes / 60; // The movie is 2 hours long...
   int numMinutes = totalMinutes % 60; // ... plus 41 minutes
}
```

<table style="padding: 0; margin: 0">
   <tbody>
      <tr>
         <td width=300><!--Blank Cell--></td>
         <td><pre style="padding: .5em"><code>2 == 161 / 60</code></pre></td>
         <td width=0 style="padding: 0"><!--Blank Cell--></td>
         <td><pre style="padding: .5em"><code>41 == 161 % 60</code></pre></td>
      </tr>
   </tbody>
</table>

<table style="padding: 0; margin: 0">
   <tbody>
      <tr>
         <td style="padding: 0;" width=200><!--Blank Cell--></td>
         <td style="padding: 0;"><pre style="padding: .5em"><code>161 modulus 60</code></pre></td>
         <td style="padding: 0;" width=20 style="padding: 0"><!--Blank Cell--></td>
         <td style="padding: 0;"><pre style="padding: .5em"><code>2</code></pre></td>
         <td style="padding: 0;" width=20 style="padding: 0"><!--Blank Cell--></td>
         <td style="padding: 0;"><p style="padding: 0; font-family: Consolas">r.</p></td>
         <td style="padding: 0;" width=20 style="padding: 0"><!--Blank Cell--></td>
         <td style="padding: 0;"><pre style="padding: .5em; margin-left: 0"><code>41</code></pre></td>
      </tr>
   </tbody>
</table>

<table style="padding: 0; margin: 0">
   <tbody>
      <tr>
         <td width=320><!--Blank Cell--></td>
         <td><pre style="padding: .5em; margin: 0"><code>60</code></pre></td>
         <td width=20 style="padding: 0; "><!--Blank Cell--></td>
         <td style="border-left: 5px solid black; border-top: 5px solid black"><pre style="padding: .5em; margin: 0"><code>161</code></pre></td> 
      </tr>
      <tr>
         <td width=320><!--Blank Cell--></td>
         <td><!--Blank Cell--></td>
         <td width=20 style="padding: 0; "><!--Blank Cell--></td>
         <td style="border-bottom: 3px solid #a6a6a6"><pre style="padding: .5em; margin: 0"><code>120</code></pre></td> 
      </tr>
      <tr>
         <td width=320><!--Blank Cell--></td>
         <td><!--Blank Cell--></td>
         <td width=20 style="padding: 0; "><!--Blank Cell--></td>
         <td><pre style="padding: .5em; margin: 0"><code> 41</code></pre></td> 
      </tr>
   </tbody>
</table>

<p class="footer" style="
   text-align: right;
   font-size: .75em;">
<br><br>
<br><br>
<br><br>
<strong>Page 49</strong>
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

### Assignment = 
In mathematics, the equals symbol = is a statement of equality. You are stating that the right-side and the left-side are the same or balanced. In C++, the equals symbol is a statement of assignment. You are specifying that the evaluation of the right-side is to be assigned to the variable on the left-side. Consider the following code: 

```cpp
{    
   int x = 2;    
   x = x + 1;     // the value of x is updated from 2 to 3. We can  
}                 //    change the value of variables in C++ 
```

The second statement would not be possible in mathematics; there is no value for x where x=x+1 is true. However, in C++, this is quite straightforward: the right-side evaluates to 3 and the variable on the left is assigned to that value. It turns out that adding a value to a variable is quite common. So common, in fact, that a shorthand is offered: 

```cpp
{    
   int x = 2;
   x += 1;       // the new value of x is 3 
} 
```

The `+=` operator says, in effect, add the right-side to the variable on the left-side. The end result is the `x` being updated to the value of 3. The most common variants are:  

<table>
   <thead style="color: white; background: #466ba6">
      <th style="text-align: center">Operator</th>
      <th style="text-align: center">Description</th>
      <th style="text-align: center">Use</th>
   </thead>
   <tbody>
      <tr>
         <td><code>+=</code></td>
         <td>Add and assign</td>
         <td>Add onto </td>
      </tr>
      <tr>
         <td><code>-=</code></td>
         <td>Subtract and assign</td>
         <td>Subtract from </td>
      </tr>
      <tr>
         <td><code>*=</code></td>
         <td>Multiply and assign</td>
         <td>Multiply by </td>
      </tr>
      <tr>
         <td><code>/=</code></td>
         <td>Divide and assign</td>
         <td>Subdivide</td>
      </tr>
   </tbody>
</table>

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<strong>Page 50</strong>
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

## Step 3 - Converting

The final step in evaluating an expression is to convert data from one type to another. This arises from the fact that you can’t add an integer to a floating point number. You can add two `ints` or two `floats`, but not an `int` to a `float`. Consider the following code: 

```cpp
cout << 4 + 3.2 << endl; 
```

In this example, there are two possibilities: either convert the integer `4` into the float `4.0` or convert the float `3.2` into the integer `3`. C++ will always convert `ints` to `floats` and `bools` to `ints` in these circumstances. It is important  to  note,  however,  that  this  conversion  will  only  happen  immediately  before  the  operator  is evaluated.  

### Casting 

Rather than  allowing  the compiler to  convert integers or  values from one data type  to another, it is often useful to perform that conversion yourself explicitly. This can be done with casting. Casting is the process of specifying that a given value is to be treated like another data-type just for the purpose of evaluating a single expression. Consider the following code: 

```cpp
{    
   int value = 4;    
   cout << "float:   " << (float)value << endl;   // the output is “float:   4.0”    
   cout << "integer: " << value        << endl;   // the output is “integer: 4” 
} 
```

In this case, the output of the first `cout` statement will be <b>4.0</b> because the integer value <b>4</b> will be converted to a  floating  point  value  <b>4.0</b>  in  this  expression.  The  value  in  the  variable  itself  will not  be  changed;  only  the evaluation of that variable in that particular expression. The second `cout` statement will display <b>4</b> in this case. 

There  are  a  few  quirks  to  casting.  First,  the  variable  you  are  casting does  not  change.  Once  you  declare  a variable as a given data-type, it remains that data-type for the remainder of the program. Casting just changes how that variable behaves for one expression. Second, not all data-types covert in the most obvious way. Consider converting `ints` and `bools`: 

```cpp
{    
   bool a = (bool)7;         // true    any number but 0 turns into true    
   bool b = (bool)0;         // false   only zero turns to false    
   int  c = (int)true;       // 1       true always becomes 1    
   int  d = (int)false;      // 0       false always becomes 0  
}   
```

<table>
<theader>
<tr style="background: #244061">
<td width="85%">
   <p style="color: white; font-weight: bold; margin-top: 10px; line-height: 0">Sam's Corner</p>
</td>
<td></td>
</tr>
</theader>
<tbody>
<tr>
<td>
<p>
   There are actually two notations for casting in C++. The older notation, presented above, was inherited from the C programming language and is somewhat deprecated. It still works, but purists will  prefer  the  new  notation.  The  new  notation  for  casting  has  two  main  variants:  static  cast corresponding to casting that happens at compile time, and dynamic cast which happens at runtime. All the casting we do with procedural C++ can be static. We won’t need to use dynamic casting until we learn about Object Oriented programming in CS 165.
</p>

```cpp
{    
   int value = 4;    
   cout << "float: " << static_cast<float>(value) << endl;  
}
```
</td>
<td style="display: flex; padding: 0; height: 100%">
   <img src="../../.etc/assets/sam.png" width="100px" height="auto" style="margin: 0 auto">
</td>
</tr>
</tbody>
</table>

<p class="footer" style="
   text-align: right;
   font-size: .75em;">
<br><br>
<strong>Page 51</strong>
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

## Putting it all together

So how does this work together?  Consider the following example: 

```cpp
{    int f = 34;    int c = 5.0 / 9 * (f - 32); } 
```

The most predictable way to evaluate the value of the variable c is to handle this one step at a time: 
1. <pre style="padding: .25em; margin: .25em"><code>int c = 5.0 / 9 * (f – 32);   // The original statement </code></pre>
2. <pre style="padding: .25em; margin: .25em"><code>int c = 5.0 / 9 * (34 – 32);  // Step 1. Substitute the value f for 34 </code></pre>
3. <pre style="padding: .25em; margin: .25em"><code>int c = 5.0 / 9 * 2;          // Step 2. Perform subtraction: 2 == 34 - 32 </code></pre>
4. <pre style="padding: .25em; margin: .25em"><code>int c = 5.0 / 9.0 * 2;        // Step 3. Convert 9 to 9.0 for floating point division </code></pre>
5. <pre style="padding: .25em; margin: .25em"><code>int c = 0.555556 * 2;         // Step 2. Perform floating point division: 0.55555 == 5.0 / 9.0 </code></pre>
6. <pre style="padding: .25em; margin: .25em"><code>int c = 0.555556 * 2.0;       // Step 3. Convert 2 to 2.0 for floating point multiplication </code></pre>
7. <pre style="padding: .25em; margin: .25em"><code>int c = 1.111111;             // Step 2. Perform multiplication: 1.11111 == 0.555556 * 2.0 </code></pre>
8. <pre style="padding: .25em; margin: .25em"><code>int c = 1;                    // Step 3. Convert 1.111111 to the integer 1 for assignment </code></pre>

<table>
<theader>
<tr style="background: #632423">
<td width="85%">
   <p style="color: white; font-weight: bold; margin-top: 10px; line-height: 0">Sue's Tips</p>
</td>
<td></td>
</tr>
</theader>
<tbody>
<tr>
<td>

Seemingly simple expressions can be quite complex and unpredictable when data-type conversion occurs. It is far easier to use only one data-type in an expression. In other words, don’t mix `floats` and `ints`!

</td>
<td style="display: flex; padding: 0; height: 100%">
   <img src="../../.etc/assets/sue.png" width="100px" height="auto" style="margin: 0 auto">
</td>
</tr>
</tbody>
</table>

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<strong>Page 52</strong>
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

<table style="width: 100%; min-width: 715px; border: 1px solid #00000010">
<thead>
<tr>
   <td>
      <!-- Blank -->
   </td>
   <td style="text-align: center; background: #17365d; height: 12px;">
      <h4 style="color: white; padding: 0; margin: 0;">Example 1.3 - Compute Change</h4>
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
   This example will demonstrate how to evaluate simple expressions, how to update the value in a variable, casting, and how to use modulus. 
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
   Write a program to prompt the user for an amount of money. The program will then display the number of dollars, quarters, dimes, nickels, and pennies required to match the amount.
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

In this example, the user is prompted for a dollar amount: 

```cpp
   // prompt the user 
   cout << "Please enter a positive dollar amount (ex: 4.23): "; 
   float dollars; 
   cin >> dollars; 
```

Next it is necessary to find the number of cents. This is done by multiplying the dollar variable by 100. Note that dollars have a decimal so they must be in a floating point number. Cents, however, are always whole numbers. Thus we should store it in an integer. This requires conversion through casting. 

```cpp
   // convert to cents 
   int cents = (int)(dollars * 100.00); 
```

Finally we need to find how many Dollars (and Quarters, Dimes, etc) are to be sent to the user. We accomplish this by performing integer division (where the decimal is removed).  

```cpp
   cout << "Dollars:  " << cents / 100 << endl; 
```

After we extract the dollars, how many cents are left? We compute this by finding the remainder after dividing by 100. We can ask for the remainder by using the modulus operator (cents % 100). Since we want to assign the new amount back to the cents variable, we have two options: 

```cpp
   cents = (cents % 100); 
```

This is exactly the same as: 

```cpp
   cents %= 100;
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
   <h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 40px; width: 5px; position: relative; bottom: 35px; left: -10px">
      Challenge
   </h4>
</td>
<td>
As a challenge, try to modify the above program so it will not only compute change with coins, but also 
for bills. For example, it will display the number of $1’s, $5’s, $10’s, and $20’s. 
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

The complete solution is available at [1-3-computeChange.cpp](https://content.byui.edu/file/66227afd-b800-4ba3-b6b3-18db4db6c440/1/1-3-computeChange.html) or: 
```
/home/cs124/examples/1-3-computeChange.cpp
```

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
<strong>Page 53</strong>
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
Please write the variable declaration used for each variable name:
</p>

* `numberStudents`: &nbsp;&nbsp;&nbsp; _____________________________________________________________________________ <br><br>
* `pi`: &nbsp;&nbsp;&nbsp; _____________________________________________________________________________________________ <br><br>
* `hometown`: &nbsp;&nbsp;&nbsp; _____________________________________________________________________________________ <br><br>
* `priceApples`: &nbsp;&nbsp;&nbsp; _________________________________________________________________________________ <br><br>

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 36 for questions</em></div>
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
How much space in memory does each variable take?
</p>

* `bool value;` &nbsp;&nbsp;&nbsp; _________________________________________________________________________________ <br><br>
* `char value[256];` &nbsp;&nbsp;&nbsp; __________________________________________________________________________ <br><br>
* `char value;` &nbsp;&nbsp;&nbsp; _________________________________________________________________________________ <br><br>
* `long double value;` &nbsp;&nbsp;&nbsp; ________________________________________________________________________ <br><br>

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 36 for questions</em></div>
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
Insert parentheses to indicate the order of operations:
</p>

* `a = a + b * c++ / 4` &nbsp;&nbsp;&nbsp; _____________________________________________________________________________ <br><br>

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 47 for a hint</em></div>
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
What is the value of <code>yards</code> at the end of execution?
</p>

```cpp
{
   float feet = 7;
   float yards = (1 / 3) * feet;
}
```
Answer: 

   `yards ==  `&nbsp;&nbsp;&nbsp; ____________________________________________________________________________________________ <br><br>

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 49 for a hint</em></div>
</td>
</tr>
</tbody>
</table>

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<br><br>
<br><br>
<br><br>
<strong>Page 54</strong>
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
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
<p>
What is the value of <code>a</code>?
</p>

```cpp
int a = (2 + 2) / 3;
```
Answer: 

   `a ==  `&nbsp;&nbsp;&nbsp; _________________________________________________________________________________________________ <br><br>

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 49 for a hint</em></div>
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
What is the value of <code>b</code>?
</p>

```cpp
int b = 2 / 3 + 1 / 2;
```
Answer: 

   `b ==  `&nbsp;&nbsp;&nbsp; _________________________________________________________________________________________________ <br><br>

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 49 for a hint</em></div>
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
What is the value of <code>c</code>?
</p>

```cpp
int f = 34; 
int c = 5 / 9 * (f - 32);
```
Answer: 

   `c ==  `&nbsp;&nbsp;&nbsp; _________________________________________________________________________________________________ <br><br>

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 49 for a hint</em></div>
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
What is the value of <code>d</code>?
</p>

```cpp
int d = (float) 1 / 4 * 10;
```
Answer: 

   `d ==  `&nbsp;&nbsp;&nbsp; _________________________________________________________________________________________________ <br><br>

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 51 for a hint</em></div>
</td>
</tr>
</tbody>
</table>

<p class="footer" style="
   text-align: right;
   font-size: .75em;">
<br><br>
<br><br>
<br><br>
<strong>Page 55</strong>
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
Write a program to prompt the user for a number of days, and return the number of weeks and remaining days.
</p>

Example: 

```plaintext
How many days: 17
        weeks: 2
        days:  3
```


Program:
```
 
 
 
 
 
 
 
 
 ```

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 49 for a hint</em></div>
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

What is the output?

```cpp
{
   int dateOfBirth = 1987;
   int currentYear = 2006;

   cout << "age is "
        << currentYear++ - dateOfBirth
        << endl;

   cout << "age is "
        << currentYear++ - dateOfBirth
        << endl;
}
```

Answer:

```plaintext


```

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 49 for a hint</em></div>
</td>
</tr>
</tbody>
</table>

<p class="footer" style="
   text-align: left;
   font-size: .75em;">
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<br><br>
<strong>Page 56</strong>
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
C = 5/9(F – 32)
```

<p>
   The program will prompt the user for the temperature, compute the Celsius value, and display the results.
</p>

**Hint:** If you keep getting zero for an answer, you are probably not taking integer division into account. Please review the text for insight as to what is going on.

**Hint:** If the last test fails, then you are probably not rounding correctly. Note that integers cannot hold the decimal part of a number so they always round down. If you use <code>precision(0)</code>, then the rounding will occur the way you expect.

</ul>
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
   User input is <ins style="font-weight: bold">underlined</ins>.
</p>

<pre><code>Please enter Fahrenheit degrees: <ins style="font-weight: bold">72</ins>
Celsius: 22</code></pre>
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
<p>
   The test bed is available at:
</p>

<pre><code>testBed <a href="">cs124/assign13</a> assignment13.cpp</code></pre>

<p>Don’t forget to submit your assignment with the name “Assignment 13” in the header.</p>

<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 49 for a hint.</em></div>
</td>
<td style="background: #17365d">
   <!-- Blank -->
</td>
</tr>
</thead>
</table>

