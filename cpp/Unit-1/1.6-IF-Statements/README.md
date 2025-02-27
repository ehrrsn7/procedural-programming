Here is the content of section 1.6 "IF Statements" converted into Markdown:

```markdown
# 1.6 IF Statements

Sue has just received her third text message in the last minute. Not only are her best friends text-aholics, but it seems that new people are texting her every day. Sometimes she feels like she is swimming in a sea of text messages.  
*"If only I could filter them like I do my e-mail messages,"* thinks Sue as four new messages appear on her phone in quick succession. Deciding to put a stop to this madness, she writes a program to filter her text messages. This program features a series of IF statements, each containing a rule to route the messages to the appropriate channel.

## Objectives

By the end of this class, you will be able to:

- Create an IF statement to modify program flow.
- Recognize the pitfalls associated with IF statements.

## Prerequisites

Before reading this section, please make sure you are able to:

- Declare a Boolean variable (Chapter 1.5).
- Convert a logic problem into a Boolean expression (Chapter 1.5).
- Recite the order of operations (Chapter 1.5).

## Overview

IF statements allow the program to choose between two courses of action depending on the result of a Boolean expression. In some cases, the options are **“action” and “no action.”** In other cases, the options may be **“action A” or “action B.”**  
In each of these cases, the IF statement is the tool of choice.

## Action/No-Action

The first flavor of the IF statement is represented with the following syntax:

```cpp
if (<Boolean expression>)
   <body statement>;
```

For example:

```cpp
if (assignmentLate == true)
   assignmentGrade = 0;
```

The **Boolean expression**, also called the **controlling expression**, determines whether the statements inside the body of the IF statement are executed. If the Boolean expression evaluates to `true`, then control enters the body of the IF statement. Otherwise, the body of the IF statement is skipped.

## Action-A/Action-B

The second flavor of the IF statement is represented with the following syntax:

```cpp
if (<Boolean expression>)
   <body statement>;
else
   <body statement>;
```

For example:

```cpp
if (grade >= 60)
   cout << "Great job! You passed!\n";
else
   cout << "I will see you again next semester...\n";
```

Much like the Action/No-Action IF statement, the Boolean expression determines whether the first set of statements is executed or the second.  
The first statement is often called the **“true condition”**, and the second the **“else condition.”**  

Observe how:
- The `else` component aligns with the `if`.
- Both the true-condition and the else-condition are indented the same (three additional spaces).
- There is no semicolon after the Boolean expression nor after the `else`.

## Compound Statements

Frequently, we want to have more than one statement inside the body of the IF. Instead of duplicating the IF statement, we use `{}` to surround all the statements inside the body:

```cpp
if (!(classGrade >= 60))
{
   classFail = true;
   classRetake = true;
   studentHappy = false;
}
```

Each time an additional indentation is added, three more spaces are used.

## Nested Statements

Often, we want to put an IF statement inside another IF statement. This is called a **nested statement**:

```cpp
if (grade >= 90 && grade <= 100)
{
   cout << "A";
   if (grade <= 93)
      cout << "-";
}
```

Observe:
- The second `cout` statement is indented nine spaces, three more than the inner `if`, and six more than the outer `if`.
- Excessive nesting (more than 12 spaces) reduces human readability.

## Multi-Way IF Statements

An IF statement can only differentiate between two options. However, often the program requires more than two options. This can be addressed by **nesting IF statements**:

```cpp
if (option == 1)
   cout << "Good!";
else
{
   if (option == 2)
      cout << "Better";
   else
      cout << "Best!";
}
```

A preferred style for readability:

```cpp
if (option == 1)
   cout << "Good!";
else if (option == 2)
   cout << "Better";
else
   cout << "Best!";
```

## Common Pitfalls

### `=` Instead of `==`

```cpp
bool fail = false;
if (fail = true)  // PITFALL: Assignment `=` used instead of `==`
   cout << "You failed!\n";
```

- The condition mistakenly **assigns** `true` to `fail` instead of checking equivalence.
- This means `fail` will always be `true`, leading to incorrect program behavior.

### Extra Semicolon

```cpp
if (false);  // PITFALL: Extra semicolon signifies an empty body
   cout << "False!\n";
```

- The semicolon terminates the IF statement prematurely, making the Boolean condition useless.
- The `cout` statement executes **regardless** of the condition.

### Missing `{}` for Compound Statements

```cpp
if (classGrade < 60)
   classFail = true;
   classRetake = true;  // PITFALL: Missing `{}` makes this always execute
   studentHappy = false;
```

- This is equivalent to:

```cpp
if (classGrade < 60)
   classFail = true;
classRetake = true;
studentHappy = false;
```

- Only `classFail = true;` is part of the IF statement.  
- Always use `{}` when multiple statements should execute inside an IF.

## Example 1.6 – GPA Validator

**Problem:**  
Write a program that prompts the user for their GPA and displays whether the value is in the valid range.

```cpp
bool validGpa(float gpa)
{
   if (gpa > 4.0 || gpa < 0.0)
      return false;
   else
      return true;
}
```

```cpp
int main()
{
   float gpa;

   cout << "Please enter your GPA: ";
   cin >> gpa;

   if (!validGpa(gpa))
      cout << "Your GPA is not in a valid range\n";

   return 0;
}
```

### Challenge:
Modify the IF statement in `main()` to display a message when the GPA is valid.

---

**End of Section 1.6**
```

This Markdown preserves the original structure, code examples, and formatting of the document. Let me know if you need any modifications!
