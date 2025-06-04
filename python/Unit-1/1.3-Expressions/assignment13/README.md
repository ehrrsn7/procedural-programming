# [Stretch Programs](../../README.md) > [Python](../README.md) > [Assignment 1.3 - Temperature Conversion](.)

## Problem

Write a program to convert Fahrenheit to Celsius. This program will prompt the user for the Fahrenheit number and convert it to Celsius. The equation is:

```py
C = 5/9 * (F – 32)
```

The program will prompt the user for the temperature, compute the Celsius value, and display the results.

**Hint:** If you keep getting zero for an answer, you are probably not taking integer division into account. Please review the text for insight as to what is going on.

**Hint:** If the last test fails, then you are probably not rounding correctly. Note that integers cannot hold the decimal part of a number so they always round down. If you use `round()`, then the rounding will occur the way you expect.

---

## Example

User input is underlined.

<pre><code>Please enter Fahrenheit degrees: <strong><u>72</u></strong>
Celsius: 22
</code></pre>

---

## Instructions

- The Test Bed is available by running:

  ```
  python -m pytest
  ```

- The Style Checker is available by running:

  ```
  python -m flake8 --config=etc/.flake8 assignment13.py
  ```

- Don’t forget to submit your assignment with the name “Assignment 13” in the header.
- Please see page 41 for a hint.
