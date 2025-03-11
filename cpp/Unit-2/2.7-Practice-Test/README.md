# Unit 2 Practice Test

## Practice 2.1^

```
Mike’s teacher told his class that a flipped coin lands on “heads” half the time and “tails” the other half.
“That means that if I flip a coin 100 times, it should land on heads exactly fifty times!” said Mike. Mike’s
teacher knows that the law of probability does not quite work that way. To demonstrate this principle, she
decides to write a program.
```
## Program

```
Write a function to simulate a coin flip, returning true if the coin lands on “heads” and false if it lands on
“tails.” Next, prompt the user for how many trials will be needed for the experiment. Finally, display how
many “heads” and “tails” where recorded in the experiment.
```
## Example

User input is **underlined**.

```
How many coin flips for this experiment: 100
There were 49 heads.
There were 51 tails.
```
## Assignment

Please:

##  Start from the standard template we use for homework assignments:

```
/home/cs124/tests/templateTest2.cpp
```
##  Make sure your professor’s name is in the program header.

##  Run test bed with

```
testBed cs124/practice21 test2.cpp
```
##  Run style checker

Note that the following code might come in handy:

```
#include <stdlib.h> // needed for the rand(), srand()
#include <ctime> // needed for the time function
int main(int argc, char **argv)
{
// this code is necessary to set up the random number generator. If
// your program uses a random number generator, you will need this
// code. Otherwise, you can safely delete it. Note: this must go in main()
srand(argc == 1? time(NULL) : (int)argv[1][1]);
```
```
// this code will actually generate a random number between 0 and 999
cout << rand() % 1000 << endl;
}
```
```
Continued on the next page
```

```
Page 208 | Unit 2 Practice Test | Unit 2: Design & Loops | Procedural Programming in C++
```
#### Unit

(^2)

#### Practice 2.1^

```
Continued from previous page
```
**Grading for Test2**

Sample grading criteria:

(^) Exceptional
100%
Good
90%
Acceptable
70%
Developing
50%
Missing
0%
Expressions
10%
The expression
for the equation
is elegant and
easy to verify
The expression
correctly computes
the equation
One bug exists Two or more
bugs exist
The expression
is missing
Modularization
20%
Functional
cohesion and
loose coupling is
used throughout
Zero syntax errors in
the use of functions,
but room exits for
improvements in
modularization
Data
incorrectly
passed
between
functions
At least one bug
in the way a
function is
defined or
called
All the code
exists in one
function
Loop
4 0%
The loop is both
elegant and
efficient
The loop is
syntactically correct
and used correctly
The loop is
syntactically
correct or is
used correctly
Elements of the
solution are
present
No attempt
was made to
use a loop
Output
2 0%
Zero test bed
errors
Looks the same on
screen, but minor test
bed errors
One major test
bed error
The program
compiles and
elements of the
solution exist
Program
output does
not resemble
the problem or
fails to compile
Style
1 0%
Well
commented,
meaningful
variable names,
effective use of
blank lines
Zero style checker
errors
One or two
minor style
checker errors
Code is
readable, but
serious style
infractions
No evidence of
the principles
of elements of
style in the
program
Solution available at:
/home/cs124/tests/practice21.cpp


```
