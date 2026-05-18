<!--
Source for templates/lab-report-template.docx (the Canvas artifact).
Maintain this Markdown; regenerate the .docx with (the --reference-doc
carries the Summer-2026 syllabus fonts/colors/styles — omit it and the
.docx silently reverts to pandoc defaults):

  pandoc templates/lab-report-template.md \
    -o templates/lab-report-template.docx \
    --reference-doc=../eAI-course/materials/EECE-4862-5862-Summer26.docx

(The syllabus lives in the sibling eAI-course repo; adjust the path if
your checkout layout differs.)

Section structure mirrors the Lab handout §7 ("Deliverables and
submission"). Keep the two in sync — if §7 changes, change this too.
This template is course-generic: it is used for Lab 1, Lab 2, and
Lab 3. Italicized text is instruction to the student; replace it.
-->

# EECE.4862 / 5862 — Embedded Artificial Intelligence

## Lab _N_ Report — _Lab Title_

| | |
|---|---|
| **Name** | _Your full name_ |
| **Student ID** | _Your UML student ID_ |
| **Course section** | _EECE.4862 (undergraduate) or EECE.5862 (graduate)_ |
| **Lab** | _Lab number and title_ |
| **Date submitted** | _YYYY-MM-DD_ |
| **Instructor** | Prof. Yan Luo |

*Submit this report as a single PDF on Canvas. Replace every italic
prompt with your own content and delete these instructions. Keep the
section headings.*

```{=openxml}
<w:p><w:r><w:br w:type="page"/></w:r></w:p>
```

## 1. Objectives

*Restate the objectives of this lab in your own words (3–6 sentences).
Do not copy the handout verbatim — show that you understand what the
lab set out to accomplish and why.*

## 2. Setup

*Describe and show your setup. Include the required photos and
screenshots called out in the handout, for example:*

- *Photo(s) of your breadboard wiring (clear enough to trace each
  connection).*
- *A screenshot of the IDE / toolchain confirming the board and port
  were detected.*
- *Any other setup evidence the handout asks for.*

*Caption every figure (e.g., "Figure 1 — push-button on D2 with 10 kΩ
pull-down"). Refer to each figure by number in the text.*

## 3. Method and Results

*Create one subsection per graded part of the lab — e.g., A.1, A.2,
A.3, A.4, B.1, B.2, B.3, B.4, and (EECE.5862 only) Part C. For each
part, cover: what you did, the key code (screenshot the important
snippets — do **not** paste 1000-line dumps), and the observed
results (serial logs, screenshots, measurements). Duplicate the
block below as needed.*

### 3.1 Part _X.Y — name_

**What I did.** *Brief description of your approach.*

**Code.** *Screenshot or short listing of the key snippet(s).*

**Results.** *Screenshots, serial logs, and/or a measurements table.
State the actual numbers where the handout asks for them.*

### 3.2 Part _X.Y — name_

**What I did.**

**Code.**

**Results.**

## 4. Analysis

*Collect the reflection paragraphs the handout requests (e.g., the
A.4, B.4, and Part-C reflections). Answer the specific questions
posed; tie each claim to a concept from the lectures or the textbook
rather than to intuition.*

## 5. AI Tool Disclosure

*Per the syllabus AI Use Policy, you must declare AI tool use.*

- **Did you use any AI tool on this lab?** _Yes / No_

*If **No**, state: "I did not use any AI tool on this lab." and delete
the table below.*

*If **Yes**, list every use:*

| Tool | What you asked it (prompt summary) | What it produced | How you modified / verified it |
|---|---|---|---|
| _e.g., ChatGPT_ | _..._ | _..._ | _..._ |

## 6. References

*Cite, at minimum, the course textbook and any Arduino / library
documentation pages you used. Use a consistent style.*

1. Iodice, G. M. *TinyML Cookbook* (2nd ed.). Packt, 2023.
2. Arduino. *Nano 33 BLE Sense Rev2 documentation*. _add the specific
   pages you used_.
3. _Additional sources..._

---

### Submission checklist (delete before submitting)

- [ ] This report exported as a **single PDF**.
- [ ] Title page complete; every italic prompt replaced.
- [ ] One Method-and-Results subsection per graded part.
- [ ] All required photos / screenshots / serial logs included and captioned.
- [ ] Analysis paragraphs answer the handout's specific questions.
- [ ] AI Tool Disclosure completed (Yes/No + table if Yes).
- [ ] References listed.
- [ ] Companion files uploaded to Canvas alongside the PDF: a `.zip`
      of all your sketches, with a `README.md` inside listing each
      sketch and what it does.
