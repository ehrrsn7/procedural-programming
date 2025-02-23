# Example 1.1 – Money Alignment
## Demo
This example will demonstrate how to use tabs and setw() to align money. This is important in Assignment 1.1, Project 1, and many output scenarios.
## Problem
Write a program to output a list of numbers on a grid so they can be easily read by the user.
## Solution
The first part of the solution is to realize that all the numbers are displayed as money. This requires us to format cout to display two digits of accuracy.
```
cout.setf(ios::fixed); // no scientific notation
cout.setf(ios::showpoint); // always show the decimal point
cout.precision(2); // two digits for money
```
After the leading $ the text is right-aligned to seven spaces. This will require code something like:
```
cout << "$" << setw(7) << 124.45; // numbers not in quotes!
```
Following the first set numbers, we have another column separated by a tab.
```
cout << "\t";
```
Next, another column of numbers just like the first.
```
cout << "$" << setw(7) << 321.31; // again, the numbers are not in quotes
```
Finally, we end with a newline
```
cout << endl; // instead, we could say "\n"
```
Put it all together:
```
 // display the first row
 cout << "$"
 << setw(7) << 124.45
 << "\t$"
 << setw(7) << 321.31
 << endl;
```
## Challenge
As a challenge, try to increase the width of each column from 7 spaces to 10. How does this change the space between columns? Can you add a third column of numbers?
Finally, what is the biggest number you can put in a column before things start to get “weird.” What happens when the numbers are wider than the columns?
## See Also
The complete solution is available at [1-1-alignMoney.cpp](https://content.byui.edu/file/66227afd-b800-4ba3-b6b3-18db4db6c440/1/1-1-alignMoney.html)