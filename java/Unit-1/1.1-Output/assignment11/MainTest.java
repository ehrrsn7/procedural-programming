import java.io.*;

public class MainTest {
    public static void main(String[] args) {
        // Expected output (copy EXACTLY from README example)
        String expectedOutput = 
            "\tItem           Projected  \n" +
            "\t=============  ========== \n" +
            "\tIncome         $  1000.00 \n" +
            "\tTaxes          $   100.00 \n" +
            "\tTithing        $   100.00 \n" +
            "\tLiving         $   650.00 \n" +
            "\tOther          $    90.00 \n" +
            "\t=============  ========== \n" +
            "\tDelta          $    60.00";

        // Capture original System.out
        PrintStream originalOut = System.out;
        ByteArrayOutputStream outContent = new ByteArrayOutputStream();
        System.setOut(new PrintStream(outContent));

        // Run Main.main()
        Main.main(new String[]{});

        // Restore original output
        System.setOut(originalOut);

        // Get output string and trim trailing whitespace
        String actualOutput = outContent.toString().trim();

        if (actualOutput.equals(expectedOutput)) {
            System.out.println("✅ Test passed: Output matches exactly.");
        } else {
            System.out.println("❌ Test failed: Output does not match.");
            System.out.println("---- Expected Output ----");
            System.out.println(expectedOutput);
            System.out.println("---- Actual Output ----");
            System.out.println(actualOutput);
        }
    }
}
