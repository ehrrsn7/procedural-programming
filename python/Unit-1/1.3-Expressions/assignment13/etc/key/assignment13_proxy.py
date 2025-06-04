"""
Proxy File
Name: assignment13_proxy.py
Description:
    This file represents the key found at `stretch-programs-keys/python`
    Used by pytest to test key file `assignment13.py`
Author: Elijah Harrison
"""
import sys
import os

# Get the absolute path to the directory containing stretch-programs-keys
KEYS_DIR = os.path.abspath("../../../stretch-programs-keys/python")

# Ensure the key directory is at the very front of sys.path
if KEYS_DIR in sys.path:
    sys.path.remove(KEYS_DIR)  # Remove any duplicate entry
sys.path.insert(0, KEYS_DIR)  # Insert at the beginning to take priority

# Remove any previously loaded assignment13 module to force reload from KEYS_DIR
if "assignment13" in sys.modules:
    del sys.modules["assignment13"]

# Now import the function
try:
    from assignment13 import main as key
    print(f"Successfully imported key from {KEYS_DIR}")

    key()
    
except Exception as e:
    key = None
    print(f"Could not import key from {KEYS_DIR}: {e}")
