/***********************************************************************
 * alignMoney.js
 * Description:
 *      Demonstrate how to align multiple columns of numbers (money
 *      in this case) so they are pleasing to the eye
 * Author:
 *      <insert your name>
 * Source:
 *      Elijah Harrison
 *      James Helfrich
 ************************************************************************/

/***********************************************************************
 * main()...
 ************************************************************************/
export default function alignMoney() {
   // format the output for money
   const print = (txt) => process.stdout.write(txt);
   const fixed = (num) => num.toFixed(2);

   // display the first row
   const row1 = "$" +
      fixed(124.45).padStart(7) +
      "\t$" +
      fixed(321.31).padStart(7) +
      "\n";
   print(row1);

   // display the second row
   const row2 = "$" +
      fixed(1.74).padStart(7) +
      "\t$" +
      fixed(4.21).padStart(7) +
      "\n";
   print(row2);

   // display the third row
   const row3 = "$" +
      fixed(7539.12).padStart(7) +
      "\t$" +
      fixed(54.92).padStart(7) +
      "\n";
   print(row3);
}

alignMoney();
