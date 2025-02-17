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

try:
    from etc.key.assignment11_proxy import main as key
except Exception as e:
    key = None
    print(f"Could not import key from path etc.key.assignment11_proxy: {e}")

"""
Import Statements/Globals
"""
expected_output = (
    "\tItem           Projected\n"
    "\t=============  ==========\n"
    "\tIncome         $  1000.00\n"
    "\tTaxes          $   100.00\n"
    "\tTithing        $   100.00\n"
    "\tLiving         $   650.00\n"
    "\tOther          $    90.00\n"
    "\t=============  ==========\n"
    "\tDelta          $    60.00\n"
)

def test_main(capsys):
    # Call the function
    main()

    # Capture the output
    captured = capsys.readouterr()

    # Assert the output
    assert captured.out == expected_output

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

    # Assert the output
    assert captured.out == expected_output
