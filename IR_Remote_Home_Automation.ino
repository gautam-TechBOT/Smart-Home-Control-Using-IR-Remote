#include <IRremote.h>

#define IRpin 3
#define Relay1_pin 4  // Controlled by commands 1 (on), 2 (off)
#define Relay2_pin 5  // Controlled by commands 4 (on), 5 (off)
#define Relay3_pin 6  // Controlled by commands 7 (on), 8 (off)
#define Relay4_pin 7  // Controlled by commands 10 (on), 27 (off)

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IRpin);
  Serial.println("start");

  // Set relay pins as outputs and initialize to off (HIGH for active low)
  pinMode(Relay1_pin, OUTPUT);
  pinMode(Relay2_pin, OUTPUT);
  pinMode(Relay3_pin, OUTPUT);
  pinMode(Relay4_pin, OUTPUT);
  
  digitalWrite(Relay1_pin, HIGH);
  digitalWrite(Relay2_pin, HIGH);
  digitalWrite(Relay3_pin, HIGH);
  digitalWrite(Relay4_pin, HIGH);
}

void loop() {
  if (IrReceiver.decode()) {
    unsigned long cmd = IrReceiver.decodedIRData.command;
    Serial.println(cmd);  // Print every received command to serial monitor
    
    switch (cmd) {
      case 18:  // All off
        digitalWrite(Relay1_pin, HIGH);
        digitalWrite(Relay2_pin, HIGH);
        digitalWrite(Relay3_pin, HIGH);
        digitalWrite(Relay4_pin, HIGH);
        break;
        
      case 26:  // All on
        digitalWrite(Relay1_pin, LOW);
        digitalWrite(Relay2_pin, LOW);
        digitalWrite(Relay3_pin, LOW);
        digitalWrite(Relay4_pin, LOW);
        break;
        
      case 1:   // Relay 1 on
        digitalWrite(Relay1_pin, LOW);
        break;
        
      case 2:   // Relay 1 off
        digitalWrite(Relay1_pin, HIGH);
        break;
        
      case 4:   // Relay 2 on
        digitalWrite(Relay2_pin, LOW);
        break;
        
      case 5:   // Relay 2 off
        digitalWrite(Relay2_pin, HIGH);
        break;
        
      case 7:   // Relay 3 on
        digitalWrite(Relay3_pin, LOW);
        break;
        
      case 8:   // Relay 3 off
        digitalWrite(Relay3_pin, HIGH);
        break;
        
      case 10:  // Relay 4 on
        digitalWrite(Relay4_pin, LOW);
        break;
        
      case 27:  // Relay 4 off
        digitalWrite(Relay4_pin, HIGH);
        break;
    }
    
    IrReceiver.resume();
  }
}

