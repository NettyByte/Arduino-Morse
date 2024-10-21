# 📡 Morsecode LED-Blinker für Arduino Mega 2560

![Morsecode LED](https://funduino.de/wp-content/uploads/2022/03/versuchsaufbau-rgb-led-ansteuern-arduino.webp)  

## 🛠️ Beschreibung

Dieses Projekt ermöglicht es, Morsecode über eine LED auszugeben. Mit einem Arduino Mega 2560 kannst du Buchstaben in Morsecode umwandeln und die LED entsprechend blinkend anzeigen.

## 📦 Komponenten

- **Arduino Mega 2560**
- **LED (angeschlossen an Pin 13)**
- **Widerstand (optional, um die LED zu schützen)**

## ⚙️ Einstellungen

- **Punkt Dauer:** 200 ms
- **Strich Dauer:** 600 ms
- **Buchstaben Pause:** 600 ms
- **Wort Pause:** 3000 ms

## 🔠 Morsecode Tabelle

Aktuell implementierte Buchstaben:

| Buchstabe | Morsecode |
|-----------|-----------|
| W         | .--       |
| S         | ...       |
| V         | ...-      |

Du kannst die Tabelle leicht erweitern, indem du zusätzliche Buchstaben und deren Morsecode hinzufügst.

## 📝 Funktionen

- **setup()**: Initialisiert den LED-Pin.
- **loop()**: Durchläuft die Buchstaben und gibt deren Morsecode aus.
- **playMorse()**: Spielt den Morsecode für einen bestimmten Buchstaben ab.
- **blinken()**: Steuert das Blinken der LED.

## 🚀 Verwendung

1. Lade den Code auf dein Arduino Mega 2560 hoch.
2. Beobachte, wie die LED Morsecode blinkt.
3. Passe die Buchstabentabelle nach deinen Wünschen an.

