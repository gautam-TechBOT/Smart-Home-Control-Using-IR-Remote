# Smart Home Control Using IR Remote (Arduino)

This project allows you to control fan, lights, and other appliances using an IR remote and Arduino with a 4-channel relay module.

The Arduino reads IR signals using an IR receiver and switches relays based on remote button commands.

---

## 🔧 Hardware Used

- Arduino Nano / Uno
- IR Receiver Module
- IR Remote
- 4 Channel Relay Module (Active LOW)
- Jumper Wires
- 5V Supply

---

## 📦 Required Library

This project uses the **IRremote** library.

### Option A — Install from Arduino Library Manager (Recommended)

1. Open Arduino IDE  
2. Tools → Manage Libraries  
3. Search: IRremote  
4. Install: IRremote by Armin Joachimsmeyer  
5. Version tested: **v4.5+**

### Option B — Install from ZIP

IRremote.zip is included in this repository.

Sketch → Include Library → Add .ZIP Library → select IRremote.zip

---

## 🔌 Pin Connections

| Module | Arduino Pin |
|--------|-------------|
| IR Receiver OUT | D3 |
| Relay 1 | D4 |
| Relay 2 | D5 |
| Relay 3 | D6 |
| Relay 4 | D7 |

Relay VCC → 5V  
Relay GND → GND

---

## 🎮 Remote Command Mapping

| Command | Action |
|---------|---------|
| 1 | Relay 1 ON |
| 2 | Relay 1 OFF |
| 4 | Relay 2 ON |
| 5 | Relay 2 OFF |
| 7 | Relay 3 ON |
| 8 | Relay 3 OFF |
| 10 | Relay 4 ON |
| 27 | Relay 4 OFF |
| 26 | ALL ON |
| 18 | ALL OFF |

---

## 📷 Circuit Diagram

See circuit image in this repository.

---

## 🎥 Working Video

https://www.youtube.com/shorts/JcTsnxFFeXo

---

## ▶️ How to Run

1. Install IRremote library  
2. Upload code to Arduino  
3. Open Serial Monitor (9600 baud)  
4. Press remote buttons to control relays

---

## 👨‍💻 Author

Gautam — Embedded & Robotics Projects
