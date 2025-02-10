/***********************************************************************
 * This demo program is designed to:
 *      Demonstrate how to align multiple columns of numbers (money
 *      in this case) so they are pleasing to the eye
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * main()...
 ***********************************************************************/
int main()
{
   // format the output for money
   cout.setf(ios::fixed);     // no scientific notation
   cout.setf(ios::showpoint); // always show the decimal point
   cout.precision(2);         // unless you own a gas station, money
                              //    is formatted to two decimals
   
   // display the first row
   cout << "$"
        << setw(7) << 124.45
        << "\t$"
        << setw(7) << 321.31
        << endl;
   
   // display the second row
   cout << "$"
        << setw(7) << 1.74
        << "\t$"
        << setw(7) << 4.21
        << endl;

   // display the third row
   cout << "$"
        << setw(7) << 7539.12
        << "\t$"
        << setw(7) << 54.92
        << endl;

   return 0;
}
