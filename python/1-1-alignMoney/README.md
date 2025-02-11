# Example 1.1 – Money Alignment (Python)

## Demo

This example demonstrates how to align multiple columns of numbers (money in this case) in Python so they are pleasing to the eye. This is important in many output scenarios.

## Problem

Write a Python program to output a list of numbers on a grid so they can be easily read by the user.

## Solution

The first part of the solution is to format the numbers as money, ensuring two decimal places.

```Python
fixed = lambda num: f"{num : .2f}" # Format to two decimals and right-align
```

After the leading `$` the text is padded to a specific length and right-aligned. This will require code something like:

```Python
"$" + f"{fixed(124.45) : >7}" # Numbers not in quotes!
```

Following the first set of numbers, we have another column separated by a tab.

```Python
"\t"
```

Next, another column of numbers just like the first.

```Python
"$" + f"${fixed(321.31) : >7}" # Again, numbers not in quotes
```

Finally, we end with a newline

```Python
"\n"
```

Put it all together:

```Python
# Display the first row
row1 = "$" +
  f"{fixed(124.45) : >7}" +
  "\t$" +
  f"{fixed(321.31) : >7}" +
  "\n"
print(row1, end="")
```

## Challenge

As a challenge, try to increase the width of each column from 7 spaces to 10. How does this change the space between columns? Can you add a third column of numbers?

Finally, what is the biggest number you can put in a column before things start to get "weird"? What happens when the numbers are wider than the columns?

## How to Run the Program

To run the program, you need to have Python installed on your machine. You can download Python from the [official website](https://www.python.org/).

1. Open a terminal or command prompt.
2. Navigate to the directory where the `alignMoney.py` file is located.
4. Run the program using the following command:

```Powershell
python align_money.py
```

## How to Test the Program

1. Make sure pytest is installed by activating the virtual environment and installing all the dependencies:

```Powershell
venv\Scripts\activate
pip install -r requirements.txt
```

2. To test the program, a test file has been provided for you at `test_align_money.py`. Run the test automatically using the following command:

```Powershell
python -m pytest
```

## Style Check

To ensure your code follows the PEP 8 style guide, you can use a tool like `flake8`. Be sure you've already run your virtual environment script and pip install command. Run the style checker on your Python file by entering:

```sh
flake8 align_money.py
```

This will check your code for any style issues and provide feedback on how to improve it.
