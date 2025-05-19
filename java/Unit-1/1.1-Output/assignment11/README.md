# Assignment 1.1 - Monthly Budget (Java)

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
	Item Projected
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
- You will need to set the formatting of the prices with the provided `fixed` method.

```java
String.format("%.2f", num); // Format to two decimals
```

- Please display the money as a number, rather than as text. This means two things. First, the numbers should be outside the quotes.
- Second, you will need to use the `.format(str, n)` method on the number to get the numbers to line up correctly.

```java
String.format("%7s", amount); // Right-align with padding
```

## Challenge

Once you have everything running fine, try modifying how you present the `delta` value calculating it from the values in the budget table.

## Setting up the Program

First, you need to have the JDK (the Java Development Kit for the Terminal). You can download this using the provided instructions in `stretch-programs/js/README.md`.

To set up the program, navigate to the directory containing your `gradle.build` file. Then, run the following command to install the dependencies:

```Powershell
gradle build
```

## How to Test the Program

To test the program, a test file has been provided for you at [`tests\MainTest.java`](tests\MainTest.java), per Gradle conventions. Use the provided framework to test your program against the test cases by using the following command:

```Powershell
gradle test
```

## Style Check

To ensure your code follows the style guide, a style linter has been provided for you. Be sure you've already done the [Setting up the Program](#setting-up-the-program) step. Run it by using the following command:

```Powershell
gradle checkStyle
```

This will check your code for any style issues and provide feedback on how to improve it.

## Submission

Once your code passes all tests, submit your code.
[TODO - set up submission instructions]
