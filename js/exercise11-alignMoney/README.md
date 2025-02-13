# Example 1.1 – Money Alignment (JavaScript)

## Problem

Write a JavaScript program to output a list of numbers on a grid so they can be easily read by the user.

A template file has been provided for you at `alignMoney.js`.

## Demo

```
$ 124.45        $ 321.31
$   1.74        $   4.21
$7539.12        $  54.92
```

This example demonstrates how to align multiple columns of numbers (money in this case) in JavaScript so they are pleasing to the eye. This is important in many output scenarios.

## Solution

The first part of the solution is to format the numbers as money, ensuring two decimal places.

```javascript
const fixed = (num) => num.toFixed(2); // Format to two decimals
```

After the leading `$` the text is padded and right-aligned to a specific length. This will require code something like:

```javascript
"$" + fixed(124.45).padStart(7) // Numbers not in quotes!
```

Following the first set of numbers, we have another column separated by a tab.

```javascript
"\t" // the escape character for tab
```

Next, another column of numbers just like the first.

```javascript
"$" + fixed(321.31).padStart(7) // note the use of .padStart to right-align
```

Finally, we end with a newline

```javascript
"\n"
```

**To print the output to the console, import the `print` function from the `./etc/utils.js` module at the top of the file like this:**

```javascript
import { print } from './etc/utils.js';
```

Put it all together:

```javascript
// Display the first row
const row1 = "$" +
   fixed(124.45).padStart(7) +
   "\t$" +
   fixed(321.31).padStart(7) +
   "\n";
print(row1);
```

Repeat this process three times using the numbers in the example output below.

## Challenge

As a challenge, try to increase the width of each column from 7 spaces to 10. How does this change the space between columns? Can you add a third column of numbers?

Finally, what is the biggest number you can put in a column before things start to get "weird"? What happens when the numbers are wider than the columns?

## Setting up the Program

First, you need to have NodeJS (the JavaScript runtime for the Terminal). You can download this using the provided [Install Script](https://docs.google.com/document/d/1Qn1t364JDQHaBO3hAh9bZYd06EnaQvQewCQgq8QrEKU/edit?usp=sharing) document.

To set up the program, navigate to the directory containing your package.json file. Then, run the following command to install the dependencies:

```Powershell
npm i
```

## How to Run the Program

In the terminal, navigate to the directory where the `alignMoney.js` file is located. Run the program using the following command:

```Powershell
node alignMoney.js
```

## How to Test the Program

To test the program, a test file has been provided for you at `alignMoney.test.js`, per Vitest conventions. Use the provided framework to test your program against the test cases by using the following command:

```Powershell
npm run testBed
```

## Style Check

To ensure your code follows the style guide, a style linter has been provided for you. Be sure you've already done the [Setting up the Program](#setting-up-the-program) step. Run it by using the following command:

```Powershell
npm run styleChecker
```

This will check your code for any style issues and provide feedback on how to improve it.

