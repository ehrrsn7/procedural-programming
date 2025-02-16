# Assignment 1.1 - Monthly Budget (Python)

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
- You will need to set the formatting of the prices with the provided `fixed` function.

```python
fixed = lambda num: f"{num:.2f}" # Format to two decimals
```

- Please display the money as a number, rather than as text. This means two things. First, the numbers should be outside the quotes.
- Second, you will need to use the .rjust(n) method on the number to get the numbers to line up correctly.

## Challenge

Once you have everything running fine, try modifying how you present the delta value calculating it from the values in the budget table.

## Setting up the Program

First, you need to have Python installed on your machine.
You can revisit the provided instructions in [`stretch-programs/python/README.md`](../README.md).
To set up the program, navigate to the directory containing your requirements.txt file. Then, run the following command to set up the virtual environment and install the dependencies:

```Powershell
python -m venv venv
venv\Scripts\activate
pip install -r requirements.txt
```

## How to Run the Program

Open a terminal or command prompt and navigate to the directory where the `alignMoney.py` file is located.
Run the program using the following command:

```Powershell
python assignment11.py
```

## How to Test the Program

To test the program, a test file has been provided for you at `assignment11_test.py`, per PyTest conventions. Use the provided framework to test your program against the test cases by using the following command:

```Powershell
python -m pytest
```

## Style Check

To ensure your code follows the PEP 8 style guide, you can use a tool like `flake8`. Be sure you've already run your virtual environment script and pip install command. Run the style checker on your Python file by entering:

```Powershell
flake8 assignment11.py
```

This will check your code for any style issues and provide feedback on how to improve it.

## Submission
Once your code passes all tests, submit your code.
