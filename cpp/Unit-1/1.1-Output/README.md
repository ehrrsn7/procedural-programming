Absolutely! Here is the text from "1.1 Output" transcribed to .md file format:

---

# Unit 1. Simple Programs

## 1.1 Output

Sam is sitting in the computer lab waiting for class to begin. He is bored, bored, bored! Just for kicks, he decides to dabble in ASCII-art. His first attempt is to reproduce his school logo:

```
 (
 _ 
_
)
_ 
/
_)(_
```

### Objectives

By the end of this class, you will be able to:

- Display text and numbers on the screen.
- Left-align and right-align text.
- Format numbers to a desired number of decimal places.

### Prerequisites

Before reading this section, please make sure you are able to:

- Type the code for a simple program (Chapter 0.2).
- Recite the major parts of a computer program (statements, headers, etc.) (Chapter 0.2).
- Use the provided tools to complete a homework assignment (Chapter 1.0).

### Overview of Output

There are two main methods for a computer to display output on the screen. The first is to draw the output with dots (pixels), lines, and rectangles. This is the dominant output method used in computer programs today. Any windowing operating system (such as Microsoft Windows or Apple Macintosh) favors programs using this method. While this does give the programmer maximum freedom to control what the output looks like, it is also difficult to program. There are dozens of drawing toolsets (OpenGL, DirectX, Win32 to name a few), each of which requires a lot of work to display simple messages.

The second method is to use streams. Streams are, in many ways, like a typewriter. An individual typing on a typewriter only needs to worry about the message that is to appear on the page. The typewriter itself knows how to render each letter and scroll the paper. A programmer using streams to display output specifies the text of the message as well as simple control commands (such as the end of the line, tabs, etc.). The operating system and other tools are left to handle the mechanics of getting the text to render on the screen. We will use stream output exclusively in CS 124.

### COUT

As previously discussed, computer programs are much like recipes: consisting of a list of instructions necessary to produce some output. These instructions are called statements. One of the fundamental statements in the C++ language is `cout`: the statement that puts text on the screen. The syntax of `cout` is:

```
cout stands for Console OUTput or putting text on the screen. This keyword appears at the beginning of each output statement.
When displaying generic text, we can write whatever we want as long as we include it in quotes.
cout << "CS 124" ;
Following cout and separated by a space on each side, the insertion operator ( << ) indicates that the text on the right-side ("CS 124" in this case) is to be sent to the keyword (cout in this case) on the left-side. If the insertion operator looks like an arrow, it is not a coincidence; data flows from the right-side ("CS 124") to the left-side (the screen or console).
The final component of a statement is the semicolon. This is required in all C++ statements. In many ways, this acts like a period in the English language.
When you put this all together the above statement says "Put the text "CS 124" on the screen."
```

### Displaying Numbers

Up to this point, all of our examples have been displaying text surrounded by double quotes. It is also possible to use `cout` to display numbers. Before doing this, we need to realize that computers treat integers (numbers without decimals) fundamentally differently than real numbers (numbers with decimals).

We can display an integer by placing the number after an insertion operator in a `cout` statement.

```
cout << 42;
```

Because this number is an integer, it will never be displayed with a decimal. On the other hand, if we are displaying a real number, then we add a decimal in the text:

```
cout << 3.14159;
```

In this example, the computer is not sure how many decimals of accuracy the programmer meant. To be clear on this point, it is useful to include the following code before displaying real numbers:

```
cout.setf(ios: : fixed); 
cout.setf(ios : : showpoint); 
cout.precision(2);
// no scientific notation please
// always show the decimal for real numbers 
// two digits after the decimal
```

The first statement means we never want to see the number displayed in scientific notation. Unless the number is very big or very small, most humans prefer to see numbers displayed in "fixed" notation. The second statement indicates that the decimal point is required in all presentations of the number. The final statement indicates that two digits to the right of the decimal point will be displayed. We can specify any number of digits of course. Note that there is some interplay between these three statements; usually we use them together. These settings are "sticky." This means that once the program has executed these lines of code, all real numbers will be treated this way until the setting is changed again.

### New Lines

Often the programmer would like to indicate that the end of a line has been reached. With a typewriter, one hits the Carriage Return to jump to the next line; it does not happen automatically. The same is true with stream output. The programmer indicates a newline is needed using two methods:

```
Both of these mean the same thing. They will output a new line to the screen.
cout << end1;
cout << "\n"
```

The first method is called `end1`, short for "end of line." This does not appear in quotes. Whenever a statement is executed with an `endl`, the cursor jumps down one line and moves to the left. The same occurs when the `"\n"` is encountered. Note that the `\n` must be in quotes. There can be many `\n`s in a single run of text.

Observe that we have two different ways (`endl` and `\n`) to do the same thing. Which is best?

| | Inside quotes | Not inside quotes |
|---|---|---|
| endl | `cout << "Hello"; cout << endl;` | `cout << 5; cout << endl;` |
| \n | `cout << "Hello\n";` | `cout << 5; cout << "\n";` |

### The Insertion Operator

As mentioned previously, the insertion operator (`<<`) is the C++ construct that allows the program to indicate which text is to be sent to the screen (through the `cout` keyword). It is also possible to send more than one item to the screen by stacking multiple insertion operators:

```
cout << "I am taking " << "CS 124 " << "this semester. \n";
```

By convention we typically align the insertion operators so they line up on the screen and are therefore easier to read. However, we may wish to put them in a single line:

```
cout << "I am taking " << "CS 124 " << "this semester. \n";
```

Both of these statements are exactly the same to the compiler; the difference lies in how readable they are to a human. There are three common reasons why one would want to use more than one insertion operator:

| Reason | Example | Explanation |
|---|---|---|
| Line Limit | `cout << "I want to make one " << "very long line much " << "more manageable. \n";` | Style checker limits the length of a line to 80 characters. It is often necessary to use multiple insertion operators to keep within this limit. |
| Mixing | `cout << "Mix text with " << 42 << " numbers. \n";` | Variables need to be outside quotes, requiring separate insertion operators for each one. |
| Comments | `cout << "CS124" << "-1-" // section << "Bob"; // prof.` | Comments are more meaningful when they are on the same line as to what they are clarifying. |

### Alignment

It is often desirable to make output characters align in columns or tables. This is particularly useful when working with columns of numbers. In these cases, we have two tools at our disposal: tabs and set-width.

#### Tabs

When the typewriter was invented, it quickly becomes apparent that typists needed a convenient way to align numbers into columns. To this end, the tab key (also known as the tabular key) was invented. The tab key would skip the carriage (or cursor in the computer world) to the next tab stop. In the case of mechanical typewriters, tab stops were set every half inch. This meant that hitting the tab key would move the cursor to the next half inch increment. Sometimes this meant moving forward one space, other times the full half inch. The tab command (`\t`) in `cout` behaves exactly the same way as a typewriter. Each time the `\t` is encountered in textual data, the cursor moves forward to the next 8 character increment. Consider the following text:

```
cout << "\tOne\n"; cout << "Deux\tDeux\n"; cout << "\t\tTres\n";
```

The output from these statements is:

```
  One
Deux  Deux
        Tres
```

Observe how the word "One" is indented eight spaces. This is because the cursor started in the 0 column and, when the tab key was encountered, skipped to the right to the next tab stop (the 8 column).

The first word "Deux" is left aligned because, after the `\n` is encountered in the previous line, the