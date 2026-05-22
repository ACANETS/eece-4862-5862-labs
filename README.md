# EECE.4862 / 5862 — Embedded Artificial Intelligence Labs

Lab handouts, starter code, and the lab report template for
**EECE.4862 / 5862 Embedded Artificial Intelligence**, UMass Lowell
(Summer 2026).

All labs run on the **Arduino Nano 33 BLE Sense Rev2** (SKU ABX00070)
and build toward deploying TensorFlow Lite Micro models on the board.

---

## What's in this repo

```
.
├── lab-1/                 ← Lab 1 handout, starter sketches, figures
│   ├── README.md            student-facing handout (renders on GitHub)
│   ├── Lab1-…-Summer26.pdf   printable Canvas version of the handout
│   ├── starter/             skeleton sketches you start from
│   └── figures/             wiring diagrams
├── lab-kit-bom.md         ← bill of materials for the hardware kit
└── templates/             ← lab report template (.md source + .docx)
```

Lab 2 and Lab 3 are added to this repo as the course progresses (see
the schedule below).

---

## Lab schedule

| Lab | Topic | Released | Due | Points (4862 / 5862) |
|---|---|---|---|---|
| **Lab 1** | Microcontroller Programming + First TFLite Micro Inference | Mon May 18, 2026 | Sun Jun 7, 2026 | 20 / 18 |
| **Lab 2** | Sensor-Driven ML (weather station or KWS) | Mon Jun 1, 2026 | Sun Jun 21, 2026 | 20 / 18 |
| **Lab 3** | Gesture Recognition on the Nano | Mon Jun 22, 2026 | Sat Jul 12, 2026 | 20 / 18 |

Dates and points are also posted in Canvas, which is authoritative if
anything here disagrees.

---

## Getting started

1. **Order your kit early.** See [`lab-kit-bom.md`](lab-kit-bom.md) for
   the full bill of materials. Order in time for parts to arrive before
   Week 1 — you can't do Lab 1 without the board.
2. **Read the lab handout.** Open the lab's `README.md` (e.g.
   [`lab-1/README.md`](lab-1/README.md)) — it renders directly on
   GitHub, or use the matching PDF in the same folder.
3. **Start from the provided skeletons.** Each lab's `starter/` folder
   has skeleton sketches with `// TODO(student)` markers. They compile
   and upload as-is so you can confirm your toolchain first; the graded
   logic is yours to fill in. A starter submitted with its TODOs
   unfilled earns no credit for that part.

---

## Submitting your work

Write your report using the
[lab report template](templates/lab-report-template.docx) (also posted
on Canvas) and submit it as a **single PDF** through Canvas, along with
a `.zip` of your Arduino sketches. Each lab's handout lists the exact
deliverables. No email submissions.

Per the syllabus **AI Use Policy**, disclose any AI tool you used —
the tool, your prompts, its output, and the modifications you made.

---

## Hardware

Everything runs on the **Arduino Nano 33 BLE Sense Rev2** plus a small
breadboard kit (LED, push-button, resistors, jumper wires, a
data-capable USB cable). **No soldering is required.** Full details and
purchase links are in [`lab-kit-bom.md`](lab-kit-bom.md).

---

## Getting help

- **Wiring or compile questions** — post in the General Discussion forum
  on Canvas; others usually have the same question.
- **Conceptual questions** — bring them to the weekly Zoom session.
- **Kit / deadline issues** — message the instructor through Canvas Inbox.

---

## References

- Iodice, G.M. *TinyML Cookbook* (2nd Edition). Packt Publishing, 2023.
- Arduino. *Nano 33 BLE Sense Rev2* documentation and product pages.
- Online companion notes: <https://acanets.github.io/learn-eAI/>
