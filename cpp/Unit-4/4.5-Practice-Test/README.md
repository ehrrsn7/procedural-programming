```
Procedural Programming in C++ | Unit 4 : Advanced Topics | Unit 4 Practice Test | Page 361
```
## Unit 4

# Unit 4 Practice Test

## Practice 4.2^

```
Sam has read that many programmers get paid by the number of lines of code they generate. Wanting to
maximize the size of his paycheck, he has decided to write a program to count the number of lines in a
given file.
```
## Problem

Write a program to perform the following tasks:

1. Attempt to gather the filename from the command line
2. If no filename is present, prompt the user for the filename
3. Loop through the file, counting the number of lines
4. Display the results using the correct tense for empty, 1, and more than one.

## Example

The user may specify the filename from the command line. Assume the file “example1.txt” has 2 lines:

**a.out exa** example1.txt has 2 lines. **mple1.txt** (^)
If no file is specified on the command line, then the program will prompt the user for a file. Assume the
file “example2.txt” has 1 line of text:
**a.out** Please enter the file name: (^) **example2.txt**
example2.txt has 1 line.
Note how “line” is singular. Finally, if the file is empty or non-existent, then the following message will
appear:
**a.out missing.txt** missing.txt is empty. (^)

## Grading

```
The test bed is:
testBed cs124/practice42 practice42.cpp
The sample solution is:
/home/cs124/tests/practice42.cpp
Continued on the next page
```

```
Page 362 | Unit 4 Practice Test | Unit 4: Advanced Topics | Procedural Programming in C++
```
## Unit

(^4)

## Practice 4.2^

```
Continued from previous page
Grading for Test4
Sample grading criteria:
```
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
Modularization
1 0%
Perfect cohesion
and coupling
No bugs exist in
calling functions,
though
modularization is
not perfect
Redundant
data passed
between
functions
A bug exists
passing
parameters or
calling a function
Only one
function used
Command line
10%
Input logic
"elegant”
Able to access the
filename from the
command line and
from a prompt
One bug An attempt was
made to accept
input from both
the command line
and from
prompts.
No attempt was
made to access
the command
line parameters
File
20%
"Good" and
perfect error
detection
Able to fetch all the
text from a file
One bug Elements of the
solution exist
No attempt was
made to read
from the file
Problem
Solving
3 0%
The most elegant
and efficient
solution was
found
Zero test bed
errors
Correct on at
least one test
case
Elements of the
solution are
present
No attempt was
made to count
all the words or
program failed
to compile
Handle tense
on output
1 0%
The most elegant
and efficient
solution was
found
All three cases
handled
One bug Logic exists to
attempt to detect
need for different
tenses
No attempt was
made to handle
tense
Programming
Style
2 0%
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
Code is readable,
but serious style
infractions
No evidence of
the principles of
"elements of
style" in the
program


```
