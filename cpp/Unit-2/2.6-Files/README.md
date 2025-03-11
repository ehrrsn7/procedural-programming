Page 200 | 2.6 Files | Unit 2: Design & Loops | Procedural Programming in C++
```
#### Unit

(^2)

#### Example 2.6 – Read Data^

#### Demo

```
This example will demonstrate how to read a small amount of data from a file. This will include two
data types (a string and an integer). All error checking will be performed.
```
(^)

#### Problem

Consider the following file ( 2 - 6 - readData.txt):

```
Sue 19
```
Read the file and display the results on the screen.

```
What is the filename? 2 - 6 - readData.txt
The user Sue is 19 years old
```
(^)

#### Solution

The man work is performed by the read() function, taking a filename as a parameter.

```
bool read(char fileName[]) // filename we will read from
{
// open the file for reading
ifstream fin(fileName); // connect to fileName
if (fin.fail()) // never forget to check for errors
{
cout << "Unable to open file " // tell the user what happened
<< fileName << endl;
return false; // return and report
}
```
```
// do the work
char userName[256];
int userAge;
fin >> userName >> userAge; // get two pieces of data at once
if (fin.fail())
{
cout << "Unable to read name and age from "
<< fileName << endl;
return false;
}
```
```
// user-friendly display
cout << "The user " // display the data
<< userName
<< " is "
<< userAge << " years old\n";
```
```
// all done
fin.close(); // don’t forget to close the file
return true; // return and report
}
```
(^)

#### Challenge

```
As a challenge, can you change the above program to accommodate the user’s GPA. This will mean that
there are three items in the file:
```
```
Sue 19 3.95
```
(^)

#### See Also

The complete solution is available at 2 - 6 - readData.cpp or:

```
/home/cs124/examples/2- 6 - readData.cpp
```

```
Procedural Programming in C++ | Unit 2 : Design & Loops | 2.6 Files | Page 201
```
#### Unit 2

#### Example 2.6 – Read List^

#### Demo

```
This example will demonstrate how to read large amounts of data from a file. In this case, the file
consists of a list of numbers. The program does not know the size of the list at compile time.
```
(^)

#### Problem

Write a program to sum all the numbers in a file. The numbers are in the following format:

```
34
25
10
43
```
The program will prompt the user for the filename and display the sum:

```
What is the filename: 2 - 6 - readList.txt
The sum is: 112
```
(^)

#### Solution

```
The function sumData() does all the work in this example. It is important to note that the program does
not need to remember all the files read from the file. Once the value is added to the sum variable, then
it can be ignored.
```
```
int sumData(char fileName[])
{
// open the file
ifstream fin(fileName);
if (fin.fail())
return 0; // some error message
```
```
// read the data
int data; // always need a variable to store the data
int sum = 0; // don.t forget to initialize the variable
while (fin >> data) // read: “while there was not an error”
sum += data; // do the work
```
```
// close the stream
fin.close();
return sum;
}
```
(^)

#### Challenge

```
See if you can modify the above program (and the file that it reads from) to work with floating point
numbers.
```
(^)

#### See Also

The complete solution is available at 2 - 6 - readList.cpp or:

```
/home/cs124/examples/ 2 - 6 - readList.cpp
```

```
Page 202 | 2.6 Files | Unit 2: Design & Loops | Procedural Programming in C++
```
#### Unit

(^2)

#### Example 2.6 – Round Trip^

#### Demo

```
A common scenario is to save data to a file then read the data back again next time the program is run.
We call this “round-trip” because the data is preserved through a write/read cycle. This program will
demonstrate that process.
```
(^)

#### Problem

Consider a file consisting of a single floating point number:

```
30.36
```
```
Write a program to read the file, prompt the user for a value to add to the value, and write the updated
value back to the file.
```
```
Account balance: $30.36
Change: $ 5.20
New balance: $35.56
```
(^)

#### Solution

First, the program will read the balance from a file. If no balance is found, then return 0.0:

```
float getBalance()
{
// open the file
ifstream fin(FILENAME); // the filename is constant because
if (fin.fail()) // it needs to be same every time
return 0.0; // if no file found, start at $0.00
```
```
// read the data
float value = 0.0;
fin >> value; // read the old value
if (fin.fail()) // if we cannot read this value for any
return 0.0; // reason, return $0.00
```
```
// close and return the data
fin.close();
return value; // send the value back to main()
}
```
```
Then, after the user has been prompted for a new value and the balance has been updated, the new
balance is written to the same file.
```
```
void writeBalance(float balance)
{
// open the file for writing
ofstream fout(FILENAME); // make sure it is the same file as
... // we used for getBalance()
```
```
// write the data
fout.precision(2); // format fout for money just like we
fout.setf(ios::fixed); // would do for cout.
fout.setf(ios::showpoint);
fout << balance << endl; // it is “good form” to end with endl
```
```
...
}
```
(^)

#### See Also

The complete solution is available at 2 - 6 - roundTrip.cpp or:

```
/home/cs124/examples/2- 6 - roundTrip.cpp
```

```
Procedural Programming in C++ | Unit 2 : Design & Loops | 2.6 Files | Page 203
```
#### Unit 2

#### Problem 1^

What is in the file “data.txt”?

```
void writeData(int n)
{
ofstream fout;
fout.open("data.txt");
```
```
for (int i = 0; i < n; i++)
fout << i * 2 << endl;
```
```
fout.close();
return;
}
```
```
int main()
{
writeData(4);
```
```
return 0;
}
```
Answer:

```
Please see page 193 for a hint.
```
#### Problem 2^

Given the following function:

```
bool writeFile(char fileName[])
{
ofstream fout;
fout.open(fileName);
```
```
fout << "Hello World!\n";
```
```
fout.close();
```
```
return true;
}
```
Which would **not** cause the program to fail?

```
writeFile(data.txt);
```
```
writeFile("");
```
```
writeFile(10);
```
```
writeFile("data.txt");
```
```
Please see page 193 for a hint.
```

```
Page 204 | 2.6 Files | Unit 2: Design & Loops | Procedural Programming in C++
```
#### Unit

(^2)

#### Problem 3^

Write a function to put the numbers 1-10 in a file:

####  Call the function numbers()

####  Pass the file name in as a parameter

####  Do error checking

Answer:

```
Please see page 193 for a hint.
```
#### Problem 4^

What is the best name for this function?

```
void mystery(char f1[], char f2[])
{
ofstream fout;
ifstream fin;
```
```
fin.open(f1);
fout.open(f2);
```
```
char text[256];
while (fin.getline(text, 256))
fout << text << endl;
```
```
fin.close();
fout.close();
```
```
return;
}
```
Answer:

____________________________________________________________________________________________

```
Please see page 196 for a hint.
```

```
Procedural Programming in C++ | Unit 2 : Design & Loops | 2.6 Files | Page 205
```
#### Unit 2

#### Problem 5^

Given the following file (grades.txt) in the format <name> <score>:

```
Jack 83
John 97
Jill 56
Jake 82
Jane 99
```
Write a function to read the data and display the output on the screen. Name the function read().

```
Please see page 196 for a hint.
```
#### Problem 6^

Write a function to:

####  Open a file and read a number. Display the number to the user.

####  Prompt the user for a new number.

####  Save that number to the same file and quit.

```
The old number is "42". What is the new number? 104
```
Answer:

```
Please see page 202 for a hint.
```

```
Page 206 | 2.6 Files | Unit 2: Design & Loops | Procedural Programming in C++
```
#### Unit

(^2)

#### Assignment 2.6^

```
Please write a program to read 10 grades from a file and display the average. This will include the functions
getFileName(), displayAverage() and readFile():
```
#### getFilename()

This function will prompt the user for the name of the file and return it. The prototype is:

```
void getFileName(char fileName[]);
```
```
Note that we don’t return text the way we do integers or floats. Instead, we pass it as a parameter. We will
learn more how this works in Section 3.
```
#### readFile()

This function will read the file and return the average score of the ten values. The prototype is:

```
float readFile(char fileName[]);
```
```
Hint : make sure you only read ten values. If there are more or less in the file, then the function must report
an error. Display the following message if there is a problem with the file:
```
```
Error reading file "grades.txt"
```
#### display()

This function will display the average score to zero decimals of accuracy (rounded). The prototype is:

```
void display(float average);
```
**Example**

Consider a file called grades.txt (which you can create with emacs) that has the following data in it:

```
90 86 95 76 92 83 100 87 91 88
```
When the program is executed, then the following output is displayed:

```
Please enter the filename: grades.txt
Average Grade: 8 9 %
```
**Assignment**

The test bed is available at:

```
testBed cs124/assign26 assignment26.cpp
```
Don’t forget to submit your assignment with the name “Assignment 26” in the header.

```
Please see page 201 for a hint.
```
main

readFile display

fileName average

getFileName


```
Procedural Programming in C++ | Unit 2 : Design & Loops | Unit 2 Practice Test | Page 207
```
