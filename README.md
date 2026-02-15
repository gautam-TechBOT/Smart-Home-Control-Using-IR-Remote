# Smart Home Control Using IR Remote (Arduino)

This project allows you to control fan, lights, and other appliances using an IR remote and Arduino with a 4-channel relay module.

The Arduino reads IR signals using an IR receiver and switches relays based on remote button commands.

---

## 🔧 Hardware Used

- Arduino UNO (tested)
- Arduino Nano (also compatible – same pin numbers)
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
4. Install: **IRremote by Armin Joachimsmeyer**  
5. Version tested: **v4.5+**

---

### Option B — Install from ZIP

IRremote.zip is included in this repository.

Steps:

1. Open Arduino IDE  
2. Sketch → Include Library → Add .ZIP Library  
3. Select `IRremote.zip`  
4. Restart Arduino IDE

---

## 🔌 Pin Connections

| Module | Arduino Pin |
|--------|-------------|
| IR Receiver OUT | D3 |
| Relay IN1 | D4 |
| Relay IN2 | D5 |
| Relay IN3 | D6 |
| Relay IN4 | D7 |

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

## ▶️ How to Run

1. Install IRremote library  
2. Connect hardware as per wiring below  
3. Upload the code to Arduino  
4. Open Serial Monitor (9600 baud)  
5. Press remote buttons to control relays

---

## 🔌 Circuit Diagram (Text Wiring – Arduino UNO + IR Receiver + 4-Channel Relay)

This project uses an Arduino UNO, IR receiver module, and a 4-channel relay module (active LOW).

---

### 🎯 IR Receiver Connections

| IR Receiver Pin | Arduino UNO Pin |
|-----------------|-----------------|
| OUT / SIGNAL    | D3              |
| VCC             | 5V              |
| GND             | GND             |

---

### 🎯 Relay Module Connections (Control Side)

| Relay Module Pin | Arduino UNO Pin |
|------------------|-----------------|
| IN1              | D4              |
| IN2              | D5              |
| IN3              | D6              |
| IN4              | D7              |
| VCC              | 5V              |
| GND              | GND             |

> ⚠️ Relay module is **Active LOW**  
> LOW = Relay ON, HIGH = Relay OFF (code is written accordingly)

---

### ⚡ AC Load Wiring (Per Relay Channel)

Each relay channel has three terminals: **COM – NO – NC**

- AC Phase (Live) → COM  
- NO → Appliance Phase Input  
- AC Neutral → Direct to Appliance Neutral  

**Working Logic:**

- Relay ON → COM–NO connected → Appliance ON  
- Relay OFF → Open → Appliance OFF

---

### 🧠 Pin Map (Matches Arduino Code)

---

## 📷 Circuit Diagram Image

Circuit diagram image will be added soon. Text wiring diagram is provided above.

---

## 🎥 Working Video

https://www.youtube.com/shorts/JcTsnxFFeXo

---

## ⚠️ Safety Notes

- Turn OFF mains power before AC wiring  
- Do not touch relay terminals when powered  
- Use proper insulation  
- First test with low-voltage load if possible  
- Ensure Arduino, relay module, and IR receiver share **common GND**

---

## 👨‍💻 Author

Gautam — Embedded & Robotics Projects
