import java.io.*;

public class MainTest {
    public static void main(String[] args) throws IOException {
        String input = "1010.99\n";  // Simulated user input
        String expectedOutput = "Your monthly income: \tYour income is: $  1010.99";

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

        // Normalize output (remove trailing newlines)
        String actualOutput = outContent.toString().replace("\r", "").trim();

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
