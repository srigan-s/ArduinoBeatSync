// Pin setup
int buzzer = 8;        // Piezo buzzer connected to pin 8
int led = 13;          // LED connected to pin 13

// Define melody (notes in Hz)
int melody[] = {262, 294, 330, 349, 392, 440, 494, 523}; // C D E F G A B C
// Define beat durations (in ms)
int noteDurations[] = {400, 400, 400, 400, 400, 400, 400, 600};

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // Play the melody
  for (int i = 0; i < 8; i++) {
    int duration = noteDurations[i];
    tone(buzzer, melody[i], duration);   // Play note
    digitalWrite(led, HIGH);             // LED on (beat)
    delay(duration * 0.8);               // Keep LED on slightly shorter
    digitalWrite(led, LOW);              // LED off
    delay(duration * 0.2);               // Short pause between notes
  }

  // Pause before repeating
  delay(1000);
}
