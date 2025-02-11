"""
Name: align_money.py
This demo program is designed to:
	Demonstrate how to align multiple columns of numbers (money
	in this case) so they are pleasing to the eye
Author:
	KEY
Source:
	Elijah Harrison
	James Helfrich
"""

"""
Import Statements/Globals
"""

"""
main()...
"""
def align_money():
	"""
	Demonstrates how to align multiple columns of numbers (money in this case)
	so they are pleasing to the eye.
	"""

	# Format the output for money
	fixed = lambda num: f"{num : .2f}" # Format to two decimals and right-align

	# Display the first row
	row1 = ("$" +
		f"{fixed(124.45) : >7}" +
		"\t$" +
		f"{fixed(321.31) : >7}" +
		"\n")
	print(row1, end="")

	# Display the second row
	row2 = ("$" +
		f"{fixed(1.74) : >7}" +
		"\t$" +
		f"{fixed(4.21) : >7}" +
		"\n")
	print(row2, end="")

	# Display the third row
	row3 = ("$" +
		f"{fixed(7539.12) : >7}" +
		"\t$" +
		f"{fixed(54.92) : >7}" +
		"\n")
	print(row3, end="")

if __name__ == "__main__":
	align_money()