# Unit 2 Project : Calendar Program

Create a calendar for any month of any year from 1753 forward. This is similar to the cal utility on the Linux

system. Prompt the user for the numeric month and year to be displayed as shown in the example below.

Your calculations to determine the first day of the month shall start with January 1, 1753 as a Monday. The

challenge here is to take into account leap years.

This project will be done in three phases:

##  Project 05 : Design the calendar program

##  Project 06 : Compute the offset for a given month and year

##  Project 07 : Display the calendar table for a given month and year

## Interface Design

There are three parts of the interface design: the output (that which is displayed on the screen during normal

operation), the input (that which the user provides), and the errors (when the user enters different data than

the program expects).

## Output

The following is a sample run of the program. The input is **underlined**.

```
Enter a month number: 1
Enter year: 1753
```
```
January, 1753
Su Mo Tu We Th Fr Sa
1 2 3 4 5 6
7 8 9 10 11 12 13
14 15 16 17 18 19 20
21 22 23 24 25 26 27
28 29 30 31
```
The table is formatted in the following way:


```
Page 210 | Project 2: Calendar Program | Unit 2: Design & Loops | Procedural Programming in C++
```
#### Unit

(^2)

#### Input

First the user will be prompted for the month number:

```
Enter a month number: 1
```
Next the user will be prompted for the year:

```
Enter year: 1990
```
#### Errors

```
When the program prompts the user for a month, only the values 1 through 12 are accepted. Any other input
will yield a re-prompt:
```
```
Enter a month number: 13
Month must be between 1 and 12.
Enter a month number: 0
Month must be between 1 and 12.
Enter a month number: 1
```
The same is true with years; the user input must be greater than 1752:

```
Enter year: 90
Year must be 1753 or later.
Enter year: 1990
```
**Project 05**

```
Write a structure chart for the calendar program. Make sure that all the functions exhibit the highest level of
cohesion and the lowest level of coupling.
```
On campus students are required to attach this rubric to your design document. Please self-grade.


```
Procedural Programming in C++ | Unit 2 : Design & Loops | Unit 2 Project : Calendar Program | Page 211
```
#### Unit 2

**Project 06**

The second part of the Calendar Program project (the first part being the structure part due earlier) is to write

the pseudocode for two functions: computeOffset() and displayTable().

#### 1. Write the pseudocode for the function computeOffset. This function will determine the day of the

```
week of the first day of the month by counting how many days have passed since the 1st of January,
1753 (which is a Monday and offset == 0). That number (numDays) divided by 7 will tell us how
many weeks have passed. The remainder will tell us the offset from Monday. For example, if the
month begins on a Thursday, then offset == 3. The prototype for the function is:
```
```
int computeOffset(int month, int year);
```
```
Please do not plagiarize this from the internet; you must use a loop to solve the problem. The output
for this function is the following:
```
**Day offset**

**Sunday** 6

**Monday** 0

**Tuesday** 1

**Wednesday** 2

**Thursday** 3

**Friday** 4

**Saturday** 5

#### 2. Write the pseudocode for the function displayTable. This function will take the number of days in a

```
month (numDays) and the offset (offset) as parameters and will display the calendar table. For example,
consider numDays == 30 and offset == 3. The output would be:
```
```
Su Mo Tu We Th Fr Sa
1 2 3
4 5 6 7 8 9 10
11 12 13 14 15 16 17
18 19 20 21 22 23 24
25 26 27 28 29 30
```
```
There are two problems you must solve: how to put the spaces before the first day of the month, and
how to put the newline character at the end of the week. The prototype of the function is:
```
```
void displayTable(int offset, int numDays);
```

```
Page 212 | Project 2: Calendar Program | Unit 2: Design & Loops | Procedural Programming in C++
```
#### Unit

(^2)
**Project 07**
The final part of the Calendar Program project is to write the code necessary to make the calendar appear on
the screen:
Enter a month number: **1**
Enter year: **1753**
January, 1753
Su Mo Tu We Th Fr Sa
1 2 3 4 5 6
7 8 9 10 11 12 13
14 15 16 17 18 19 20
21 22 23 24 25 26 27
28 29 30 31
A few hints:

####  Check the case where offset == 6 when the month begins with Sunday. July 2001 is an example of

```
such a month. You do not want to have a blank line between the column headers (the days of the
week) and the day numbers.
```
####  Check the case where the last day of the month is on a Saturday. March 2001 is an example of such

a month. You do not want a blank row at the bottom of the calendar.

####  Use the cal program built into the Linux system when you test the program by hand.

An executable version of the project is available at:

```
/home/cs124/projects/prj07.out
```
Please do the following:

#### 1. Start with the code written in Project 06.

#### 2. Fix any bugs that escaped your notice the first time through.

#### 3. Verify your solution with testBed:

```
testBed cs124/project07 project07.cpp
```
#### 4. Submit you code with "Project 07, Calendar" in the program header.
