# `Arduino_TensorFlowLite.zip` — source and license

This file is a verbatim mirror of the pre-built Arduino TensorFlow Lite
for Microcontrollers (TFLM) library that ships with the *TinyML
Cookbook, 2nd Edition* (Iodice, Packt 2023). We mirror it here so
students get a predictable repo path and avoid the common "GitHub blob
URL returns an HTML preview, not the binary" pitfall.

## Provenance

- Upstream URL:
  <https://github.com/PacktPublishing/TinyML-Cookbook_2E/blob/main/ArduinoLibs/Arduino_TensorFlowLite.zip>
- Upstream repo license: **MIT** (PacktPublishing/TinyML-Cookbook_2E)
- Library inside the zip: **Arduino_TensorFlowLite v2.4.0-ALPHA**,
  by Pete Warden / TensorFlow Authors, derived from
  <https://github.com/tensorflow/tflite-micro-arduino-examples>
  and stripped of Nano-33-BLE-only conditionals by Iodice so it builds
  on any Arduino-compatible Cortex-M target.
- Mirrored on: 2026-05-13. SHA-256:
  ```
  sha256sum Arduino_TensorFlowLite.zip
  ```
  (run locally to compare against the upstream).

## How to install in Arduino IDE 2.x

1. Download `lab-1/Arduino_TensorFlowLite.zip` from this repo
   (the file should be ~1.48 MB; if you got ~219 KB you accidentally
   saved a GitHub HTML preview page — re-download from the *raw* link).
2. In the IDE, open **Sketch → Include Library → Add .ZIP Library…**
3. Select the downloaded `Arduino_TensorFlowLite.zip`. The IDE copies
   the contents to `~/Arduino/libraries/Arduino_TensorFlowLite/`.
4. Verify by opening **File → Examples → Arduino_TensorFlowLite → hello_world**.

## Why this library and not MicroTFLite?

There are several community ports of TFLite Micro in the Arduino
Library Manager registry (MicroTFLite, Chirale_TensorFLowLite,
ArduTFLite, EloquentTensorFlowCortexM, …). They have slightly different
headers and APIs. The Cookbook's example sketches all use
`#include <TensorFlowLite.h>` and the API exposed by *this* zip, so it
is the friction-free path for the course's lab and recipe sequence. If
you want to experiment with one of the Library-Manager ports later,
note that you will need to edit the Cookbook sketches accordingly.
