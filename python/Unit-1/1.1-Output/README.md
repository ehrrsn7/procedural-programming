<a href="../1.0-First-Program/README.md">Back to Unit 1.0</a>

# Unit 1. Simple Programs

## 1.1 Output

Sam is sitting in the computer lab waiting for class to begin. He is bored, bored, bored! Just for kicks, he decides to dabble in ASCII-art. His first attempt is to reproduce his school logo:

```
 ____  _  _  __  __       _____ 
(  _ \( \/ )(  )(  )     (_   _)
 | _ < \  /  )(__)(   -   _) (_ 
(____/ (__) (______)     (_____) 
```

### Objectives

By the end of this class, you will be able to:

- Display text and numbers on the screen.
- Left-align and right-align text.
- Format numbers to a desired number of decimal places.

### Prerequisites

Before reading this section, please make sure you are able to:

- Type the code for a simple program (Chapter 0.2).
- Recite the major parts of a computer program (statements, docstrings, etc.) (Chapter 0.2).
- Use the provided tools to complete a homework assignment (Chapter 1.0).

### Overview of Output

There are two main methods for a computer to display output on the screen. The first is to draw the output with dots (pixels), lines, and rectangles. This is the dominant output method used in computer programs today. Any windowing operating system (such as Microsoft Windows or Apple Macintosh) favors programs using this method. While this does give the programmer maximum freedom to control what the output looks like, it is also difficult to program. There are dozens of drawing toolsets (OpenGL, DirectX, Win32 to name a few), each of which requires a lot of work to display simple messages.

The second method is to use streams. Streams are, in many ways, like a typewriter. An individual typing on a typewriter only needs to worry about the message that is to appear on the page. The typewriter itself knows how to render each letter and scroll the paper. A programmer using streams to display output specifies the text of the message as well as simple control commands (such as the end of the line, tabs, etc.). The operating system and other tools are left to handle the mechanics of getting the text to render on the screen. We will use stream output exclusively in CS 124.

<p class="footer" style="
  text-align: left;
  font-size: .75em;">
<br>
<br>
<br>
<br>
<br>
<strong>Page 24</strong>
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.1 Output
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Procedural Programming in Python 
</p>

<div style="page-break-after: always;"></div>

### PRINT

As previously discussed, computer programs are much like recipes: consisting of a list of instructions necessary to produce some output. These instructions are called statements. One of the fundamental statements in the Python language is `print`: the statement that puts text on the screen. The syntax of `print` is:

<table>
<tbody>
<tr>
<td style="background: #dffffb">
<code>print()</code> is the Python function for displaying output to the screen. This function is called with the text or value you want to display as its argument.
</td>
<td width=0><!--Blank Cell--></td>
<td style="background: #ffeddf">
When displaying generic text, we can write whatever we want as long as we include it in quotes.
<td>
</tr>
</tbody>
</table>

<pre><code><span style="background: #dffffb">print(</span><span style="background: #ffeddf">"CS"</span><span style="background: #dfffeb">, </span><span style="background: #ffeddf">"124"<span style="background: #dffffb">)</span></span><span style="background: #ffdff8"> </span></code></pre>

<table>
<tbody>
<tr>
<td style="background: #dfffeb">
You can display multiple items by separating them with commas inside the `print()` function. Python will automatically insert spaces between them.
</td>
<td width=0><!--Blank Cell--></td>
<td style="background: #ffdff8">
Statements in Python do not require a semicolon at the end. Each line is a statement by itself.
<td>
</tr>
</tbody>
</table>

When you put this all together the above statement says "Put the text '`CS 124`' on the screen."

### Displaying Numbers

Up to this point, all of our examples have been displaying text surrounded by double quotes. It is also possible to use `print()` to display numbers. Python treats integers (numbers without decimals) and floats (numbers with decimals) differently, but both can be displayed easily.

We can display an integer by passing the number to `print()`:

```
print(42)
```

A real number (float) can be displayed the same way:

```
print(3.14159)
```

To control the number of decimal places, use formatted strings:

```python
print(f"{3.14159:.2f}")
```

This will display `3.14`. You can use this formatting for variables as well:

```python
value = 3.14159
print(f"{value:.2f}")
```

### New Lines

Often the programmer would like to indicate that the end of a line has been reached. In Python, the `print()` function automatically adds a newline at the end of each call. If you want to avoid a newline, you can use the `end` parameter:

```python
print("Hello", end="")  # No newline at the end
```

To add extra newlines, simply call `print()` with no arguments or include `\n` in your string:

```python
print("Hello\nWorld")
print()
```

### Tabs and Alignment

Tabs can be added using the escape sequence `\t`:

```python
print("\tOne")
print("Deux\tDeux")
print("\t\tTres")
```

For aligning numbers and text, use formatted strings:

```python
print(f"${124.45:>9.2f}\t${321.31:>9.2f}")
print(f"${1.74:>9.2f}\t${4.21:>9.2f}")
print(f"${7439.12:>9.2f}\t${54.92:>9.2f}")
```

This will right-align the numbers in a field of 9 spaces, similar to `setw()` in C++.

### Special Characters

To display special characters like quotes or backslashes, use escape sequences:

```python
print("quote mark: \"    newline: \\n")
```

Common escape sequences in Python:

| Name         | Character |
|--------------|-----------|
| New Line     | `\n`      |
| Tab          | `\t`      |
| Backslash    | `\\`      |
| Double Quote | `\"`      |
| Single Quote | `\'`      |

### Example 1.1 – Money Alignment

This example will demonstrate how to use tabs and alignment to display money in columns.

```python
print(f"${124.45:>9.2f}\t${321.31:>9.2f}")
print(f"${1.74:>9.2f}\t${4.21:>9.2f}")
print(f"${7439.12:>9.2f}\t${54.92:>9.2f}")
```

Output:

```
$   124.45	$   321.31
$     1.74	$     4.21
$  7439.12	$    54.92
```

#### Challenge

As a challenge, try to increase the width of each column from 9 spaces to 12. Can you add a third column of numbers? What happens when the numbers are wider than the columns?

### Example 1.1 – Escape Sequences

This example will demonstrate how to display special characters on the screen using escape sequences.

```python
print("The escape sequences are:")
print("\tNewline  \\n")
print("\tTab      \\t")
print("\tSlash    \\\\")
print("\tSQuote   \\'")
print('\tDQuote   \\"')
```

Output:

```
The escape sequences are:
        Newline  \n
        Tab      \t
        Slash    \\
        SQuote   \'
        DQuote   \"
```

#### Challenge

Try to reverse the order of the text so the escape appears before the label. Then try to right-align the label using string formatting:

```python
print(f"{'\\n':<8} {'Newline':>8}")
print(f"{'\\t':<8} {'Tab':>8}")
```

---

### Practice Problems

**Problem 1**  
Write the code to put a newline on the screen:  
Answer:
<pre><code class="language-python">print()</code></pre>

**Problem 2**  
How do you right-align numbers in Python?
<pre><code>
   5
 555
</code></pre>
Answer:
<pre><code class="language-python">print(f"{5:>4}")<br>print(f"{555:>4}")</code></pre>

**Problem 3**  
If the tab stops are set to 8 spaces, what will be the output of the following code?
<pre><code class="language-python">
print("\ta")
print("a\ta")
</code></pre>
Answer:
<pre><code>
        a
a       a
</code></pre>

**Problem 4**  
Write the code to generate the following output:
<pre><code>
/\/\/\
\/\/\/
</code></pre>
Answer:
<pre><code class="language-python">print("/\\/\\/\\")<br>print("\\/\\/\\/")</code></pre>

**Problem 5**  
What is the output of the following code?
<pre><code class="language-python">
print("\t1\t2\t3\n\t4\t5\t6\n\t7\t8\t9\n")
</code></pre>
Answer:
<pre><code>
        1       2       3
        4       5       6
        7       8       9
</code></pre>

**Problem 6**  
Write a program to put the following text on the screen:
<pre><code>
I am taking  
        "CS 124"
</code></pre>
Note that there is a tab at the start of the second line.

Answer:
<pre><code class="language-python">print("I am taking")<br>print('\t"CS 124"')</code></pre>

**Problem 7**  
Write the code to generate the following output:
<pre><code>
Bill: 
        $ 10.00 - Price 
        $  1.50 - Tip 
        $ 11.50 – Total
</code></pre>
Note that there is a tab at the start of the second line.

Answer:
<pre><code class="language-python">
print("Bill:")
print("\t$ 10.00 - Price")
print("\t$  1.50 - Tip")
print("\t$ 11.50 – Total")
</code></pre>

---

### Assignment 1.1

Write a program to output your monthly budget:

| Item    | Projected  |
|---------|------------|
| Income  | $1000.00   |
| Taxes   | $100.00    |
| Tithing | $100.00    |
| Living  | $650.00    |
| Other   | $90.00     |

**Example Output:**
```
        Item           Projected  
        =============  ========== 
        Income         $  1000.00 
        Taxes          $   100.00 
        Tithing        $   100.00 
        Living         $   650.00 
        Other          $    90.00 
        =============  ========== 
        Delta          $    60.00
```

**Instructions:**
- There is a single tab at the start of each line, but nowhere else.
- There are 13 ‘=’s in the first column, 10 in the second. There are 2 spaces between the columns.
- The spacing between the ‘$’ and the right edge of the money is 9.
- Use string formatting to align the numbers.
- Please display the money as a number, not as text.
- Verify your solution against the test bed.

---

<p class="footer" style="
  text-align: right;
  font-size: .75em;">
<br><br>
<br><br>
Procedural Programming in Python 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.1 Output
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 34</strong>
</p>