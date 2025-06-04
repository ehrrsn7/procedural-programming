"""
Name: assignment13_test.py
Description:
    This file will be collected by the pytest command and test assignment13.py
Author:
    Elijah Harrison
"""
import pytest
from assignment13 import main
# For Mr. Eli's key comparison
from etc.key.assignment13_proxy import key

def test_main_output(monkeypatch, capsys):
    """
    Test main() from student program with simulated input for temperature conversion.
    """
    if not main:
        pytest.skip("Skipping test_main because main is not available")

    # Simulate user input for Fahrenheit degrees
    monkeypatch.setattr("builtins.input", lambda _: "72")

    # Run the program
    main()

    # Capture the output
    captured = capsys.readouterr()
    lines = captured.out.splitlines()

    # Expected result
    expected = "Celsius: 22"

    assert len(lines) == 1, f"Expected one line of output, got {len(lines)} lines"
    assert lines[0] == expected, f"Output mismatch:\nExpected: {expected}\nGot:      {lines[0]}"

def test_key_output(monkeypatch, capsys):
    """
    Test key() from instructor key with same input for comparison.
    """
    return # Ignore this test for now, key not available yet
    if not key:
        pytest.skip("Skipping test_key because key is not available")

    monkeypatch.setattr("builtins.input", lambda _: "932.16")
    key()
    
    # Capture the output
    captured = capsys.readouterr()
    lines = captured.out.splitlines()

    # Expected result
    expected = "Celsius: 22"

    assert len(lines) == 1, f"Expected one line of output, got {len(lines)} lines"
    assert lines[0] == expected, f"Output mismatch:\nExpected: {expected}\nGot:      {lines[0]}"

if __name__ == "__main__":
    pytest.main()
