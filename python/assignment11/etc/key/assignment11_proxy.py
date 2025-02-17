# Proxy File
import sys
import os

# Get the absolute path to the directory containing stretch-programs-keys
KEYS_DIR = os.path.abspath("../../../stretch-programs-keys/python")

# Add it to sys.path (session only) if not already present
if KEYS_DIR not in sys.path:
    sys.path.append(KEYS_DIR)

# Now import the function
try:
    from assignment11 import main
except Exception as e:
    main = None
    print(f"Could not import key from path {KEYS_DIR}: {e}")

if __name__ == "__main__":
    print(KEYS_DIR)
    if main: main()
    else: print("Could not find the main function.")
