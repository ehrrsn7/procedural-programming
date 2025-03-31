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
- Recite the major parts of a computer program (statements, headers, etc.) (Chapter 0.2).
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
Procedural Programming in C++ 
</p>

<div style="page-break-after: always;"></div>

### COUT

As previously discussed, computer programs are much like recipes: consisting of a list of instructions necessary to produce some output. These instructions are called statements. One of the fundamental statements in the C++ language is `cout`: the statement that puts text on the screen. The syntax of `cout` is:

<table>
<tbody>
<tr>
<td style="background: #dffffb">
<code>cout</code> stands for <span style="text-decoration: underline;">C</span>onsole <span style="text-decoration: underline;">OUT</span>put or putting text on the screen. This keyword appears at the beginning of each output statement.
</td>
<td width=0><!--Blank Cell--></td>
<td style="background: #ffeddf">
When displaying generic text, we can write whatever we want as long as we include it in quotes.
<td>
</tr>
</tbody>
</table>

<pre><code><span style="background: #dffffb">cout</span> <span style="background: #dfffeb"><<</span> <span style="background: #ffeddf">"</span>CS 124<span style="background: #ffeddf">"</span> <span style="background: #ffdff8">;</span></code></pre>

<table>
<tbody>
<tr>
<td style="background: #dfffeb">
Following cout and separated by a space on each side, the insertion operator (<code><<</code>) indicates that the text on the right-side ("<code>CS 124</code>" in this case) is to be sent to the keyword (cout in this case) on the left-side. If the insertion operator looks like an arrow, it is not a coincidence; data flows from the right-side ("<code>CS 124</code>") to the left-side (the screen or console).
</td>
<td width=0><!--Blank Cell--></td>
<td style="background: #ffdff8">
The final component of a statement is the semicolon. This is required in all C++ statements. In many ways, this acts like a period in the English language.
<td>
</tr>
</tbody>
</table>

When you put this all together the above statement says "Put the text "`CS 124`" on the screen."

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

<pre style="min-width: 570px"><code>cout.setf(ios: : fixed);      // no scientific notation please      
cout.setf(ios : : showpoint); // always show the decimal for real numbers             
cout.precision(2);            // two digits after the decimal
</code></pre>

The first statement means we never want to see the number displayed in scientific notation. Unless the number is very big or very small, most humans prefer to see numbers displayed in "fixed" notation. The second statement indicates that the decimal point is required in all presentations of the number. The final statement indicates that two digits to the right of the decimal point will be displayed. We can specify any number of digits of course. Note that there is some interplay between these three statements; usually we use them together. These settings are "sticky." This means that once the program has executed these lines of code, all real numbers will be treated this way until the setting is changed again.

<p class="footer" style="
  text-align: left;
  font-size: .75em;">
<br><br>
Procedural Programming in C++ 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs  
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.1 Output
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 25</strong>
</p>

<div style="page-break-after: always;"></div>

### New Lines

Often the programmer would like to indicate that the end of a line has been reached. With a typewriter, one hits the Carriage Return to jump to the next line; it does not happen automatically. The same is true with stream output. The programmer indicates a newline is needed using two methods:

<div style="background: #00000010; border-radius: 10px; padding: 0.5em; margin: 0.5em; max-width: 250px; border: 2px solid #4f81bd">
Both of these mean the same thing. They will output a new line to the screen.
</div>

```cpp
cout << endl;
cout << "\n"
```

The first method is called `endl`, short for "end of line." This does not appear in quotes. Whenever a statement is executed with an `endl`, the cursor jumps down one line and moves to the left. The same occurs when the `"\n"` is encountered. Note that the `\n` must be in quotes. There can be many `\n`s in a single run of text.

Observe that we have two different ways (`endl` and `\n`) to do the same thing. Which is best?

<table>
<thead style="border-top: 3px solid black; background: #4f81bd">
<tr>
<td style="border: 1px solid gray"><!--Blank Cell--></td>
<td style="border: 1px solid gray"><code style="color: white">endl</code></td>
<td style="border: 1px solid gray"><code style="color: white">\n</code></td>
</tr>
</thead>
<tbody style="border-top: 3px solid black; border-bottom: 3px solid black">
<tr>
<td style="background: #4f81bd; color: white"><h4>Inside quotes</h4></td>
<td><pre><code>cout << "Hello"; 
cout << endl; 
</code></pre></td>
<td><pre><code>cout << "Hello\n";</code></pre></td>
</tr>
<tr>
<td style="background: #4f81bd; color: white"><h4>Not inside quotes</h4></td>
<td><pre><code>cout << 5;  
cout << endl; 
</code></pre></td>
<td><pre><code>cout << 5;  
cout << "\n"; </code></pre></td>
</tr>
<tr>
<td style="background: #4f81bd; color: white"><h4>Use</h4></td>
<td>When the previous item in the output stream is not in quotes, use the endl.</td>
<td>Most convenient when you want a newline and are already inside quotes.</td>
</tr>
</tbody>
</table>

### The Insertion Operator

As mentioned previously, the insertion operator (`<<`) is the C++ construct that allows the program to indicate which text is to be sent to the screen (through the `cout` keyword). It is also possible to send more than one item to the screen by stacking multiple insertion operators:

```cpp
cout << "I am taking "
     << "CS 124 "
     << "this semester.\n";
```

By convention we typically align the insertion operators so they line up on the screen and are therefore easier to read. However, we may wish to put them in a single line:

```cpp
cout << "I am taking " << "CS 124 " << "this semester.\n";
```

Both of these statements are exactly the same to the compiler; the difference lies in how readable they are to a human. There are three common reasons why one would want to use more than one insertion operator:

<p class="footer" style="
  text-align: left;
  font-size: .75em;">
<br>
<br>
<br>
<br>
<br>
<strong>Page 26</strong>
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.1 Output
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Procedural Programming in C++ 
</p>

<div style="page-break-after: always;"></div>

<table>
<thead style="border-top: 3px solid black; background: #4f81bd">
<tr>
<td style="border: 1px solid #ffffff50; color: white"><h4 style="margin: 0">Reason</h4></td>
<td style="border: 1px solid #ffffff50; color: white"><h4 style="margin: 0">Example</h4></td>
<td style="border: 1px solid #ffffff50; color: white"><h4 style="margin: 0">Explanation</h4></td>
</tr>
</thead>
<tbody style="border-top: 3px solid black; border-bottom: 3px solid black">
<tr>
<td style="background: #4f81bd; color: white"><h4>Line Limit</h4></td>
<td><pre style="min-width: 250px"><code class="language-cpp">cout << "I want to make one "
     << "very long line much "
     << "more manageable.\n";
</code></pre></td>
<td>Style checker limits the length of a line to 80 characters. It is often necessary to use multiple insertion operators to keep within this limit.</td>
</tr>
<tr>
<td style="background: #4f81bd; color: white"><h4>Mixing</h4></td>
<td><pre><code class="language-cpp">cout << "Mix text with " 
     << 42 
     << " numbers.\n";
</code></pre></td>
<td>Variables need to be outside quotes, requiring separate insertion operators for each one.</td>
</tr>
<tr>
<td style="background: #4f81bd; color: white"><h4>Comments</h4></td>
<td><pre style="min-width: 220px"><code class="language-cpp">cout << "CS124"   // class
     << "-1-"     // section 
     << "Bob";    // prof.
</code></pre></td>
<td>Comments are more meaningful when they are on the same line as to what they are clarifying.</td>
</tr>
</tbody>
</table>

### Alignment

It is often desirable to make output characters align in columns or tables. This is particularly useful when working with columns of numbers. In these cases, we have two tools at our disposal: tabs and set-width.

#### Tabs

When the typewriter was invented, it quickly becomes apparent that typists needed a convenient way to align numbers into columns. To this end, the tab key (also known as the tabular key) was invented. The tab key would skip the carriage (or cursor in the computer world) to the next tab stop. In the case of mechanical typewriters, tab stops were set every half inch. This meant that hitting the tab key would move the cursor to the next half inch increment. Sometimes this meant moving forward one space, other times the full half inch. The tab command (`\t`) in `cout` behaves exactly the same way as a typewriter. Each time the `\t` is encountered in textual data, the cursor moves forward to the next 8 character increment. Consider the following text:

```c++
cout << "\tOne\n"; 
cout << "Deux\tDeux\n"; 
cout << "\t\tTres\n";
```

The output from these statements is:

<table>
<tbody>
<tr style="font-family: Consolas, monospace">
<td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">O</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">n</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">e</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td>
</tr>
<tr style="font-family: Consolas, monospace">
<td style="border: 1px dashed black; padding: 2px; min-width: 12px">D</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">e</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">u</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">x</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">D</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">e</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">u</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">x</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td>
</tr>
<tr style="font-family: Consolas, monospace">
<td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"> </td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">T</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">r</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">e</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px">s</td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td><td style="border: 1px dashed black; padding: 2px; min-width: 12px"></td>
</tr>
</tbody>
</table>

Observe how the word "`One`" is indented eight spaces. This is because the cursor started in the 0 column and, when the tab key was encountered, skipped to the right to the next tab stop (the 8 column).

The first word "`Deux`" is left aligned because, after the `\n` is encountered in the previous line, the cursor moves down one line and to the 0 column. After the first `“Deux”`, the cursor is on the 3 column. From here the cursor skips to the next multiple of 8 (in this case the 8 column) when the tab is encountered. This makes the `“One”` and `“Deux”` left-aligned.

When the third statement is executed, the first tab moves the cursor to the 8 column. The second tab moves the cursor to the next multiple of 8 (the 16 column). From here, the text “`Tres`” is rendered. 

<p class="footer" style="
  text-align: right;
  font-size: .75em;">
<br><br>
Procedural Programming in C++ 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.1 Output
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 27</strong>
</p>

<div style="page-break-after: always;"></div>

### Set Width

Tabs work great for left-aligning text. However, often one needs to right-align text. This is performed with the set width command. Set width works by counting backwards from a specified number of spaces so the next text in the `cout` statement will be right-aligned. Consider the following code:

```cpp
cout << setw(9) << "set\n";
cout << setw(9) << "width\n";
```

The first statement will start at column zero, move 9 spaces to the right (by the number specified in the parentheses), then count to the left by three (the width of the word “set”). This means that the text “set” will start on column 6 (9 as specified in the `setw(9)` function minus 3 by the length of the next word). The next statement will again start at column zero (because of the preceding `\n`), move 9 spaces to the right, then count to the left by five (the width of the word “width”). This means that the text “width” will start on column 4 (9 minus 5). As a result, the two words will be right-aligned.

<table style="font-family: consolas, monospace">
<tr>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">s</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">e</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">t</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
</tr>
<tr>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">w</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">i</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">d</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">t</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">h</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
<td style="border: 1px dashed black; padding: 2px; min-width: 12px;">&nbsp;</td>
</tr>
</table>

One final note: the `setw()` function is in a different library which needs to be included. You must `#include` the iomanip library:

```cpp
#include <iomanip>
```

### Sam’s Corner

It turns out that there are many other formatting options available to programmers. You can output your numbers in hexadecimal, unset formatting flags, and pad with periods rather than spaces. Please see the following for a complete list of the options: [cppreference.com](http://en.cppreference.com/w/cpp/io/ios_base).

<table>
<theader>
<tr style="background: #244061">
<td width="80%">
    <p style="color: white; font-weight: bold; margin-top: 10px; line-height: 0">Sam's Corner</p>
</td>
<td></td>
</tr>
</theader>
<tbody>
<tr>
<td>
    <p>
        Sam is a technology nerd. He likes solving hard problems for their own sake, not  necessarily because they even need to be solved. Sam enjoys getting to the heart of a  problem and finding the most elegant solution.  It is easy for Sam to  get hung  up on a problem for
        hours even though he found a working solution long ago.
    </p>
    <p>
        The following topics are commonly discussed in Sam’s Corner:
    </p>
    <ul>
        <li> Details: The details of how various operations work, even though this knowledge is not necessary to get the job done.</li>
        <li> Tidbits: Interesting tidbits explaining why things are the way they are.</li>
    </ul>
</td>
<td style="display: flex; padding: 0; height: 100%">
    <img src="../../.etc/assets/sam.png" width="200px" height="auto"">
</td>
</tr>
</tbody>
</table>

### Using Tabs and Set Width Together

Tabs and set width are commonly used together when displaying columns of figures such as money. Consider the following code:

```cpp
#include <iostream>    // required for COUT
#include <iomanip>     // we will use setw() in this example
using namespace std;

int main() {
  // configure the output to display money
  cout.setf(ios::fixed);     // no scientific notation except for the deficit
  cout.setf(ios::showpoint); // always show the decimal point
  cout.precision(2);         // two decimals for cents; this is not a gas station!

  // display the columns of numbers
  cout << "\t$" << setw(10) << 43.12      << endl;
  cout << "\t$" << setw(10) << 115.2      << endl;
  cout << "\t$" << setw(10) << 83299.3051 << endl;

  return 0;
}
```

In this example, the output is:

```
    $     43.12
    $    115.20
    $  83288.31
```

<p class="footer" style="
  text-align: left;
  font-size: .75em;">
<br><br>
<strong>Page 28</strong>
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.1 Output
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Procedural Programming in C++ 
</p>

<div style="page-break-after: always;"></div>

Observe how the second row displays two decimals even though the code only has one. This is because of the `cout.precision(2)` statement indicating that two decimals will always be used. The third row also displays two decimal places, rounding the number up because the digit in the third decimal place is a 5.

<table>
<theader>
<tr style="background: #244061">
<td width="80%">
  <p style="color: white; font-weight: bold; margin-top: 10px; line-height: 0">Sue's Tips</p>
</td>
<td></td>
</tr>
</theader>
<tbody>
<tr>
<td>
  <p>
    It is helpful to first draw out the output on graph paper so you can get the column widths correct the first time. When the output is complex (as it is for Project 1), aligning columns can become frustrating.
  </p>
</td>
</tr>
</tbody>
</table>

### Special Characters

As mentioned previously, we always encapsulate text in quotes when using a `cout` statement:

```cpp
cout << "Always use quotes around text\n";
```

There is a problem, however, when you actually want to put the quote mark (`"`) in textual output. We have the same problem if you want to put the backslash (`\`) in textual output. The problem arises because, whenever `cout` sees the backslash in the output text, it looks to the next character for instructions. These instructions are called escape sequences. Escape sequences are simply indications to `cout` that the next character in the output stream is special. We have already seen escape sequences in the form of the newline (`\n`) and the tab (`\t`). So, back to our original question: how do you display the quote mark without the text being ended and how do you display `\n` without a newline appearing on the screen? The answer is to escape them:

```cpp
cout << "quote mark:\"    newline:\\n" << endl;
```

When the first backslash is encountered, `cout` goes into “escape mode” and looks at the next character. Since the next character is a quote mark, it is treated as a quote in the output rather than the marker for the end of the text. Similarly, when the next backslash is encountered after the newline text, the next backslash is treated as a backslash in the output rather than as another character. The output of the code would be:

```
quote mark:"    newline:\n
```

Up to this point, the following are the escape sequences we can use:

<table style="margin: 1em auto">
<thead style="border-top: 3px solid black; background: #4f81bd">
<tr>
<td style="border: 1px solid #ffffff50; color: white; text-align: center;"><h4 style="margin: 0">Name</h4></td>
<td style="border: 1px solid #ffffff50; color: white; text-align: center;"><h4 style="margin: 0">Character</h4></td>
</tr>
</thead>
<tbody style="border-top: 3px solid black; border-bottom: 3px solid black">
<tr>
<td style="background: #4f81bd; color: white;">New Line</td>
<td>\n</td>
</tr>
<tr>
<td style="background: #4f81bd; color: white;">Tab</td>
<td>\t</td>
</tr>
<tr>
<td style="background: #4f81bd; color: white;">Backslash</td>
<td>\\</td>
</tr>
<tr>
<td style="background: #4f81bd; color: white;">Double Quote</td>
<td>\"</td>
</tr>
<tr>
<td style="background: #4f81bd; color: white;">Single Quote</td>
<td>\'</td>
</tr>
</tbody>
</table>

There are many other lesser known and seldom used escape characters as well: 

&nbsp;&nbsp;&nbsp;&nbsp;
&nbsp;&nbsp;&nbsp;&nbsp;
[https://msdn.microsoft.com/en-us/library/h21280bw.aspx](https://msdn.microsoft.com/en-us/library/h21280bw.aspx)


<p class="footer" style="
  text-align: right;
  font-size: .75em;">
<br><br>
Procedural Programming in C++ 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.1 Output
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 29</strong>
</p>

<div style="page-break-after: always;"></div>

<table style="width: 100%; min-width: 715px; border: 1px solid #00000010">
<thead>
<tr>
  <td>
    <!-- Blank -->
  </td>
  <td style="text-align: center; background: #17365d; height: 12px;">
    <h4 style="color: white; padding: 0; margin: 0;">Example 1.1 – Money Alignment</h4>
  </td>
  <td>
  <!-- Blank -->
  </td>
</tr>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 20px; left: 7px">
Demo
</h4>
</td>
<td>
<p>
This example will demonstrate how to use tabs and `setw()` to align money. This is important in Assignment 1.1, Project 1, and many output scenarios.
</p>
</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
<tr>
  <td>
    <!-- Blank -->
  </td>
  <td style="border: 1px solid #70839c">
    <!-- Blank -->
  </td>
  <td>
    <!-- Blank -->
  </td>
</tr>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
Problem
</h4>
</td>
<td>
<p>
Write a program to output a list of numbers on a grid so they can be easily read by the user.

```
$  124.45    $  321.31
$    1.74    $    4.21
$ 7439.12    $   54.92
<-------><--><------->
7 spaces|1 tab|7 spaces
```
</p>
</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
<tr>
  <td>
    <!-- Blank -->
  </td>
  <td style="border: 1px solid #70839c">
    <!-- Blank -->
  </td>
  <td>
    <!-- Blank -->
  </td>
</tr>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
Solution
</h4>
</td>
<td>
<p>
The first part of the solution is to realize that all the numbers are displayed as money. This requires us to format `cout` to display two digits of accuracy.
</p>

```cpp
cout.setf(ios::fixed);                // no scientific notation 
cout.setf(ios::showpoint);            // always show the decimal point 
cout.precision(2);                    // two digits for money 
```
After the leading $ the text is right-aligned to seven spaces. This will require code something like: 
```cpp
cout << "$" << setw(7) << 124.45;     // numbers not in quotes! 
```
Following the first set numbers, we have another column separated by a tab. 
```cpp
cout << "\t";  
```
Next, another column of numbers just like the first. 
```cpp
cout << "$" << setw(7) << 321.31;     // again, the numbers are not in quotes 
```
Finally, we end with a newline 
```cpp
cout << endl;                         // instead, we could say "\n" 
```
Put it all together: 
```cpp
// display the first row 
cout << "$" 
<< setw(7) << 124.45 
<< "\t$" 
<< setw(7) << 321.31 
<< endl;
```
</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
<tr>
  <td>
    <!-- Blank -->
  </td>
  <td style="border: 1px solid #70839c">
    <!-- Blank -->
  </td>
  <td>
    <!-- Blank -->
  </td>
</tr>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
Challenge
</h4>
</td>
<td>
<p>
As a challenge, try to increase the width of each column from 7 spaces to 10. How does this change the space between columns? Can you add a third column of numbers? Finally, what is the biggest number you can put in a column before things start to get “weird.” What happens when the numbers are wider than the columns?
</p>
</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
<tr>
  <td>
    <!-- Blank -->
  </td>
  <td style="border: 1px solid #70839c">
    <!-- Blank -->
  </td>
  <td>
    <!-- Blank -->
  </td>
</tr>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
See Also
</h4>
</td>
<td>
<p>

The complete solution is available at <a href="https://content.byui.edu/file/66227afd-b800-4ba3-b6b3-18db4db6c440/1/1-1-alignMoney.html">1-1-alignMoney.cpp</a> or: 
</p>

```
/home/cs124/examples/1-1-alignMoney.cpp
```
<a href="https://video.byui.edu/media/1.0+-+First+Program/0_9dc3rb33/18442462">
<img src="image.png">
</a>
</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
</thead>
</table>

<p class="footer" style="
  text-align: right;
  font-size: .75em;">
<br><br>
<strong>Page 30</strong>
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.1 Output
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Procedural Programming in C++ 
</p>

<div style="page-break-after: always;"></div>

<table style="width: 100%; min-width: 715px; border: 1px solid #00000010">
<thead>
<tr>
  <td>
    <!-- Blank -->
  </td>
  <td style="text-align: center; background: #17365d; height: 12px;">
    <h4 style="color: white; padding: 0; margin: 0;">Example 1.1 – Escape Sequences</h4>
  </td>
  <td>
  <!-- Blank -->
  </td>
</tr>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 20px; left: 7px">
Demo
</h4>
</td>
<td>
<p>
This example will demonstrate how to display special characters on the screen using escape sequences. 
Not only will we use escape sequences to get tabs and newlines on the screen, but we will use escapes 
to display characters that are normally treated as special. 
</p>
</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
<tr>
  <td>
    <!-- Blank -->
  </td>
  <td style="border: 1px solid #70839c">
    <!-- Blank -->
  </td>
  <td>
    <!-- Blank -->
  </td>
</tr>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
Problem
</h4>
</td>
<td>
<p>
Write a program to display all the escape sequences in an easy-to-read grid. 

```
The escape sequences are:
        Newline  \n
        Tab      \t
        Slash    \\
        SQuote   \'
        DQuote   \"
<-------><--><------->
1 tab  | 9 spaces
```
</p>
</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
<tr>
  <td>
    <!-- Blank -->
  </td>
  <td style="border: 1px solid #70839c">
    <!-- Blank -->
  </td>
  <td>
    <!-- Blank -->
  </td>
</tr>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
Solution
</h4>
</td>
<td>
<p>

We need to start by noting that there are six lines in the output so we should expect to use six `\n` escape 
sequences. If we do not end each line with a newline, then all the text will run onto a single line. 

Next, there needs to be a tab before each of the five lines in the list. This will be accomplished with a `\t `
escape  sequence.  Each  of  the  slashes  in  the  escape  sequence  will  need  to  be  escaped.  Consider  the 
following code: 

```cpp
cout << "\tNewline  \n\n"; 
```

This will result in the following output: 

```
    Newline

```
 
Notice how the “\n” was never displayed and we have an extra blank line. Instead, the following will be 
necessary: 

```cpp
cout << "\tNewline  \\n\n"; 
```

Here, after the “Newline” text, the first “`\`” will indicate that the second is not be treated as an escape. 
The end result will display a `\` on the screen. Next the “`n`” will be encountered and displayed. The final 
“`\`” will indicate the following character is to be treated special. That character, the “n” will be interpreted 
as a newline. 

The final challenge is the double quote at the end of the sequence. It, tool, will need to be escaped or 
the compiler will think we are ending a string.
</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
<tr>
  <td>
    <!-- Blank -->
  </td>
  <td style="border: 1px solid #70839c">
    <!-- Blank -->
  </td>
  <td>
    <!-- Blank -->
  </td>
</tr>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
Challenge
</h4>
</td>
<td>
<p>

As a challenge, try to reverse the order of the text so the escape appears before the label. Then try to 
right-align the label using `setw()`: 

```cpp
      \n    Newline 
      \t        Tab
```
</p>
</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
<tr>
  <td>
    <!-- Blank -->
  </td>
  <td style="border: 1px solid #70839c">
    <!-- Blank -->
  </td>
  <td>
    <!-- Blank -->
  </td>
</tr>
<tr>
<td style="background: #17365d">
<h4 style="transform: rotate(90deg); white-space: nowrap; color: white; height: 5px; width: 5px; position: relative; bottom: 30px; left: 7px">
See Also
</h4>
</td>
<td>
<p>

The complete solution is available at <a href="https://content.byui.edu/file/66227afd-b800-4ba3-b6b3-18db4db6c440/1/1-1-escapeSequences.html">1-1-escapeSequence.cpp</a> or: 
</p>

```
/home/cs124/examples/1-1-alignMoney.cpp
```
<a href="https://video.byui.edu/media/1.0+-+First+Program/0_9dc3rb33/18442462">
<img src="image.png">
</a>
</td>
<td style="background: #17365d">
<!-- Blank -->
</td>
</tr>
</thead>
</table>

<p class="footer" style="
  text-align: right;
  font-size: .75em;">
<br><br>
Procedural Programming in C++ 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.1 Output
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 31</strong>
</p>

<div style="page-break-after: always;"></div>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 1
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
Write the code to put a newline on the screen: 
Answer:
<br><br> 
<pre><code><!--Empty Code Block--></code></pre>
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 26 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 2
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
How do you right-align numbers in C++?
<br><br> 
<pre><code>       5
     555
</code></pre>
Answer:
<pre><code><!--Empty Code Block--></code></pre>
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 28 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<br>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 3
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
If the tab stops are set to 8 spaces, what will be the output of the following code?
<br><br> 
<pre><code>{
    cout << "\ta\n";
    cout << "a\ta\n";
}
</code></pre>
Answer:
<pre><code><!--Empty Code Block--></code></pre>
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 27 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<br>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 4
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
Write the code to generate the following output:
<br><br> 
<pre><code>/\/\/\
\/\/\/
</code></pre>
Answer:
<pre><code><!--Empty Code Block--></code></pre>
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 29 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<br>

<p class="footer" style="
  text-align: left;
  font-size: .75em;">
<br><br>
<br><br>
<strong>Page 32</strong>
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.1 Output
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Procedural Programming in C++ 
</p>

<div style="page-break-after: always;"></div>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 5
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
What is the output of the following code?
<br><br> 
<pre><code>{ 
   cout << "\t1\t2\t3\n\t4\t5\t6\n\t7\t8\t9\n"; 
}
</code></pre>
Answer:
<pre><code><!--Empty Code Block--></code></pre>
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 29 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<br>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 6
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
Write a program to put the following text on the screen:
<br><br> 
<pre><code>I am taking  
        "CS 124"
</code></pre>
Note that there is a tab at the start of the second line. 

Answer:
<pre><code><!--Empty Code Block--></code></pre>
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 27 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<br>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6"><p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Problem 7
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
Write the code to generate the following output:
<br><br> 
<pre><code>Bill: 
        $ 10.00 - Price 
        $  1.50 - Tip 
        $ 11.50 – Total
</code></pre>
Note that there is a tab at the start of the second line. 

Answer:
<pre><code><br><br><br><br></code></pre>
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 27 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<br>

<p class="footer" style="
  text-align: right;
  font-size: .75em;">
<br><br>
<br><br>
Procedural Programming in C++ 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs 
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
1.1 Output
&nbsp;&nbsp;&nbsp;|
&nbsp;&nbsp;&nbsp;
<strong>Page 33</strong>
</p>

<div style="page-break-after: always;"></div>

<table style="min-width: 650px">
<theader>
<tr>
<td width="20%" style="
  background: #244061;
  border: 3px solid #a6a6a6">
<p style="color: white;
  font-weight: bold;
  margin-top: 10px;
  line-height: 0">
Assignment 1.1
</p>
</td>
<td><!-- Blank Cell --></td>
</tr>
</theader>
<tbody>
<tr>
<td colspan=2 style="; border: 3px solid #a6a6a6">
<!--Empty Row-->
Write a program to output your monthly budget:
<table style="margin: 1em">
<thead style="border-top: 3px solid black; background: #4f81bd">
<tr>
<td style="border: 1px solid #ffffff50; color: white; text-align: center;"><h4 style="margin: 0">Item</h4></td>
<td style="border: 1px solid #ffffff50; color: white; text-align: center;"><h4 style="margin: 0">Projected</h4></td>
</tr>
</thead>
<tbody style="border-top: 3px solid black; border-bottom: 3px solid black">
<tr>
<td>Income</td>
<td>$1000.00</td>
</tr>
<tr>
<td>Taxes</td>
<td>$100.00</td>
</tr>
<tr>
<td>Tithing</td>
<td>$100.00</td>
</tr>
<tr>
<td>Living</td>
<td>$650.00</td>
</tr>
<tr>
<td>Other</td>
<td>$90.00</td>
</tr>
</tbody>
</table>
<h4>Example</h4>
<pre><code>        Item           Projected  
        =============  ========== 
        Income         $  1000.00 
        Taxes          $   100.00 
        Tithing        $   100.00 
        Living         $   650.00 
        Other          $    90.00 
        =============  ========== 
        Delta          $    60.00
</code></pre>
<h4>Instructions</h4>
Please note:
<ul>
  <li>There is a single tab at the start of each line, but nowhere else.</li>
  <li>There are 13 ‘=’s in the first column, 10 in the second. There are 2 spaces between the columns. </li>
  <li>The spacing between the ‘$’ and the right edge of the money is 9. </li>
  <li>You will need to set the formatting of the prices with the precision() command.  </li>
  <li>Please display the money as a number, rather than as text. This means two things. First, the numbers should be outside the quotes (again, see the example above). Second, you will need to use the setw() function to get the numbers to line up correctly. </li>
  <li>Please verify your solution against:</li>
</ul>
<pre><code>testBed cs124/assign11 assignment11.cpp</code></pre>
Don’t forget to submit your assignment with the name “Assignment 11” in the header.
<div width="100%" style="text-align: right; font-size: 10px; color: #a6a6a6"><em>Please see page 30 for a hint.</em></div>
</td>
</tr>
</tbody>
</table>

<br>

<p class="footer" style="
  text-align: right;
  font-size: .75em;">
<br><br>
<br><br>
Procedural Programming in C++ 
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
