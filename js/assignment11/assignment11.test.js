import { expect, describe, it, vi } from "vitest";
import main from "./assignment11.js";

describe("main", () => {
   it("Should print the correct output to the console", () => {
      let output = "";
      const originalWrite = process.stdout.write;

      // Override process.stdout.write to capture the output
      process.stdout.write = (str) => {
         output += str;
         return true;
      };

      main();

      const expectedOutput = [
         "\tItem           Projected\n",
         "\t=============  ==========\n",
         "\tIncome         $  1000.00\n",
         "\tTaxes          $   100.00\n",
         "\tTithing        $   100.00\n",
         "\tLiving         $   650.00\n",
         "\tOther          $    90.00\n",
         "\t=============  ==========\n",
         "\tDelta          $    60.00\n"
      ].join("");

      // Restore the original process.stdout.write
      process.stdout.write = originalWrite;

      expect(output).toBe(expectedOutput);
   });
});