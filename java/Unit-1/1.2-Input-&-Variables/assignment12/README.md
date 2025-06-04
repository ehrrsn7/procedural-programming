# Assignment 1.2

Write a program that prompts the user for his or her income and displays the result on the screen. There will be two parts:

### Get Income
The first part is code that prompts the user for their income. It will ask:
```txt
Your monthly income: 
```

> - There is **a tab** before “Your”.
> - There is **a single space** after the colon.
> - There is **no newline** after the prompt.

The user enters a float, e.g. `932.16`.

---

### Display

After the input, your program will display:
```cs
Your income is: $   932.16
```

> - There is a **tab** before the line.
> - There is **one space** after the colon and before the dollar sign.
> - The money is right-aligned using **9 spaces** after the `$`.

---

### Example

If user enters:
```txt
Your monthly income: 932.16
```
Program outputs:
```txt
Your income is: $   932.16
```
---

### Instructions

- Use `String.format()` to control spacing and alignment.
- Submit your assignment with the name **Assignment 12** in the header.
- Refer to **page 41** in the guide for formatting hints.