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
   std::cout << "Item" << std::setw(10) << "Price" << std::endl;
   std::cout.flush(); // force flush
   std::cerr << "This always goes to the error stream" << std::endl;
   std::cerr.flush(); // force flush


   return 0;
}

/**********************************************************************
Windows: Running the program

```PowerShell
g++ alignMoney.cpp
.\a.exe
```

Windows: Testing the program

```PowerShell
g++ tests\test.cpp -o tests\test.exe
.\tests\test.exe
```

Running the program

```sh
g++ alignMoney.cpp
./a.out
```

Testing the program

```sh
g++ tests/test.cpp -o tests/test
./tests/test
```

 ***********************************************************************/
