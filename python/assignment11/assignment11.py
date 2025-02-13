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
    items = [
        ("Income", 1000.00),
        ("Taxes", 100.00),
        ("Tithing", 100.00),
        ("Living", 650.00),
        ("Other", 90.00),
    ]

    # Add delta to items
    items.append(
        (
            "Delta",
            items[0][1] - sum(amount for item, amount in items[1:])
        )
    )

    # Print the header
    print("\tItem Projected")
    print("\t=============  ==========")

    # Print each item
    for item, amount in items:
        print(f"\t{item : < 13}  ${fixed(amount) : > 9}")

if __name__ == "__main__":
    main()
