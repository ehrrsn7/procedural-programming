import java.io.*;

public class MainTest {
    public static void main(String[] args) throws IOException {
        // Test case: input 72, expect output as in assignment example
        String input = "72\n";  // Simulated user input
        String expectedOutput = "Please enter Fahrenheit degrees: Celsius: 22";

        // Set up input stream for user input
        InputStream originalIn = System.in;
        System.setIn(new ByteArrayInputStream(input.getBytes()));

        // Capture System.out
        PrintStream originalOut = System.out;
        ByteArrayOutputStream outContent = new ByteArrayOutputStream();
        System.setOut(new PrintStream(outContent));

        // Run Main
        Main.main(new String[]{});

        // Reset System.out and System.in
        System.setOut(originalOut);
        System.setIn(originalIn);

        // Normalize output (remove trailing newlines and spaces)
        String actualOutput = outContent.toString().replace("\r", "").replace("\n", "").trim();
        String expected = expectedOutput.replace("\r", "").replace("\n", "").trim();

        if (actualOutput.equals(expected)) {
            System.out.println("✅ Test passed: Output matches exactly.");
        } else {
            System.out.println("❌ Test failed: Output does not match.");
            System.out.println("---- Expected Output ----");
            System.out.println(expectedOutput);
            System.out.println("---- Actual Output ----");
            System.out.println(outContent.toString());
        }
    }
}
