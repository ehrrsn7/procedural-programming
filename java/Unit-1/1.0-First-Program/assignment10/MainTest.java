import java.io.*;

public class MainTest {
    public static void main(String[] args) {
        // Capture original output
        PrintStream originalOut = System.out;

        // Create output stream to capture what's printed
        ByteArrayOutputStream outContent = new ByteArrayOutputStream();
        System.setOut(new PrintStream(outContent));

        // Run the Main class
        Main.main(new String[]{});

        // Restore original output
        System.setOut(originalOut);

        // Get the output as a String
        String output = outContent.toString().trim();

        // Check the result manually
        if (output.equals("Hello world")) {
            System.out.println("✅ Test passed: Output is correct.");
        } else {
            System.out.println("❌ Test failed: Expected 'Hello world' but got: '" + output + "'");
        }
    }
}
