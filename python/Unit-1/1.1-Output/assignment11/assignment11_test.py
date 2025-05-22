"""
Name: assignment11_test.py
Description:
    This file will be collected by the pytest command and test assignment11.py
Author:
    Elijah Harrison
"""
import io
import sys
import pytest
from assignment11 import main
# Make sure to import this AFTER main
from etc.key.assignment11_proxy import key 

"""
Import Statements/Globals
"""
expected_output = [
    "\tItem           Projected\n",
    "\t=============  ==========\n",
    "\tIncome         $  1000.00\n",
    "\tTaxes          $   100.00\n",
    "\tTithing        $   100.00\n",
    "\tLiving         $   650.00\n",
    "\tOther          $    90.00\n",
    "\t=============  ==========\n",
    "\tDelta          $    60.00\n"
]

def test_main(capsys):
    if not main:
        pytest.skip("Skipping test_main because main is not available")

    # Call the function
    main()

    # Capture the output
    captured = capsys.readouterr()

    # Split the captured output into lines
    captured_lines = captured.out.split("\n")

    # Assert the output
    print(f"{'Captured Output':31}   == {'Expected Output':31}") # Debug Header
    for i, line in enumerate(captured_lines):
        if i >= len(expected_output):
            print(f"Extra line in captured output: {repr(line)}")
            continue
        print(f"{i} {repr(line + '\n'):31} == {repr(expected_output[i]):31}")
        e = f"Line {i} does not match: {repr(line + '\n')} != {repr(expected_output[i])}"
        assert repr(line + '\n') == repr(expected_output[i]), e

def test_key(capsys):
    """
    For Mr. Eli's key.
    """
    # return # The key is not available yet
    if not key:
        pytest.skip("Skipping test_key because key is not available")

    # Call the function
    key()

    # Capture the output
    captured = capsys.readouterr()

    # Split the captured output into lines
    captured_lines = captured.out.split("\n")

    # Assert the output
    print(f"{'Captured Output':31}   == {'Expected Output':31}") # Debug Header
    for i, line in enumerate(captured_lines):
        if i >= len(expected_output):
            print(f"Extra line in captured output: {repr(line)}")
            continue
        print(f"{i} {repr(line + '\n'):31} == {repr(expected_output[i]):31}")
        e = f"Line {i} does not match: {repr(line + '\n')} != {repr(expected_output[i])}"
        assert repr(line + '\n') == repr(expected_output[i]), e

if __name__ == "__main__":
    pytest.main()
