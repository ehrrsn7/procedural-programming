using System;
using System.IO;
using Xunit;

namespace tests
{
    public class UnitTest1
    {
        [Fact]
        public void Test1()
        {
            // Arrange
            var expected = "Hello, World!" + Environment.NewLine;

            using var sw = new StringWriter();
            Console.SetOut(sw);

            // Act
            assignment10.Program.Main(new string[] { });

            // Assert
            var actual = sw.ToString();
            Assert.Equal(expected, actual);
        }
    }
}
