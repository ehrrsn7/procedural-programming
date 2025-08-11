## Assignment Notes

### 2.2 Designing Algorithms — Assignment Overview

#### Context

This unit introduces students to designing algorithms prior to coding, emphasizing the use of pseudocode and other planning tools. Students are expected to practice decomposing problems, applying pseudocode conventions, and determining the appropriate level of detail for effective algorithm design.

---

### Assignment 2.2: Pseudocode Exercises

For each section, students are required to write pseudocode to design the function before implementation. Pseudocode should be submitted according to the provided instructions.

---

#### Part 1: Temperature Conversion

**Pseudocode:**
```
MAIN
    PROMPT user for temperature in Fahrenheit
    tempF ← GET temperature from user
    tempC ← (5.0 / 9.0) * (tempF - 32.0)
    SET output to fixed with 0 decimal places
    DISPLAY "Celsius: " + tempC
END
```

---

#### Part 2: Child Tax Credit

**Pseudocode:**
```
MAIN
    PROMPT user for income
    income ← GET income from user
    PROMPT user for number of children
    numChildren ← GET number of children from user
    SET output to fixed with 2 decimal places
    DISPLAY "Child Tax Credit: $ "
    IF qualify(income) THEN
        DISPLAY 1000.0 * numChildren
    ELSE
        DISPLAY 0.0
END
```

---

#### Part 3: Cookie Monster

**Pseudocode:**
```
askForCookies
    numCookies ← 0
    WHILE numCookies < 4 DO
        DISPLAY "Daddy, how many cookies can I have? "
        numCookies ← GET number from user
    END WHILE
    DISPLAY "Thank you daddy!"
END
```

---

### JavaScript Pseudocode Writing Assignment

In this section, students practice designing algorithms using pseudocode before implementing them in JavaScript. Each exercise requires clear pseudocode that outlines the function logic, using standard pseudocode keywords (such as `IF`, `ELSE`, `WHILE`, `FOR`, `DISPLAY`, `GET`, etc.) and providing sufficient detail for straightforward translation into JavaScript.

#### Instructions

1. Read the problem description carefully.
2. Write pseudocode for the required function(s) using appropriate structure and keywords.
3. After completing the pseudocode, translate it into JavaScript code in `main.js`.
4. Test the code to ensure it meets the assignment requirements.

#### Example

**Problem:** Write a function that calculates the sum of two numbers entered by the user.

**Pseudocode:**
```
MAIN
    PROMPT user for first number
    num1 ← GET number from user
    PROMPT user for second number
    num2 ← GET number from user
    sum ← num1 + num2
    DISPLAY "Sum: " + sum
END
```

Students should follow this approach for each assignment part, submitting both pseudocode and JavaScript implementations as instructed.

---

### Author's Notes

<add critical additional information here>