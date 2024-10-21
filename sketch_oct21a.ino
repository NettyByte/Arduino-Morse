/**
 *
 * Modell: Ardunio Mega 2560
 * Hilfe: Github Co-Pilot / Angaben in Millisek. (Dauer)
 *
 * Morsecode Tabelle: https://de.wikipedia.org/wiki/Morsecode
 */
 
//Bibliothek

#include <Arduino.h>
#include <string.h>

// Einstellungen
const int ledPin = 13;
const int punktDauer = 200;
const int strichDauer = 600;
const int buchstabenPause = 600;
const int wortPause = 3000;

// Morse buchstaben
const char* morseCode[][2] = {
  { "W", ".--" },
  { "S", "..." },
  { "V", "...-" },
};
// Morse größe / Buchstaben Größe
const int Buchstabencount = sizeof(morseCode) / sizeof(morseCode[0]);

// Parameter

void playMorse(const char* buchstabe);
void blinken(int dauer);

// Pin Auswahl / Setup

void setup() {
  pinMode(ledPin, OUTPUT);
}

// Wiederholen

void loop() {
  for (int i = 0; i < Buchstabencount; i++) {
    playMorse(morseCode[i][0]);
    delay(wortPause);
  }
}

// Morse Abspielen
void playMorse(const char* buchstabe) {
  for (int i = 0; i < Buchstabencount; i++) {
    if (strcmp(morseCode[i][0], buchstabe) == 0) {
      const char* code = morseCode[i][1];
      for (const char* symbol = code; *symbol != '\0'; symbol++) {
        if (*symbol == '.') {
          blinken(punktDauer);
        } else if (*symbol == '-') {
          blinken(strichDauer);
        }
        delay(punktDauer);
      }
      delay(buchstabenPause);
    }
  }
}

// Blink dauer Pin aus den Einstellungen und die Punkte Dauer
void blinken(int dauer) {
  digitalWrite(ledPin, HIGH);
  delay(dauer);
  digitalWrite(ledPin, LOW);
  delay(punktDauer);
}
