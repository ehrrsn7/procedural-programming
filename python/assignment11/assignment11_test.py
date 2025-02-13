import io
import sys
from assignment11 import main

def test_main(capsys):
    # Call the function
    main()

    # Capture the output
    captured = capsys.readouterr()

    # Expected output
    expected_output = (
        "\tItem Projected\n"
        "\t=============  ==========\n"
        "\tIncome         $  1000.00\n"
        "\tTaxes          $   100.00\n"
        "\tTithing        $   100.00\n"
        "\tLiving         $   650.00\n"
        "\tOther          $    90.00\n"
        "\t=============  ==========\n"
        "\tDelta          $    60.00\n"
    )

    # Assert the output
    assert captured.out == expected_output
