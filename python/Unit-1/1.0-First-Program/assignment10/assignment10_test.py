"""
Name: assignment10_test.py
Description:
    This file will be collected by the pytest command and test assignment10.py
Author:
    Elijah Harrison
"""
import io
import sys
import pytest
from assignment10 import main
# Make sure to import this AFTER main
from etc.key.assignment10_proxy import key 

"""
Import Statements/Globals
"""
expected_output = [
    "Hello world"
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
        print(f"{i} {repr(line):31} == {repr(expected_output[i]):31}")
        e = f"Line {i} does not match: {repr(line)} != {repr(expected_output[i])}"
        assert repr(line) == repr(expected_output[i]), e

def test_key(capsys):
    """
    For Mr. Eli's key.
    """
    return # no key test yet
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
        print(f"{i} {repr(line):31} == {repr(expected_output[i]):31}")
        e = f"Line {i} does not match: {repr(line)} != {repr(expected_output[i])}"
        assert repr(line) == repr(expected_output[i]), e

if __name__ == "__main__":
    pytest.main()
