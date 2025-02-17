"""
Name: assignment11.py
Description:
    Demonstrate how to align multiple columns of numbers (money
    in this case) to cleanly display a budget table.
Author:
    <YOUR NAME>
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
    items = {
        "Income": 1000.00,
        "Taxes": 100.00,
        "Tithing": 100.00,
        "Living": 650.00,
        "Other": 90.00,
        # "Delta": 60.00, # Replaced by Challenge below
    }

    # Challenge: Add delta to items
    items["Delta"] = (
        items["Income"] - # Start with positive income
        # The subtract sum of all negative items (all items except Income)
        sum(amount for key, amount in items.items() if key != "Income")
    )

    # Print the header
    print(f"\t{"Item":<13}  Projected")
    print("\t=============  ==========")

    # Print each item except Delta
    for key, amount in items.items():
        # Delta has extra '===' above
        if key == "Delta": print("\t=============  ==========")
        print(f"\t{key:<13}  ${fixed(amount):>9}")

if __name__ == "__main__":
    main()
