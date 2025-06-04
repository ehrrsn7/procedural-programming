
# [Stretch Programs](../../README.md) > [Python](../README.md) > [Assignment 1.2 - Get and Display Income](.)

## Problem

Write a program that prompts the user for their income and displays the result with proper formatting.

There are two parts:

### Get Income

The first part is code that prompts the user for his income. 
It will ask the user:
```
Your monthly income: 
```

- There is a **tab** before "Your".
- There is **one space** after the ": ".
- There is no newline at the end of this prompt.
- The user will then provide their income as a float.
- Read the user’s response as a **float**.

### Display Result

After reading the input, display the output like this:

```
   Your income is: $  1010.99
```

- There are **three spaces** before "Your income is".
- There is **one space** between the colon and the dollar sign.
- The amount should be formatted to **2 decimal places**, and **right-aligned to 9 characters** including the decimal point.

## Example

```
Your monthly income: 932.16
   Your income is: $  932.16
````

## Hints

- Use `f"{value:.2f}"` to format the float to two decimal places.
- Use `str(value).rjust(9)` or `f"{value:>9}"` to right-align the dollar amount.

```python
fixed = lambda num: f"{num:.2f}"
````

## How to Run the Program

Run your virtual environment with:
```powershell
python -m venv venv
.\venv\Scripts\activate.bat
python -m pip install -r requirements.txt
```

Once your virtual environment is activated, navigate to the folder containing `assignment12.py`, then run:

```powershell
python assignment12.py
```

## How to Test the Program

A test file is provided at `assignment12_test.py`. Run the tests using:

```powershell
python -m pytest
```

## Style Check

Run the following to check for PEP8 compliance:

```powershell
python -m flake8 assignment12.py
```

## Submission

Once all tests pass and your code follows style guidelines, submit your code.
