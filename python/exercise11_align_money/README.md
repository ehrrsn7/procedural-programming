# Example 1.1 – Money Alignment (Python)

## Problem

Write a Python program to output a list of numbers on a grid so they can be easily read by the user.

A template file has been provided for you at [`align_money.py`](align_money.py).

## Demo

```
$ 124.45        $ 321.31
$   1.74        $   4.21
$ 7539.12       $  54.92
```

This example demonstrates how to align multiple columns of numbers (money in this case) in Python so they are pleasing to the eye. This is important in many output scenarios.

## Solution

The first part of the solution is to format the numbers as money, ensuring two decimal places.

```Python
fixed = lambda num: f"{num : .2f}" # Format to two decimals
```

After the leading `$` the text is padded and right-aligned to a specific length. This will require code something like:

```Python
"$" + f"{fixed(124.45) : >7}" # Numbers not in quotes!
```

Following the first set of numbers, we have another column separated by a tab.

```Python
"\t" # the escape character for tab
```

Next, another column of numbers just like the first.

```Python
"$" + f"${fixed(321.31) : >7}" # Note the use of `: >` to right align
```

Finally, we end with a newline.

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

Repeat this process three times using the numbers in the example output in the [demo](#demo).

## Challenge

As a challenge, try to increase the width of each column from 7 spaces to 10. How does this change the space between columns? Can you add a third column of numbers?

Finally, what is the biggest number you can put in a column before things start to get "weird"? What happens when the numbers are wider than the columns?

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

Open a terminal or command prompt and navigate to the [directory](.) where the [`alignMoney.py`](align_money.py) file is located.
Run the program using the following command:

```Powershell
python align_money.py
```

## How to Test the Program

To test the program, a test file has been provided for you at [`align_money_test.py`](align_money_test.py), per PyTest conventions. Use the provided framework to test your program against the test cases by using the following command:

```Powershell
python -m pytest
```

## Style Check

To ensure your code follows the PEP 8 style guide, you can use a tool like `flake8`. Be sure you've already run your virtual environment script and pip install command. Run the style checker on your Python file by entering:

```Powershell
flake8 align_money.py
```

This will check your code for any style issues and provide feedback on how to improve it.
