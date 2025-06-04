using System;
using System.IO;
using Xunit;

namespace tests
{
    public class UnitTest1
    {
        [Fact]
        public void BudgetOutputIncludesIncome()
        {
            using var sw = new StringWriter();
            Console.SetOut(sw);

            assignment11.Program.Main(new string[] { });

            var output = sw.ToString();

            Assert.Contains("Income", output);
            Assert.Contains("$  1000.00", output);
            Assert.Contains("Delta", output);
            Assert.Contains("$    60.00", output);
        }
    }
}
