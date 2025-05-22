"""
Name: assignment11.py
Description:
    Demonstrate how to align multiple columns of numbers (money
    in this case) to cleanly display a budget table.
Author:
    <YOUR NAME>
ID:
    <YOUR ID>
Source:
    Elijah Harrison
    James Helfrich
"""

"""
Import Statements/Globals
"""
# No imports needed for this assignment

"""
main()...
"""
def main():
    """
    Demonstrates how to align multiple columns of numbers (money in this case)
    so they are pleasing to the eye.
    """

    # Format the output for money
    fixed = lambda num: f"{num:.2f}" 	# unless you own a gas station, money
                                        #      is formatted to two decimals

    # Display the budget table
    

if __name__ == "__main__":
    main()

"""
Set up environment:
    python -m venv venv
    venv/Scripts/activate.bat
    pip install -r requirements.txt
Run file:
    python assignment10.py
Test program:
    python -m pytest
Style check:
    python -m flake8 assignment10.py
"""