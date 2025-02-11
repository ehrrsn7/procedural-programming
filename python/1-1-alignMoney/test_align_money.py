# test_align_money.py

import io
import sys
from align_money import align_money

test_align_money_expected_output = """$ 124.45\t$ 321.31
$   1.74\t$   4.21
$ 7539.12\t$  54.92
"""
def test_align_money(capsys):
    # Call the function
    align_money()

    # Capture the output
    captured = capsys.readouterr()

    # Assert the output
    assert captured.out == test_align_money_expected_output