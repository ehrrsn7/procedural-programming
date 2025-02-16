# Proxy File
import sys
import os

# Get the absolute path to stretch-programs-keys
KEYS_PATH = os.path.abspath("../../../../stretch-programs-keys/python/exercise11_align_money.py")

# Add it to sys.path (session only) if not already present
if KEYS_PATH not in sys.path:
    sys.path.append(KEYS_PATH)

# Now import the function
try:
    from exercise11_align_money import align_money
except Exception as e:
    print(f"Could not import key from path {KEYS_PATH}")
