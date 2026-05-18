// Lab 1 · A.2 — Blink + Serial logging   (deliverable: a2-blink-serial.ino)
//
// Goal (handout §A.2): toggle the on-board LED at 1 Hz AND print a
// timestamped message to Serial on every state change, e.g.
//     LED ON @ 1234 ms
//     LED OFF @ 2234 ms
//
// This skeleton compiles and uploads as-is (it just does nothing yet)
// so you can confirm your toolchain works before adding logic. Fill in
// each TODO(student). Open Tools -> Serial Monitor at 9600 baud.

const int LED_PIN = LED_BUILTIN;   // on-board orange LED

void setup() {
  Serial.begin(9600);              // Serial Monitor: 9600 baud
  pinMode(LED_PIN, OUTPUT);

  // TODO(student): initialize whatever state you need to track the
  // LED (e.g. its current on/off state, and the time of the last
  // toggle if you use millis()-based timing).
}

void loop() {
  // TODO(student): toggle LED_PIN once per second.
  //   Hint: simplest is delay(1000); cleaner is to compare millis()
  //   against the time of your last toggle so loop() stays responsive.

  // TODO(student): on each state change, print ONE line to Serial:
  //   "LED ON @ <ms> ms" or "LED OFF @ <ms> ms".
  //   Hint: Serial.println(...) and millis() for <ms>. (handout §A.2)
}
