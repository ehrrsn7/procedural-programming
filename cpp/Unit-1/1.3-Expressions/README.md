Sure! Here’s the relevant section from Unit 1.3, transcribed and formatted in Markdown:

---

## Unit 1: Simple Programs

### 1.3 Expressions

Sam once spent a summer working as a cashier in a popular fast-food outlet. One of his responsibilities was to make change for customers when they paid with cash. While he enjoyed the mental exercise of doing the math in his head, he immediately started wondering how this could best be done with the computer. After a few iterations, he came up with a program to make light work of his most tedious task...

#### Objectives

By the end of this class, you will be able to:
- Represent simple equations in C++.
- Understand the differences between integer division and floating point division.
- See how to use the modulus operator to solve math and logic problems.

#### Prerequisites

Before reading this chapter, please make sure you are able to:
- Choose the best data-type to represent your data (Chapter 1.2).
- Declare a variable (Chapter 1.2).
- Display text and numbers on the screen (Chapter 1.1).

#### Overview

Computer programs perform mathematical operations much the way one would expect. There are a few differences, however, owing to the way computers store numbers. For example, there is no distinction between integers and floating point numbers in Algebra. This means that dividing one by two will yield a half. However, in C++, integers can't store the number 0.5 or 1/2. Also, a variable can update its value in C++ where in Algebra it remains constant through the entire equation. These challenges along with a few others makes performing math with C++ a little tricky.

In C++, mathematical equations are called expressions. An expression is a collection of values and operations that, when evaluated, result in a single value.

#### Evaluating Expressions

As you may recall from our earlier discussion of how computers work, a CPU can only perform elementary mathematical operations and these can only be done one at a time. This means that the compiler must break complex equations into simple ones for them to be evaluated correctly by the CPU. To perform this task, things are done in the following order:
1. Variables are replaced with the values they contain.
2. The order of operations is honored: parentheses first and assignment last.
3. When there is an integer being compared/computed with a float, it is converted to a float just before evaluation.

##### Step 1 - Variables are replaced with values

Every variable refers to a location of memory. This memory location is guaranteed to be filled with 1's and 0's. In other words, there is always a value in a variable and that value can always be accessed at any time. Sometimes the value is meaningless. Consider the following example:

```cpp
{
    int number;
    cout << number << endl;
}
```

In this case, the output is different every time because the variable `number` was never initialized. Since the variable was never initialized, the value is not predictable. Whoever last used that particular location in memory left data lying around. This means that there is some random collection of 1's and 0's in that location. This state is called uninitialized because the programmer never got around to assigning a value to the variable `number`. All this could be rectified with a simple:

```cpp
int number = 0;
```

The first step in the expression evaluation process is to substitute the variables in the expression with the values contained therein. Consider the following code:

```cpp
{
    int ageHumanYears = 4;
    int ageDogYears = ageHumanYears * 7;
}
```

In this example, the first step of evaluating the last statement is to substitute `ageHumanYears` with 4.

```cpp
int ageDogYears = 4 * 7;
```

##### Step 2 - Order of Operations

The order of operations for mathematical operators in C++ is:

| Operator | Description                                     |
|----------|-------------------------------------------------|
| ()       | Parentheses                                     |
| ++ --    | Increment, Decrement                            |
| * / %    | Multiply, Divide, Modulo                        |
| + -      | Addition, Subtraction                           |
| = += -=  | Assign, Add-on, Subtract-from                   |
| *= /= %= | Multiply onto, Divide from, Modulo from         |

This should be very familiar; it is similar to the order of operations for Algebra. There are, of course, a few differences:

- **Increment ++**: Because it is possible to change the value of a variable in C++, we have an operator designed specifically for the task. Consider the following code:

    ```cpp
    {
        int age = 10;
        age++;
        cout << age << endl;
        // the output is 11
    }
    ```

    In this example, the `age++` statement serves to add one to the current value of `age`. Of course, `age--` works in the opposite way. There are two flavors of the increment (and decrement) operators: increment before the expression is evaluated and increment after. To illustrate, consider the following example:

    ```cpp
    {
        int age = 10;
        cout << age++ << endl;
        // the output is 10 and the new value of age is 11
    }
    ```

    In this example, we increment the value of `age` after the expression is evaluated (as indicated by the `age++` rather than `++age` where we would evaluate before). Therefore, the output would be 10 although the value of `age` would be 11 at the end of execution. This would not be true with:

    ```cpp
    {
        int age = 10;
        cout << ++age << endl;
        // the output is 11 and the new value of age is 11
    }
    ```

    In this case, `age` is incremented before the expression is evaluated and the output would be 11. In short:

    - `x++`: When the `++` is after the variable, the increment occurs after the expression is evaluated.
    - `++x`: When the `++` is before the variable, the increment occurs before the expression is evaluated.

    ```cpp
    y = x++;
    // equivalent to
    y = x;
    x += 1;

    y = ++x;
    // equivalent to
    x += 1;
    y = x;
    ```

- **Multiplication \***: In C++ (and most other computer languages for that matter), the multiplication operator is an asterisk `*`. You cannot use the dot operator (ex: . ), the multiplication `x` (ex: X), or put a number next to a variable (ex: 7y) as you can in standard algebra notation.

    ```cpp
    {
        float answer1 = 1.2 * 2.3; // the value of answer1 is 2.76
        int answer2 = 2 * 3; // the value of answer2 is 6
    }
    ```

- **Division /**: Floating point division `/` behaves the way it does in mathematics. Integer division, on the other hand, does not. The evaluation of integer division is always an integer. In each case, the remainder is thrown away. To illustrate this, consider the following:

    ```cpp
    {
        int answer1 = 19 / 10;
        float answer2 = 19.0 / 10.0;
        cout << answer1 << endl // the output is 1
             << answer2 << endl; // the output is 1.9
    }
    ```

    In this case, the output of the first line is not 1.9 because the variable `answer1` cannot store a floating point value. When 19 is divided by 10, the result is 1 with a remainder of 9. Therefore, `answer1` will get the value 1 and the remainder is discarded. To get 1.9, we need to use floating point division.

- **Modulus %**: Recall that integer division drops the remainder of the division problem. What if you want to know the remainder? This is the purpose of the modulus operator `%`. Consider the following code:

    ```cpp
    {
        int remainder = 19 % 10;
        cout << remainder;
        // the output is 9
    }
    ```

    In this case, when you divide 19 by 10, the remainder is 9. Therefore, the value of `remainder` will be 9 in this case. For example, consider the following problem:

    ```cpp
    {
        int totalMinutes = 161;
        // The movie "Out of Africa" is 161 minutes
        int numHours = totalMinutes / 60;
        // The movie is 2 hours long...
        int numMinutes = totalMinutes % 60;
        // ... plus 41 minutes
    }
    ```

    This would result in:

    - `2 == 161 / 60`
    - `41 == 161 % 60`

##### Step 3 - Converting

The final step in evaluating an expression is to convert data from one type to another. This arises from the fact that you can't add an integer to a floating point number. You can add two `int`s or two `float`s, but not an `int` to a `float`. Consider the following code:

```cpp
cout << 4 + 3.2 << endl;
```

In this example, there are two possibilities: either convert the integer `4` into the float `4.0` or convert the float `3.2` into the integer `3`. C++ will always
