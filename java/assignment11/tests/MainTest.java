import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.io.ByteArrayOutputStream;
import java.io.PrintStream;

public class MainTest {
    @Test
    public void testMain() {
        // Capture the output and compare with expected output
        ByteArrayOutputStream outputStream = new ByteArrayOutputStream();
        PrintStream originalOut = System.out;
        System.setOut(new PrintStream(outputStream));

        Main.main(new String[]{});

        String expectedOutput = "\tItem           Projected\n" +
                                "\t=============  ==========\n" +
                                "\tIncome         $  1000.00\n" +
                                "\tTaxes          $   100.00\n" +
                                "\tTithing        $   100.00\n" +
                                "\tLiving         $   650.00\n" +
                                "\tOther          $    90.00\n" +
                                "\t=============  ==========\n" +
                                "\tDelta          $    60.00\n";

        System.setOut(originalOut);

        assertEquals(expectedOutput, outputStream.toString());
    }
}