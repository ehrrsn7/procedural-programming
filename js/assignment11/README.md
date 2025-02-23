# [Stretch Programs](../../README.md) > [JavaScript](../README.md) > [Assignment 1.1 - Monthly Budget](.)

## Problem

Write a program to output your monthly budget:

| Item    | Projected  |
|---------|------------|
| Income  | $ 1000.00  |
| Taxes   | $  100.00  |
| Tithing | $  100.00  |
| Living  | $  650.00  |
| Other   | $   90.00  |
|---------|------------|
| Delta   | $   60.00  |

## Demo
```
	Item 		   Projected
	=============  ==========
	Income         $  1000.00
	Taxes          $   100.00
	Tithing        $   100.00
	Living         $   650.00
	Other          $    90.00
	=============  ==========
	Delta          $    60.00
```

## Instructions

Please note:

- There is a single tab at the start of each line, but nowhere else.
- There are 13 ‘=’s in the first column, 10 in the second. There are 2 spaces between the columns.
- The spacing between the ‘$’ and the right edge of the money is 9.
- You will need to set the formatting of the prices with the provided `fixed` function.

```javascript
const fixed = (num) => num.toFixed(2); // Format to two decimals
```

- Please display the money as a number, rather than as text. This means two things. First, the numbers should be outside the quotes.
- Second, you will need to use the `.padStart(n)` method on the number to get the numbers to line up correctly.

```javascript
const amount = /* amount of money as a decimal number */;
const padding = /* number amount for padding */;
const aligned = "$" + fixed(amount).padStart(padding);
```

## Challenge

Once you have everything running fine, try modifying how you present the `delta` value calculating it from the values in the budget table.

## Setting up the Program

First, you need to have NodeJS (the JavaScript runtime for the Terminal). You can download this using the provided instructions in `stretch-programs/js/README.md`.

To set up the program, navigate to the directory containing your `package.json` file. Then, run the following command to install the dependencies:

```Powershell
npm i
```

## How to Run the Program

In the terminal, navigate to the directory where the `assignment11.js` file is located. Run the program using the following command:

```Powershell
node assignment11.js
```

## How to Test the Program

To test the program, a test file has been provided for you at `assignment11.test.js`, per Vitest conventions. Use the provided framework to test your program against the test cases by using the following command:

```Powershell
npm run testBed
```

## Style Check

To ensure your code follows the style guide, a style linter has been provided for you. Be sure you've already done the [Setting up the Program](#setting-up-the-program) step. Run it by using the following command:

```Powershell
npm run styleChecker
```

This will check your code for any style issues and provide feedback on how to improve it.

## Submission

Once the testBed passes for all cases, submit your code.