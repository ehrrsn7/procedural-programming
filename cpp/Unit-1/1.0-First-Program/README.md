<style>
  h1, h2, h3, h4, p, table, li {
    font-family: georgia, "Open Sans", sans-serif;
    line-height: 1.5;
    color: #333;
  }
  table.table-of-contents {
    width: calc(100% - 40px);
    max-width: 500px;
    margin: 20px 20px;
  }
  table.table-of-contents > tbody > tr > td {
    /* border: 1px solid blue; */
    vertical-align: middle;
    padding: 0px;
    text-align: left;
    border: none;
  }
  table.table-of-contents > tbody > tr > td > p {
    /* border: 1px solid green; */
    position: relative;
    top: .5em;
  }
  table.table-of-contents > tbody > tr > td.page-number > p {
    position: relative;
    top: 0;
  }
  table.table-of-contents > tbody > tr > td > h4 {
    /* border: 1px solid green; */
    position: relative;
    top: -1em;
    padding: 0;
    margin-top: 1.5em;
    margin-bottom: .5em;
  }

  table.linux-commands {
    min-width: 600px;
    margin: 0;
    padding: 0;
    border: 1px solid transparent;
  }

  table.linux-commands > tbody > tr.title-row {
    background: #4f81bd;
    color: white;
    text-align: center;
    white-space: normal;
  }
  table.linux-commands > tbody > tr.title-row > td {
    min-width: 120px;
    padding: 5px;
  }

  table.linux-commands > tbody > tr.tool > td {
    margin: 0;
    padding: 0;
  }
  table.linux-commands > tbody > tr.tool > td:first-of-type {
    min-width: 50px;
    padding: 0;
    margin: 0;
    padding-left: .5em;
    white-space: nowrap;
  }
  table.linux-commands > tbody > tr.tool > td:first-of-type > * {
    margin: 0;
  }
  table.linux-commands > tbody > tr.tool > td:not(:first-of-type) {
    min-width: 200px;
    width: 100%;
    white-space: nowrap;
  }
  table.linux-commands > tbody > tr.tool > td > code {
    color: black;
  }
  table.linux-commands > tbody > tr.tool > td > span.monospace {
    padding: 0;
    margin: 0;
  }

  a, a:hover {
    color: dark-blue;
    text-decoration: none;
  }

  p.footer {
    text-align: right;
    font-size: .75em;
  }
  p.footer.left {
    text-align: left;
  }
  p.footer.right {
    text-align: right;
  }

  span.monospace {
    font-family: "Courier New", Courier, monospace;
  }
</style>

<img src="..\..\.etc\assets\topic-header.png" width="100%" height="auto" style="">

# Unit 1. Simple Programs

## Table of Contents

<table class="table-of-contents">
<tbody>
  <tr>
    <td style="white-space: nowrap">
      <a href="../Unit-1/1.0-First-Program/README.md">
      <p>
      1.0 First Program&nbsp;...............................................................................................
      </p>
      </a>
    </td>
    <td class="page-number"><p>13</p></td>
  </tr>
  <tr>
    <td style="white-space: nowrap">
      <a href="../Unit-1/1.0-First-Program/README.md">
      <p>
      1.1 Output&nbsp;...........................................................................................................
      </p>
      </a>
    </td>
    <td><p>24</p></td>
  </tr>
  <tr>
    <td style="white-space: nowrap">
      <a href="../Unit-1/1.0-First-Program/README.md">
      <p>
      1.2 Input & Variables&nbsp;.........................................................................................
      </p>
      </a>
    </td>
    <td><p class="page-number">35</p></td>
  </tr>
  <tr>
    <td style="white-space: nowrap">
      <a href="../Unit-1/1.0-First-Program/README.md">
      <p>
      1.3 Expressions&nbsp;..................................................................................................
      </p>
      </a>
    </td>
    <td><p>46</p></td>
  </tr>
  <tr>
    <td style="white-space: nowrap">
      <a href="../Unit-1/1.0-First-Program/README.md">
      <p>
      1.4 Functions&nbsp;.....................................................................................................
      </p>
      </a>
    </td>
    <td><p class="page-number">58</p></td>
  </tr>
  <tr>
    <td style="white-space: nowrap">
      <a href="../Unit-1/1.0-First-Program/README.md">
      <p>
      1.5 Boolean Expressions&nbsp;....................................................................................
      </p>
      </a>
    </td>
    <td><p class="page-number">76</p></td>
  </tr>
  <tr>
    <td style="white-space: nowrap">
      <a href="../Unit-1/1.0-First-Program/README.md">
      <p>
      1.6 IF Statements&nbsp;...............................................................................................
      </p>
      </a>
    </td>
    <td><p class="page-number">86</p></td>
  </tr>
  <tr>
    <td style="white-space: nowrap">
      <a href="../Unit-1/1.0-First-Program/README.md">
      <p>
      Unit 1 Practice Test&nbsp;............................................................................................
      </p>
      </a>
    </td>
    <td><p class="page-number">99</p></td>
  </tr>
  <tr>
    <td style="white-space: nowrap">
      <a href="../Unit-1/1.0-First-Program/README.md">
      <p>
      Unit 1 Project : Monthly Budget&nbsp;........................................................................
      </p>
      </a>
    </td>
    <td><p class="page-number">101</p></td>
  </tr>
</tbody>
</table>

<div style="page-break-after: always;"></div>

## 1.0 First Program

Sue is home for the Christmas holiday when her mother asks her to fix a "computer problem."
It turns out that the problem is not the computer itself, but some data their bank has sent them.
Instead of e-mailing a list of stock prices in US dollars ($), the entire list is in Euros (€)!
Rather than perform the conversion by hand, Sue decides to write a program to do the conversion.
Without referencing any books (they are back in her apartment) or any of her previous programs (also back in her apartment), she quickly writes the code to complete the task.

### Objectives

By the end of this class, you will be able to:

- Use the provided tools (Linux, emacs, g++, styleChecker, testBed, submit) to complete a homework assignment.
- Be familiar with the University coding standards (Appendix A. Elements of Style).

### Prerequisites

Before reading this section, please make sure you are able to:

- Type the code for a simple program (Chapter 0.2).

### Overview of the process

The process of turning in a homework assignment consists of several steps.
While these steps may seem unfamiliar at first, they will be well-rehearsed and second-nature in a week or two.
The lab assistants (wearing green vests in the Linux lab) are ready and eager to help you if you get stuck on the way.
The process consists of the following steps:

1. Log into the lab
2. Copy the assignment template using `cp`
3. Edit your file using `emacs`
4. Compile the program using `g++`
5. Verify your solution with `testBed`
6. Verify your style with `styleChecker`
7. Turn it in with `submit`

This entire process will be demonstrated in "Example - Hello World" at the end of the chapter.

<p class="footer">
<br>
<br>
<br>
<br>
<br>
Procedural Programming in C++ &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
1.0 First Program &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
<strong>Page 13</strong>
</p>

<div style="page-break-after: always;"></div>

### 0. Login

All programming assignments are done on the Linux system.
This includes the pre-class assignments, the projects, and the in-lab tests.
You can either go to the Linux Lab to use the campus computers, or connect remotely to the lab from your personal computer.
Either way, you will need to log in.
If you have not done this in Assignment 0.0, please re-visit the quiz for the default password.
The lab assistants will be able to help you reset your password if necessary.
Please see Appendix C: Lab Help for a description of what the lab assistants can and cannot do.

It is worthwhile to set up your computer so you do not need to come to the lab to do an assignment.
The method is different for a Microsoft Windows computer than it is for an Apple Macintosh computer.

#### Remote access for Windows computers

1. Download the tool called PuTTY

<div style="text-align: center;">
  <p>
    <a href="https://www.ssh.com/academy/ssh/putty/windows">
      Setup - PuTTY
    </p>
  </a>
</div>

2. Go to the lab and read the IP address (four numbers separated by periods) from any machine in the lab.
They are 157.201.194.201 through 157.201.194.210.
This will be the physical machine you are accessing when using remote access.
3. Boot PuTTY and type in your IP address from step 2 and the port 215. You might want to save this session so you don't have to keep typing the numbers in.
4. Select [OPEN]. After you specify your username and password, you are now logged into that machine.

#### Remote access for Macintosh or Linux computers

If you are on a Macintosh or a Linux computer, bring up a terminal window and type the following command:

```
ssh <username>@<ip> -p 215
```

If, for example, you want to connect to machine 157.201.194.230 and your username is "sam", then you would type:

```
ssh sam@157.201.194.230 -p 215
```

For more information, please see: Setup - Terminal

<div style="text-align: center;">
  <p>
    <a href="https://support.apple.com/en-ie/guide/terminal/apd5265185d-f365-44cb-8b09-71a064a42125/mac">
      Setup - Terminal
    </p>
  </a>
</div>

<p class="footer left">
<br>
<br>
<br>
<br>
<br>
Procedural Programming in C++ &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
1.0 First Program &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
<strong>Page 14</strong>
</p>

<div style="page-break-after: always;"></div>

### 1. Copy Template

Once you have successfully logged into the Linux system (either remotely or in the Linux Lab), the next step is to copy over the template for the assignment. All the assignments for this class start with a template file which has placeholders for the assignment name and the author (that would be you!). This file, and all other files pertaining to the course, can be found on:

```
/home/cs124
```

The assignment (and project and test) template is located on:

```
/home/cs124/template.cpp
```

On the Linux system, we type commands rather than use the mouse. The command used to copy a file is called "cp". The syntax for the copy command is:

```
cp <source file> <destination file>
```

If, for example, you were to copy the template from `/home/cs124/template.cpp` into `hw10.cpp`, you would type the following command:

```
cp /home/cs124/template.cpp hw10.cpp
```

Most Linux commands do not display anything on the screen if they were successful. You will need to do a directory listing (`ls`) to see if the file copied. A list of other common Linux commands are the following:

<table class="linux-commands" style="background: #a7bfde80">
  <tbody>
    <tr class="title-row">
      <td rowspan="10">
        <strong>Navigation<br>tools</strong>
      </td>
    </tr>
    <tr class="tool">
      <td>
        <code>cd</code>
        <span class="monospace">...........</span>&nbsp;
      </td>
      <td>Change Directory</td>
    </tr>
    <tr class="tool">
      <td>
        <code>ls</code>
        <span class="monospace">...........</span>&nbsp;
      </td>
      <td>List information about file(s)</td>
    </tr>
    <tr class="tool">
      <td>
        <code>cat</code>
        <span class="monospace">..........</span>&nbsp;
      </td>
      <td>Display the contents of a file to the screen</td>
    </tr>
    <tr class="tool">
      <td>
        <code>clear</code>
        <span class="monospace">........</span>&nbsp;
      </td>
      <td>Clear terminal screen</td>
    </tr>
    <tr class="tool">
      <td>
        <code>exit</code>
        <span class="monospace">.........</span>&nbsp;
      </td>
      <td>Exit the shell</td>
    </tr>
    <tr class="tool">
      <td>
        <code>yppasswd</code>
        <span class="monospace">.....</span>&nbsp;
      </td>
      <td>Modify a user password</td>
    </tr>
  </tbody>
</table>

<table class="linux-commands" style="background: #d3dfee80">
  <tbody>
    <tr class="title-row">
      <td rowspan="10" style="padding: 5px;">
        <strong>Organization<br>tools</strong>
      </td>
    </tr>
    <tr class="tool">
      <td>
        <code>mkdir</code>
        <span class="monospace">........</span>&nbsp;
      </td>
      <td>Create new folder(s)</td>
    </tr>
    <tr class="tool">
      <td>
        <code>mv</code>
        <span class="monospace">...........</span>&nbsp;
      </td>
      <td>Move or rename files or directories</td>
    </tr>
    <tr class="tool">
      <td>
        <code>rm</code>
        <span class="monospace">...........</span>&nbsp;
      </td>
      <td>Remove files</td>
    </tr>
  </tbody>
</table>

<table class="linux-commands" style="background: #a7bfde80">
  <tbody>
    <tr class="title-row">
      <td rowspan="10" style="padding: 5px;">
        <strong>Programming<br>tools</strong>
      </td>
    </tr>
    <tr class="tool">
      <td>
        <code>emacs</code>
        <span class="monospace">........</span>&nbsp;
      </td>
      <td>Common code editor</td>
    </tr>
    <tr class="tool">
      <td>
        <code>vi</code>
        <span class="monospace">...........</span>&nbsp;
      </td>
      <td>More primitive but ubiquitous editor</td>
    </tr>
    <tr class="tool">
      <td>
        <code>g++</code>
        <span class="monospace">..........</span>&nbsp;
      </td>
      <td>Compile a C++ program</td>
    </tr>
  </tbody>
</table>

<table class="linux-commands" style="background: #d3dfee80">
  <tbody>
    <tr class="title-row">
      <td rowspan="10" style="padding: 5px;">
        <strong>Homework<br>tools</strong>
      </td>
    </tr>
    <tr class="tool">
      <td>
        <code>styleChecker</code>
        <span class="monospace">..</span>&nbsp;
      </td>
      <td>Run the style checker on a file</td>
    </tr>
    <tr class="tool">
      <td>
        <code>testBed</code>
        <span class="monospace">......</span>&nbsp;
      </td>
      <td>Run the test bed on a file</td>
    </tr>
    <tr class="tool">
      <td>
        <code>submit</code>
        <span class="monospace">.......</span>&nbsp;
      </td>
      <td>Turn in a file</td>
    </tr>
  </tbody>
</table>

For more commands or more details on the above, please see [Appendix D: Linux and Emacs Cheat-Sheet](../Unit-5/Appendix-D/README.md).

### Sue's Tips

Be careful how you name your files. By the end of the semester, you could easily get lost in a sea of files. Spend a few moments thinking of how you will organize all your files as this will be a useful practice for the remainder of your career.

<p class="footer right">
<br>
<br>
<br>
<br>
<br>
Procedural Programming in C++ &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
Unit 1: Simple Programs &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
1.0 First Program &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
<strong>Page 15</strong>
</p>

<div style="page-break-after: always;"></div>

### Edit with Emacs

Once the template has been copied to your directory, you are now ready to edit your program. There are many editors to choose from. Some editors are specialized to a specific task (such as Excel and Photoshop). The editor we use for programming problems is specialized for writing code. There are many editors you may use, including emacs and vi. For help with common emacs commands, please see "Appendix D: Linux and Emacs Cheat Sheet."

If you would like to write a program in `hello.cpp`, you can use emacs to create and edit the file with:

```
emacs hello.cpp
```

This will start emacs with a blank document named `hello.cpp`. From here you can type anything you like. However, if you wish this program to function correctly, you need to type valid C++. For your first program, you can make it say "Hello World" as we need to do for the first assignment:

```cpp
/***********************************************************************
* Program:
* Assignment 10, Hello World
* Brother Helfrich, CS124
* Author:
* Sam Student
* Summary:
* This program is designed to be the first C++ program you have ever
* written. While not particularly complex, it is often the most difficult
* to write because the tools are so unfamiliar.
***********************************************************************/
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World\n";
  return 0;
}
```

When you have finished writing the code for your program, save it and exit the editor. To save, first hit the `<control>` and `x` key at the same time, followed shortly with `<control>` and `s`. The shorthand for this key sequence is `c-x C-s`. You can then exit emacs with `c-x C-c`. More emacs keystrokes are presented in Appendix D at the back of this book.

### Compile

After the program is saved in a file, the next step is compilation. Compilation is the process of translating the program from one format (C++ in this case) to another (machine language). This process is remarkably similar to how people translate text from French to English. There are four steps:

1. **Lexer**
2. **Parser**
3. **Generator**
4. **Linker**

```cpp
#include <iostream>
using namespace std;

int main() {
  // display
  cout << "Hello World\n";
  return 0;
}
```

All four of these steps are done almost instantly with the compiler. The compiler we use in this class is `g++`. The syntax is:

```
g++ <source file>
```

If, for example, we are going to compile the file `hw10.cpp`, the following command will need to be typed:

```
g++ hw10.cpp
```

If the compilation is successful, then the file `a.out` will be created. If there was an error with the program due to a typographical error, then the compiler will state what the error was and where in the program the error was encountered.

### Test Bed

After we have successfully passed the compilation process, it is then necessary to verify our solution. This is typically done in a two-step process. The first is to simply run the program by hand and visually inspect the output. To execute a newly-compiled program, type the name of the program in the terminal. Since