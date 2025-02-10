# Example 1.1 – Money Alignment (JavaScript)

## Demo

This example demonstrates how to align multiple columns of numbers (money in this case) in JavaScript so they are pleasing to the eye. This is important in many output scenarios.

## Problem

Write a JavaScript program to output a list of numbers on a grid so they can be easily read by the user.

## Solution

The first part of the solution is to format the numbers as money, ensuring two decimal places.

```javascript
const fixed = (num) => num.toFixed(2); // Format to two decimals
```

After the leading `$` the text is padded to a specific length. This will require code something like:

```javascript
const formattedValue = "$" + fixed(124.45).padStart(7); // Numbers not in quotes!
```

Following the first set of numbers, we have another column separated by a tab.

```javascript
const tab = "\t";
```

Next, another column of numbers just like the first.

```javascript
const formattedValue2 = "$" + fixed(321.31).padStart(7); // Again, the numbers are not in quotes
```

Finally, we end with a newline

```javascript
const newLine = "\n";
```

**To print the output to the console, import the `print` function from the `./etc/utils.js` module:**

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
console.log(row1);
```

## Challenge

As a challenge, try to increase the width of each column from 7 spaces to 10. How does this change the space between columns? Can you add a third column of numbers?

Finally, what is the biggest number you can put in a column before things start to get "weird"? What happens when the numbers are wider than the columns?

## See Also

The complete solution is available at [1-1-alignMoney.js](link-to-your-javascript-file) (replace with the actual link to your JavaScript file)