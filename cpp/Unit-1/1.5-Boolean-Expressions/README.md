Here’s the relevant section from Unit 1.5, transcribed and formatted in Markdown with dropdowns for easier navigation:

---

## Unit 1: Simple Programs

<details>
  <summary>### 1.5 Boolean Expressions</summary>

Sam is reading his scriptures one day and comes across the following verse from 2 Corinthians:

Every man according as he purposeth in his heart, so let him give; not grudgingly, or of necessity: for God loveth a Cheerful giver. (2 Corinthians 9:7)

Now he wonders: is his offering acceptable to the Lord? To address this issue, he reduces the scripture to a Boolean expression.

#### Objectives

By the end of this class, you will be able to:
- Declare a Boolean variable.
- Convert a logic problem into a Boolean expression.
- Recite the order of operations.

#### Prerequisites

Before reading this section, please make sure you are able to:
- Represent simple equations in C++ (Chapter 1.3).
- Choose the best data-type to represent your data (Chapter 1.2).

#### Overview

Boolean algebra is a way to express logical statements mathematically. This is important because virtually all programs need to have decision making logic. There are three parts to Boolean algebra: Boolean variables (variables enabling the programmer to store the results of Boolean expressions), Boolean operators (operations that can be performed on Boolean variables), and Comparison operators (allowing the programmer to convert a number to a Boolean value by comparing it to some value). The most common operators are:

| Math | English | C++       | Example              |
|------|---------|-----------|----------------------|
| ~    | Not     | !         | ! true               |
| ˄    | And     | &&        | true && false        |
| ˅    | Or      | \|\|      | true \|\| false      |
| =    | Equals  | ==        | x + 5 == 42 / 2      |
| ≠    | Not Equals | !=     | graduated != true    |
| <    | Less than | <       | age < 16             |
| ≤    | Less than or equal to | <= | timeNow <= timeLimit |
| >    | Greater than | >    | age > 65             |
| ≥    | Greater than or equal to | >= | grade >= 90 |

#### And, Or, and Not

The three main logical operators we use in computer programming are And, Or, and Not. These, it turns out, are also commonly used in our spoken language as well. For example, consider the following scripture:

Every man according as he purposeth in his heart, so let him give; not grudgingly, or of necessity: for God loveth a Cheerful giver. (2 Corinthians 9:7)

This can be reduced to the following expression:

acceptable = inHisHeart and not (grudgingly or necessity)

In C++, this will be rendered as:

`bool isAcceptable = isFromHisHeart && ! (isGrudgingly || isOfNecessity);`

This Boolean expression has all three components: And, Or, and Not.

##### AND

The Boolean operator AND evaluates to true only if the left-side and the right-side are both true. If either are false, the expression evaluates to false. Consider the following statement containing a Boolean AND expression:

`bool answer = leftSide && rightSide;`

This can be represented with a truth-table:

| Left-side | AND    | true  | false |
|-----------|--------|-------|-------|
| true      | true   | true  | false |
| false     | false  | false | false |

The AND operator is picky: it evaluates to true only when both sides are true.

##### OR

The Boolean operator OR evaluates to true if either the left-side or the right-side are true. If both are false, the expression evaluates to false. Consider the following statement containing a Boolean OR expression:

`bool answer = leftSide || rightSide;`

The corresponding truth-table is:

| Left-side | OR     | true  | false |
|-----------|--------|-------|-------|
| true      | true   | true  | true  |
| false     | true   | false | true  |

The OR operator is generous: it evaluates to true when either condition is met.

##### NOT

The Boolean operator NOT is a unary operator: only one operand is needed. In other words, it only operates on the value to the right of the operator. NOT evaluates to true when the right-side is false and evaluates to false with the right-side is true. Consider the following statement containing a Boolean NOT expression:

`bool wrong = ! right;`

The corresponding truth-table is:

| NOT       | true  | false |
|-----------|-------|-------|
| Right-side| false | true  |

The NOT operator can be thought of as the "opposite operator."

##### Example

Back to our scripture from the beginning:

Every man according as he purposeth in his heart, so let him give; not grudgingly, or of necessity: for God loveth a Cheerful giver. (2 Corinthians 9:7)

This, as we discussed, is the same as:

`bool isAcceptable = isFromHisHeart && ! (isGrudgingly || isOfNecessity);`

In this case, Sam is giving from his heart (isFromHisHeart = true) and is not giving of necessity (isOfNecessity = false). Unfortunately, he is a bit resentful (isGrudgingly = true). Evaluation is:
1. bool isAcceptable = isFromHisHeart && ! (isGrudgingly || isOfNecessity);
2. bool isAcceptable = true && ! (true || false); // replace variables with values
3. bool isAcceptable = true && ! (true); // true || false -- > true
4. bool isAcceptable = true && false; // ! true -- > false
5. bool isAcceptable = false; // true && false -- > false

Thus we can see that Sam's offering is not acceptable to the Lord. The grudging feelings have wiped out all the virtue from his sacrifice.

##### Comparison Operators

Boolean algebra only works with Boolean values, values that evaluate to either true or false. Often times we need to make logical decisions based on values that are numeric. Comparison operators allow us to make these conversions.

###### Equivalence

The first class of comparison operators consists of statements of equivalence. There are two such operators: equivalence (==) and inequality (!=). These operators will determine whether the values are the same or not. Consider the following code:

`int grade = 100; bool isPerfectScore = (grade == 100);`

In this example, the Boolean variable isPerfectScore will evaluate to true only when grade is 100%. If grade is any other value (including 101%), isPerfectScore will evaluate to false. It is also possible to tell if two values are not the same:

`int numStudents = 21; bool isClassHeldToday = (numStudents != 0);`

Here we can see that we should go to class today. As long as the number of students attending class (numStudents) does not equal zero, class is held.

###### Relative Operators

The final class of comparison operators performs relative (not absolute) evaluations. These are greater than (>), less than (<), greater than or equal to (>=), and less than or equal to (<=). Consider the following example using integers:

`int numBoys = 6; int numGirls = 8; bool isMoreGirls = (numGirls > numBoys);`

This works in much the same way when we compare floating point numbers. Note that since floating point numbers (float, double, long double) are approximations, there is little difference between `>` and `>=`.

`float grade = 82.5; bool hasPassedCS124 = (grade >= 60.0); // passed greater than or equal to 60%`

Finally, we can even use relative operators with chars. In these cases, it is important to remember that each letter in the ASCII table corresponds to a number. While we need not memorize the ASCII table, it is useful to remember that the letters are alphabetical and that uppercase letters are before lowercase letters:

`char letterGrade = 'B' ; bool goodGrade = ('C' >= letterGrade);`

##### Demo - Decision Function

This example will demonstrate how to write a function to help make a decision. This will be a binary decision (choosing between two options) so the return type will be a bool.

**Problem**

Write a program to compute whether a user qualifies for the child tax credit. The rule states you qualify if you make less than $110,000 a year (the actual rule is quite a bit more complex, of course!). Note that you either qualify or you don't: there are only two possible outcomes. If you do quality, then the credit is $1,000 per child. If you don't, no tax credit is awarded.

`What is your income: 115000.00`
`How many children? 2`
`Child Tax Credit: $ 0.00`

Observe how the name of the function implies what true means. In other words, if qualify() returns true, then the user qualifies. If qualify() returns false, then the user doesn't. Always make sure the name of the function implies what true means when working with a bool function.

The next part is computing the credit to be awarded. This will require an IF statement which will be discussed next chapter.

`if (qualify(income))`
`cout << 1000.00 * (float)numChildren << endl;`
`else`
`cout << 
