using System;
using System.IO;
using Xunit;

namespace assignment12tests
{
    public class UnitTest12
    {
        [Fact]
        public void TestOutput()
        {
            // Arrange
            string input = "932.16\n";
            string expectedOutput = "   Your income is: $   932.16\n";

            using var inputReader = new StringReader(input);
            using var outputWriter = new StringWriter();

            Console.SetIn(inputReader);
            Console.SetOut(outputWriter);

            // Act
            assignment12.Program.Main(Array.Empty<string>());

            // Assert// Assert
            string actual = outputWriter.ToString().Replace("\r\n", "\n");
            Assert.EndsWith(expectedOutput, actual);
        }
    }
}
