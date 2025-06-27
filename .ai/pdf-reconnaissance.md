# 📄 PDF Metadata Journal

Use this table to log layout observations from each page. This will help the AI infer formatting rules later.

| Page | Font Families      | Font Sizes | Monospace? | Table? | Header Style          | Color Notes                      | Comments                          |
| ---- | ------------------ | ---------- | ---------- | ------ | --------------------- | -------------------------------- | --------------------------------- |
| 1    | Helvetica, Courier | 12, 16     | Yes        | No     | Bold, All Caps        | `<!-- Table Colors: #0d5aa6 -->` | Appears to be code introduction   |
| 2    | Times-Roman        | 10, 14     | No         | Yes    | Large, Bold (Size 18) | `<!-- Table Colors: #e0e0e0 -->` | Table rows are shaded alternately |
| 3    | Courier            | 11         | Yes        | No     | N/A                   | N/A                              | Code block, fixed spacing         |
| 4    | Helvetica-Bold     | 16, 18     | No         | Yes    | Section Titles        | Header row is blue               | Blue band for header row          |

---

## 🕵️ PDF Reconnaissance Insights

- **Fonts found:**
  - GalliardITCbyBT-Roman (TrueType)
  - GalliardITCbyBT-Bold (TrueType)
  - Calibri (TrueType)
  - SymbolMT (Type0)
  - ArialMT (TrueType)
- **Font usage example:**
  - `/F2 20.04 Tf` then `[(T)123(abl)4(e )5(of Co)5(n)6(tents)] TJ` (shows 'Table of Contents' with kerning)
  - Font sizes observed: 20.04, 11.04, 9.48, etc.
- **Text extraction example:**
  - 'Table of Contents' appears as split text drawing commands for kerning.
  - The following text was found in the PDF (split across several PDF text drawing commands):

    ```
    Procedural programming, the subject of CS 124 preceding this class, is a style of programming where the focus is on the function. This includes how to subdivide a program into functions (in a process called modularization) and what goes on inside functions. Virtually any programming project can be completed with procedural programming tools.
    ```

    This text was found by searching for fragments (like 'rogram') in the QDF file, then reading the surrounding lines (see lines 28840–28880 in `output.qdf`). The text is encoded in PDF as a series of `[(...)] TJ` commands, often split and with kerning/spacing values between fragments. To extract text, look for these `TJ` commands and piece together the fragments, ignoring the kerning numbers.

    See [.ai/pdf-raw-text.md](./pdf-raw-text.md)

- **Other structure:**
  - Image XObjects are present (e.g., `/Type /XObject /Subtype /Image`)
  - Many streams found, likely for images, font data, and page content.

---

## ✍️ Notes to AI Agent

- Detect and tag monospace blocks with triple backticks (```)
- Infer heading levels based on font size & boldness
- Preserve HTML comments like `<!-- Table Colors: #hex -->`
- Look for repeating visual patterns and log them for propagation
