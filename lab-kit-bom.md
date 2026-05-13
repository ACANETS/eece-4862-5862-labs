# Lab Kit — EECE.4862 / 5862 Embedded Artificial Intelligence

Summer 2026 · Course starts **Monday, May 18, 2026**

> **Order by Wed, May 13, 2026** so your parts arrive before Week 1.
> If you wait until the weekend you may not have hardware in time for Lab 1.

You'll use this hardware for all three labs and (optionally) for your final project. Total cost for the **required** kit is **about $67–87** including tax and shipping. **No soldering is required** for any item in this kit — but only if you order the exact variants listed below.

The kit comes in three tiers. Most students need only Tier 1.

| Tier | Who needs it | Cost |
|---|---|---|
| **Tier 1 — Required** | Everyone | $67–87 |
| **Tier 2 — Optional Bundle A: Pico starter** | Students whose final project follows the *TinyML Cookbook* Ch. 7 FOMO recipe (uses laptop webcam, no embedded camera) | +$10–15 |
| **Tier 3 — Optional Bundle B: Pico + camera** | Students whose final project needs a standalone, embedded camera (smart doorbell, recyclables classifier, sign-language recognizer, etc.) | +$25–50 |

You can decide on Tier 2 / Tier 3 later — buy them only if your project plan calls for them. Tier 1 must be ordered now.

---

## What's already on the Arduino Nano 33 BLE Sense Rev2

The Nano packs a remarkable set of sensors into its 45 × 18 mm form factor — you do **not** need to buy any of these as separate components:

- **Temperature + humidity** (HS3003 sensor) — used in Lab 2's weather station.
- **9-axis IMU** (BMI270 6-axis + BMM150 3-axis) — accelerometer, gyroscope, magnetometer; used in Lab 3's gesture recognition.
- **Microphone** (MP34DT06) — used for keyword-spotting projects.
- **Barometric pressure** (LPS22HB).
- **Light, color, proximity, and gesture** (APDS-9960).

**Important software note for the Rev2 board:** the *TinyML Cookbook* examples were written for the older Rev1, which used the HTS221 sensor. With Rev2, replace `#include <Arduino_HTS221.h>` with `#include <Arduino_HS300x.h>` and adjust the read calls accordingly. Lab handouts will call this out where relevant.

If you happen to have a Rev1 board, the sensor lineup is similar but slightly different (LSM9DS1 IMU instead of BMI270 + BMM150, HTS221 instead of HS3003); both work for this course.

---

## Tier 1 — Required (everyone)

| # | Item | Variant to buy | Approx. price |
|---|---|---|---|
| 1 | **Arduino Nano 33 BLE Sense Rev2 with headers** | SKU **ABX00070** | $40–44 |
| 2 | **Solderless breadboard, 830 tie-points** | Any reputable brand (ELEGOO, BusBoard, SparkFun) | $5–8 |
| 3 | **Jumper wires set, 120 pc** | Mix of M-M, M-F, F-F | $5–8 |
| 4 | **Push-button + 5 mm LEDs (3) + resistors (220 Ω, 10 kΩ)** | Any basic component pack | $3–5 |
| 5 | **USB cable, USB-A to micro-USB, data-capable** | Must support **data**, not power-only | $5–8 |
| | **Subtotal** | | **$58–73** |
| | Tax + shipping (typical) | | $9–14 |
| | **Tier 1 total** | | **$67–87** |

### Avoid these common mistakes

- **Don't buy ABX00069** (the no-headers Nano Sense Rev2). It's a few dollars cheaper but you'll need to solder 30 pins yourself.
- **Don't buy a separate temperature/humidity sensor.** The on-board HS3003 covers everything we need. (You may see the *TinyML Cookbook* using a DHT22 — that's because it was written before the Rev2 board became common. Skip it.)
- **Don't reuse a USB cable that came with a phone charger** unless you've confirmed it carries data. Many charge-only cables look identical but won't let your computer see the board. If your laptop says "unknown device" or shows nothing when you plug the Arduino in, the cable is the most likely culprit.
- **Don't skip the breadboard.** Some labs require external wiring (LED indicators, push-button) even though the sensors are built-in.

---

## Tier 2 — Optional Bundle A: Pico starter (~$10–15 add-on)

Buy this **only if** your final project will follow the *TinyML Cookbook* Chapter 7 FOMO workflow, where your **laptop's webcam** captures frames and the Raspberry Pi Pico runs the inference. No embedded camera is needed for this path — your laptop is the camera.

| # | Item | Variant | Approx. price |
|---|---|---|---|
| A1 | **Raspberry Pi Pico H** | Pre-soldered headers (the **"H"** suffix matters) | $5–8 |
| A2 | **Extra jumper wires** | If your Tier 1 set is running low | $3–5 |
| | **Tier 2 add-on** | | **$10–15** |

**Avoid:** the bare Pico (no headers) — same soldering issue as the Nano. The Pico **W** (wireless) and Pico **WH** (wireless + headers) also work but cost a few dollars more without giving you anything useful for this course.

---

## Tier 3 — Optional Bundle B: Pico + embedded camera (~$25–50 add-on)

Buy this **only if** your final project needs a standalone, deployable embedded vision system — for example, a smart doorbell that runs without a laptop attached. Two camera choices, depending on your project's needs:

### Lean (monochrome, ~$20 add-on on top of Tier 1)

| # | Item | Variant | Approx. price |
|---|---|---|---|
| B1 | Raspberry Pi Pico H | (same as A1; if you already bought Tier 2, skip) | $5–8 |
| B2 | **Arducam HM01B0 monochrome camera module** | 324 × 324, SPI/PIO interface | $10–15 |
| B3 | Extra jumper wires | | $3–5 |
| | **Tier 3 lean** | | **$20–30** total add-on |

Good for: person detection, gesture-from-image, FOMO-style object detection where color isn't required.

### Flexible (color, ~$40 add-on on top of Tier 1)

| # | Item | Variant | Approx. price |
|---|---|---|---|
| B1 | Raspberry Pi Pico H | (same as above) | $5–8 |
| B2′ | **Arducam Mini 2MP Plus** | OV2640, SPI, with onboard frame buffer | $25–30 |
| B3 | Extra jumper wires | | $3–5 |
| | **Tier 3 flexible** | | **$35–45** total add-on |

Good for: color classification (recyclables sorter, plant-disease detector), higher-resolution work.

**Don't buy:** the OV7670 camera. Despite being the cheapest module on Amazon, the camera vendor itself recommends against it for Pico — high pin count, no SPI, and the sensor is end-of-life.

---

## Where to buy

**For the Arduino Nano 33 BLE Sense (item #1), use an authorized distributor.** Counterfeit Arduinos exist on Amazon and unbranded marketplaces, and they often have subtly broken sensors that cause hours of debugging. Pay the extra $3 for a known-good one.

| Vendor | Best for | US shipping |
|---|---|---|
| **DigiKey** ([digikey.com](https://www.digikey.com)) | Arduino Nano (item 1), guaranteed authentic | 1–2 days |
| **Mouser** ([mouser.com](https://www.mouser.com)) | Same as DigiKey | 1–2 days |
| **Adafruit** ([adafruit.com](https://www.adafruit.com)) | Arduino, Pico H, HM01B0, jumpers — premium curated experience | 3–5 days |
| **SparkFun** ([sparkfun.com](https://www.sparkfun.com)) | Same as Adafruit | 3–5 days |
| **PiShop US** ([pishop.us](https://www.pishop.us)) | Pico H | 3–5 days |
| **Arducam direct** ([arducam.com](https://www.arducam.com)) | HM01B0, Mini 2MP Plus | 5–7 days |
| **Amazon** | Breadboard, jumpers, USB cable, basic components only | 1–2 days (Prime) |
| **Arduino Store USA** ([store-usa.arduino.cc](https://store-usa.arduino.cc)) | Arduino Nano (slightly higher price, slowest shipping) | 5–7 days |

**Recommended ordering plan to get everything by Friday May 16:**

1. **Order today (Sat May 9 or Sun May 10):** the Arduino Nano from DigiKey, Mouser, or Adafruit. This is the long-lead item.
2. **Order today or Monday May 11:** breadboard, jumpers, USB cable, and basic components from Amazon (fastest shipping).
3. **If buying Tier 2 / Tier 3:** order with Tier 1; consolidating shipments saves $5–10.

---

## Reference links

These are search URLs — open them to see current listings, prices, and reviews. They are starting points, not endorsements; equivalent variants from other reputable vendors are acceptable. **Verify each item against the description above before clicking buy.**

### Tier 1 (everyone)

| # | Item | Suggested links |
|---|---|---|
| 1 | **Arduino Nano 33 BLE Sense Rev2 with headers (ABX00070)** | DigiKey: <https://www.digikey.com/en/products/result?keywords=ABX00070> · Mouser: <https://www.mouser.com/c/?q=ABX00070> · Adafruit: <https://www.adafruit.com/?q=nano%2033%20ble%20sense%20rev2> · Arduino Store: <https://store-usa.arduino.cc/products/nano-33-ble-sense-rev2>. **Avoid Amazon for this item — counterfeits are common.** |
| 2 | **Solderless breadboard, 830 tie-points** | Amazon search: <https://www.amazon.com/s?k=ELEGOO+breadboard+830+tie+points> · Adafruit: <https://www.adafruit.com/?q=830%20tie-point%20breadboard> |
| 3 | **Jumper-wire set, 120 pc (M-M, M-F, F-F)** | Amazon search: <https://www.amazon.com/s?k=jumper+wire+set+120+pcs+male+female> · Adafruit: <https://www.adafruit.com/?q=jumper%20wire%20bundle> |
| 4 | **Push-button + 5 mm LEDs + 220 Ω / 10 kΩ resistors (starter component pack)** | Amazon search (component pack): <https://www.amazon.com/s?k=arduino+starter+electronics+component+kit+resistor+led+button> · SparkFun resistor kit: <https://www.sparkfun.com/products/10969> · Adafruit through-hole resistor pack: <https://www.adafruit.com/?q=resistor%20pack> |
| 5 | **USB-A to micro-USB *data* cable, 3–6 ft** | Amazon search: <https://www.amazon.com/s?k=USB-A+to+micro-USB+data+cable+3ft>. Confirm the listing says **data sync**, not "charge only". |

### Tier 2 — Pico starter (optional)

| # | Item | Suggested links |
|---|---|---|
| A1 | **Raspberry Pi Pico H** (pre-soldered headers) | PiShop US: <https://www.pishop.us/?s=Pico+H> · Adafruit: <https://www.adafruit.com/?q=Raspberry%20Pi%20Pico%20H> · DigiKey: <https://www.digikey.com/en/products/result?keywords=Pico+H> · Amazon search: <https://www.amazon.com/s?k=Raspberry+Pi+Pico+H+with+headers> |
| A2 | Extra jumper wires | See Tier 1 row #3 |

### Tier 3 — Pico + camera (optional)

| # | Item | Suggested links |
|---|---|---|
| B2 | **Arducam HM01B0 monochrome camera module** | Arducam direct: <https://www.arducam.com/?s=HM01B0> · Amazon search: <https://www.amazon.com/s?k=Arducam+HM01B0+himax> |
| B2′ | **Arducam Mini 2MP Plus (OV2640)** | Arducam direct: <https://www.arducam.com/?s=Mini+2MP+Plus> · Amazon search: <https://www.amazon.com/s?k=Arducam+Mini+2MP+Plus+OV2640+SPI> |

> **A note on link stability.** Amazon product URLs go stale frequently (sellers come and go, items get repriced, listings get pulled). The links above are *search queries*, which are stable across listing turnover — but the specific *listings they return* will change. If a search returns nothing matching the variant described in the BOM table, use one of the vendor-direct options instead (DigiKey, Adafruit, SparkFun, PiShop US, Arducam direct).

---

## Cost summary

| Configuration | Estimated total |
|---|---|
| Tier 1 only (most students) | **$67–87** |
| Tier 1 + Tier 2 (Pico starter) | $80–105 |
| Tier 1 + Tier 3 lean (Pico + mono camera) | $90–115 |
| Tier 1 + Tier 3 flexible (Pico + color camera) | $105–130 |

---

## Substitutions

If you have any of the following already, you can skip buying duplicates:

- **A solderless breadboard with at least 400 tie-points** — fine to reuse.
- **A jumper-wire set** — fine to reuse, as long as it has M-M, M-F, and F-F wires.
- **A USB-A to micro-USB *data* cable** — confirm it carries data (try plugging in any USB-micro-B device and see whether your computer recognizes it).

You **cannot** substitute for the Arduino Nano 33 BLE Sense. The labs depend on its specific on-board sensor lineup and the matching Arduino libraries. An Arduino Uno, ESP32, or any other board will not work.

---

## Help

- For ordering questions or substitution requests, post in the **General Discussion** forum on Canvas. Don't email the instructor for kit questions — others have the same questions.
- For technical setup help once your kit arrives, the Week 1 chapter of the online companion notes walks through everything: <https://acanets.github.io/learn-eAI/>
- If parts haven't arrived by Wed May 21 and you ordered on time, contact the instructor through Canvas Inbox so we can adjust your Lab 1 deadline.

---

*Last updated: May 9, 2026. Prices are USD retail estimates and may vary by vendor and date. Specific SKUs and brand names are not endorsements; equivalent variants from other reputable vendors are acceptable.*
