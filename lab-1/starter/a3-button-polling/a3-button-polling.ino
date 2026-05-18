// Lab 1 · A.3 — Push-button (polling)   (deliverable: a3-button-polling.ino)
//
// Wiring (handout §A.3 / Figure 1): push-button between D2 and 3V3 with
// a 10 kΩ pull-down D2->GND; external LED on D3 via a 220 Ω resistor to
// GND.
//
// Goal: read D2 every loop iteration (polling); on each *fresh*,
// debounced press, toggle the D3 LED and print a timestamped line.
//
// Skeleton compiles/uploads as-is. Fill in each TODO(student).

const int BUTTON_PIN = 2;   // D2 — external 10 kΩ pull-down, so plain INPUT
const int LED_PIN    = 3;   // D3 — external LED via 220 Ω

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);    // pull-down is external -> INPUT (not PULLUP)
  pinMode(LED_PIN, OUTPUT);

  // TODO(student): declare/initialize the state you need to detect a
  // *fresh* press and to debounce — e.g. the last stable reading and
  // the time it last changed.
}

void loop() {
  // TODO(student): read BUTTON_PIN every iteration (this is polling).

  // TODO(student): detect a *fresh* press only. Debounce so that
  // contact bounce or holding the button does NOT toggle repeatedly.
  //   Hint: remember the previous stable state; accept a change only
  //   after the new reading has held steady for a few ms (millis()).

  // TODO(student): on a fresh press, toggle LED_PIN and
  // Serial.println a line that includes a millis() timestamp.
  // (handout §A.3 — a serial log of >= 5 presses is a deliverable)
}
