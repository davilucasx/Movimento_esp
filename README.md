Motion Detection with ESP32 and HC-SR501

This project uses a HC-SR501 PIR motion sensor connected to an ESP32 to detect movement.
When motion is detected, a LED turns on. When no motion is detected, the LED turns off.

The system also prints messages to the Serial Monitor, indicating whether motion is detected or not.

## Demo

![Project Demo](/demo.gif)

📋 Components Used

ESP32
HC-SR501 PIR motion sensor

LED

220Ω resistor

Breadboard

Jumper wires


⚙️ How It Works

The HC-SR501 PIR sensor detects movement in the environment.
When motion is detected:
The sensor sends a HIGH signal to the ESP32.
The LED turns on.
The message "Motion detected" is printed in the Serial Monitor.
When no motion is detected:
The sensor sends a LOW signal.
The LED turns off.
The message "No motion" is printed in the Serial Monitor.

The program also uses a variable (estadoSensor) to prevent repeated messages from being printed continuously in the Serial Monitor.

🔌 Circuit Connections

Component	ESP32 Pin

HC-SR501 VCC	5V / VIN

HC-SR501 GND	GND

HC-SR501 OUT	GPIO 5

LED (+)	GPIO 4

LED (-)	GND (through 220Ω resistor)
