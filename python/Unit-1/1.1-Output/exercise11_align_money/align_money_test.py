"""
Name: align_money_test.py
Description:
    This file will be collected by the pytest command and test align_money.py
Author:
    Elijah Harrison
"""
import io
import sys
import pytest
from align_money import align_money
# Make sure to import this AFTER main
from etc.key.exercise11_align_money_proxy import key

"""
Import Statements/Globals
"""
def run_assertion(captured_lines):
    """
    Run the assertion tests.
    """
    expected_output = [
        "$ 124.45\t$ 321.31\n",
        "$   1.74\t$   4.21\n",
        "$7539.12\t$  54.92\n",
    ]

    # Debug Header
    print(f"{'Captured Output':31}      {'Expected Output':31}")

    for i, line in enumerate(captured_lines):
        if i >= len(expected_output):
            print(f"Extra line in captured output: {repr(line)}")
            continue

        print(f"{i} {repr(line + '\n'):31} == {repr(expected_output[i]):31}")

        assert repr(line + '\n') == repr(expected_output[i]), e(i, line, expected_output[i])

def e(i, line, expected):
    return f"Line {i} does not match: {repr(line + '\n')} != {repr(expected)}"

def test_align_money(capsys):
    if not align_money:
        pytest.skip("Skipping test_align_money because align_money is not available")

    # Call the function
    align_money()

    # Capture the output
    captured = capsys.readouterr()

    # Split the captured output into lines
    captured_lines = captured.out.split("\n")

    # Assert the output
    run_assertion(captured_lines)

def test_key(capsys):
    """
    For Mr. Eli's key.
    """
    if not key:
        pytest.skip("Skipping test_key because key is not available")

    # Call the function
    key()

    # Capture the output
    captured = capsys.readouterr()

    # Split the captured output into lines
    captured_lines = captured.out.split("\n")

    # Assert the output
    run_assertion(captured_lines)

if __name__ == "__main__":
    pytest.main()
