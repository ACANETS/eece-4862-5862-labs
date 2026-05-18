// Lab 1 · A.4 — Push-button (interrupt)  (deliverable: a4-button-interrupt.ino)
//
// Same wiring as A.3. Rewrite A.3 using an attached interrupt instead
// of polling: the ISR sets a volatile flag that the main loop consumes.
// Also report, per detected press, the microseconds elapsed in loop()
// since the previous button event (micros()). (handout §A.4)
//
// Skeleton compiles/uploads as-is. Fill in each TODO(student).

const int BUTTON_PIN = 2;   // D2
const int LED_PIN    = 3;   // D3

// Set by the ISR, consumed by loop(). `volatile` because it is shared
// between an interrupt and the main code.
volatile bool buttonPressed = false;

// Interrupt service routine — keep it tiny: no Serial, no delay, no
// heavy work. Just record that the event happened.
void onButtonRise() {
  // TODO(student): set the volatile flag here.
}

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), onButtonRise, RISING);

  // TODO(student): initialize any timing state for the micros() report.
}

void loop() {
  // TODO(student): when the flag is set, clear it *safely*, then
  // toggle LED_PIN and Serial.println a timestamped line.
  //   Hint: guard the read-and-clear of the flag briefly with
  //   noInterrupts()/interrupts() so a press can't be missed or
  //   double-counted.

  // TODO(student): also print the microseconds elapsed in loop()
  // since the previous button event, using micros(). This number is
  // the reflection point in your report. (handout §A.4)
}
