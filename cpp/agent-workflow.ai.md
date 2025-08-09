Here’s a clear, step-by-step workflow for converting and organizing each chapter/unit from PDF to a clean, Obsidian/AI-ready format. This can be used as a repeatable process for all units:

---

## PDF to AI Markdown Conversion & Organization Workflow

### 1. OCR & Markdown Extraction
- The Python OCR script (e.g., `pdf-markdown-ocr.ipynb`) was used to process each PDF:
    - The script was run on the target PDF file.
    - This generated:
        - `ocr_response.json` (raw OCR output)
        - `output.md` (markdown with image links)
        - An `images/` folder containing extracted images
  - Input: Original PDF (e.g., `1-0-First-Program.pdf`)
  - Output: 
    - ocr_response.json (raw OCR metadata and content)
    - output.md (combined markdown, with image links in Obsidian format)
    - Extracted images in an `images/` subfolder
After this step, the file structure is:

```
<Unit-directory>/
    <chapter-directory>/
        <working-directory>/
            ocr_response.json
            output.md
            images/
                <extracted images>
```

### 2. Directory Structure Standardization
- For each chapter/unit, ensure the following structure:
  ```
  <chapter-name>/
    .vscode/
      assets/
        sam.png (common to all folders)
        sue.png
        unit-1-background.jpeg (placeholder)
        markdown-styles.css
      settings.json (create if needed)
    <chapter-name>.ai.md (generated from ocr output)
    <chapter-name>.pdf
    exercise10-helloWorld/ (other existing content remains)
      main.cpp
      README.md
      tests/
        test.cpp
    README.md (other README.md files remain)
    (artifacts left from OCR to be removed)
  ```

### 3. Image Organization
- Move/copy all images from the OCR output (`images/`) to assets.
- Rename images for clarity/consistency if needed (e.g., `flowchart-model.png`, `capybara.png`, etc.).

### 4. AI Markdown File Generation
- Create `<chapter>.ai.md` in the chapter root.
- Compose the file as follows:
  - Add YAML frontmatter with:
    - `title`: Human-readable chapter title
    - `date_generated`: ISO 8601 timestamp of conversion
    - `model`, `usage_info`, `document_annotation`: from ocr_response.json
  - Paste the markdown content from output.md
  - There should be a top-level heading following directly after the frontmatter block (e.g., `# 1.0 First Program {.unit-1-background}`) at this point.
    - create if needed
  - Update all image links to point to assets

### 5. (optional) Quality Check
- Verify:
  - All images display correctly in the markdown
  - Frontmatter is present and accurate
    - no empty lines
  - Directory structure matches the standard
  - No unnecessary files remain in the root or subfolders

### 6. Repeat for Each Chapter/Unit
- the above steps are to be replicated cleanly in each chapter/unit, driven by yours truly

---

### 7. Style conversions:

**Table of Contents** at the start of each Unit:

```md
# Unit 1: Using Objects {.unit-1-background style="clip-path: unset"}

| ---
| [1.0 Design Documents](1.0-Using-Objects.ai) {.table-of-contents}
| [1.1 Defensive Programming](../Chapter-1.1/1.1-Defensive-Programming.ai.md)
| [1.2 Exception Handling](../Chapter-1.2/1.2-Exception-Handling.ai.md)
| [1.3 Structures](../Chapter-1.3/1.3-Structures.ai.md)
| [1.4 Separate Compilation](../Chapter-1.4/1.4-Separate-Compilation.ai.md)
| [1.5 Function: Advanced Topics](../Chapter-1.5/1.5-Function-Advanced-Topics.ai.md)

> **In this Chapter:**
> [[toc]]

# Unit 1: Using Objects {.unit-1-background}

# 1.0 Design Documents
```

```md
**Objectives**

<!-- ... -->

**Prerequisites**
```

Note the default header for all top-level headings are ## for h2:
```md
## What is a design document and why you should care
```

Sometimes there will be a ### or more, but we'll take care of that later.

### 8. Sam/Sue:

They are to be formatted as such:

```md
> [!Danger] Sue's Tips
> ![Sue](./.vscode/assets/sue.png){.sue}
> ...contents, code blocks, etc. (usually only one line)
```

```md

> [!tldr] Sam's Corner
> ![Sam](./.vscode/assets/sam.png){.sam}
> ...contents, code blocks, etc. (usually only one line)
```

This way we utilize the obsidian callouts extension for easy rendering.

Sometimes Sue is misspelled as Suc or something like that by the generator.

They originally look like:
```md
## Sue's Tips

...contents, code blocks, etc.
```

### 8. Bold Text

Sometimes there will be paragraphs like this:

```md
What: The design overview ...
How: Describe the highlights ...
Example: Back to our ...
```

This will vary in content and other means, but the important indicator is the use of `: `. It should be formatted like this:

```md
**What**: The design overview should briefly ...

**How**: Describe the highlights of how the code ...

**Example**: Back to our Tic-Tac-Toe program...
```

### 9. Pre-formatted styles and extensions

Subtle syntax changes have been added either by CommonMark flavored markdown found in VS Code or with Extensions that I've installed that add features to it.

I have also created a lengthy list of frequently-needed styles in ./.vscode/assets/markdown-styles.css.

A single demo file with incredibly helpful blocks and explanations for this can be found at [markdown-styles-demo.md](Unit-1/1.0-First-Program/.vscode/markdown-styles-demo.md)

This includes things like [easy spans]{style="..."} and obsidian-style callouts (used incredibly extensively in this project).

Make sure to find any situation where a block of code is enhanced by this, as well as how it's been utilized in previously edited files.

### 10. Examples and Assignments

There are certain longer blocks such as the following:

```md

<table class="Example">
<thead>
<tr>
<th colspan="3">

## Example 1.0 - Tic-Tac-Toe Design Document

</th>
</tr>
</thead>
<tbody>
<tr>
<th>

Demo

</th>
<td>

This demo is meant to illustrate a complete design document for a program approaching the complexity of what one would expect to see in CS 124.

</td>
<th></th>
</tr>
<tr>
<th>

Solution

</th>
<td>

The important components of the design document are presented in the preceding section.  It is important to
observe how each section addresses a different aspect of the overall design.
![alt text](<1.0-Design-Documents.ai.0-Using-Objects_images/1.0-Design-Documents_img_4 (1).jpeg>)

</td>
<th></th>
</tr>
<tr>
<th>

Challenge

</th>
<td>

As a challenge, see if you can complete a design document for a project you have worked on in a previous semester.
Pay special attention to the new sections (Design Overview, Interface Design, Data-structures, File Format, and
Error Handling).

</td>
<th></th>
</tr>
<tr>
<th>

See Also

</th>
<td>

The complete solution is available at:

> [Example 1.0 – Tic-Tac-Toe.pdf](https://content.byui.edu/file/2bcea375-2fd1-4982-84da-a4e11bdffc83/1/160.1.0.Example.pdf)

The source-code for the game is available at [`1-0-ticTacToe.html`](https://content.byui.edu/file/3a840000-304a-4261-bf8b-ceef50d0bdef/1/1-0-ticTacToe.html) or:

> [`/home/cs165/examples/1-0-ticTacToe.cpp`](https://content.byui.edu/file/3a840000-304a-4261-bf8b-ceef50d0bdef/1/1-0-ticTacToe.html)

</td>
<th></th>
</tr>
</tbody>
</table>
```

This utilizes lengthy amounts of styling in css to create a perfectly structured table to match the original found in the pdf, although it takes a bit structure blocks. Keep in mind this table.Example element is used in nearly every chapter.

**Problems**

There are also "Problems" and "Challenges" found at the end as well:

```md
> ## Problem 1 <!-- h2 elements have specific styling to bring the look of it all together -->
>
> What typically goes at the top of a structure chart?
>
> Answer: <input> <!-- input has flexible styling to fill the container -->
>
> *Please see page 35 for a hint.* <!-- blockquote > em has special styling -->
```

We utilize css to detect and format these correctly.

Note: sometimes, 'hint' is misspelled as 'bint'.

---

### What do we do?

Follow the workflow above for each chapter/unit:

1. **Run the OCR script** on each PDF to extract markdown and images.
2. **Standardize the directory structure** as shown, moving images to `.vscode/assets/` and cleaning up artifacts.
3. **Generate the AI markdown file**:
  - Add YAML frontmatter with required metadata.
  - Paste in the markdown content from the OCR output.
  - Update all image links to point to `.vscode/assets/`.
  - Insert a top-level heading after the frontmatter if missing.
4. **Apply style conversions**:
  - Add a Table of Contents at the start of each unit.
  - Convert Sam/Sue tips to Obsidian callouts with images.
  - Bold any "What:", "How:", "Example:" style phrases.
  - Ensure Example tables and Problem/Challenge blocks use the correct markdown and classes.
5. **Quality check**:
  - Verify images, headings, and frontmatter.
  - Remove any leftover OCR artifacts.
  - Confirm directory structure matches the standard.

> **Tip:**  
> For any step that is too time-consuming or ambiguous to automate, add a `> TODO` note in the markdown so it can be handled manually later.

This process can be partially automated with scripts for file moving, renaming, and link updating, but some formatting and style conversions may require manual review or targeted scripts. Use `> TODO` comments to flag incomplete or questionable sections for later cleanup.

---

## Files Changed (Audit)

> [!tldr]- All Files in `ehrrsn7/object-oriented-programming/cpp` GitHub Repo
>
> ```
> .vscode/
>   assets/
>     sam.png
>     sue.png
>     unit-1-background.jpeg
>     markdown-styles.css
>   settings.json
> Unit-1/
>   1.0-First-Program/
>     1-0-First-Program.ai.md
>     1-0-First-Program.pdf
>     exercise10-helloWorld/
>       main.cpp
>       README.md
>       tests/
>         test.cpp
>     README.md
>   1.1-Defensive-Programming/
>     1-1-Defensive-Programming.ai.md
>     1-1-Defensive-Programming.pdf
>     README.md
>   1.2-Exception-Handling/
>     1-2-Exception-Handling.ai.md
>     1-2-Exception-Handling.pdf
>     README.md
>   1.3-Structures/
>     1-3-Structures.ai.md
>     1-3-Structures.pdf
>     README.md
>   1.4-Separate-Compilation/
>     1-4-Separate-Compilation.ai.md
>     1-4-Separate-Compilation.pdf
>     README.md
>   1.5-Function-Advanced-Topics/
>     1-5-Function-Advanced-Topics.ai.md
>     1-5-Function-Advanced-Topics.pdf
>     README.md
>   ...
> README.md
> ```
> 
> </details>

> [!tldr] 1.0-First-Program
> 
> - `1-0-First-Program.ai.md` — newly generated AI markdown file with frontmatter, updated image links, and style conversions.
> - `.vscode/assets/` — images from OCR output moved/renamed here as needed.
> - No changes to `exercise10-helloWorld/` or its contents.
> - No changes to `README.md` or other existing files.
> - Temporary OCR artifacts (`ocr_response.json`, `output.md`, `images/`) removed after processing.
> - No changes outside `1.0-First-Program/`.