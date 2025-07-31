Light Mood Changer 🌈

The Light Mood Changer is an Arduino-based project that uses a photoresistor to detect ambient light and change the color of an RGB LED accordingly. It’s a simple and interactive way to visualize changes in light levels and is great for learning how sensors and outputs work together in a circuit.

📦 Components

Arduino Uno (or compatible)
Breadboard
RGB LED
Photoresistor (LDR)
Resistors (varied: for LED and LDR voltage divider)
Jumper wires
USB cable (for programming)
🔧 Installation & Setup

Build the circuit:

Connect the photoresistor in a voltage divider setup with a resistor to an analog pin (e.g., A0).
Connect the RGB LED (with current-limiting resistors) to three PWM-capable digital pins (e.g., 9, 10, 11).
Use the breadboard to organize your components and jumper wires.
Upload the code:

Connect your Arduino to your computer via USB.
Open the Arduino IDE.
Upload the provided sketch (see LightMoodChanger.ino).

💡 How It Works

The photoresistor measures ambient light levels.
When the room is bright, the RGB LED displays warm or brighter colors.
When the room is dim or dark, the LED shifts to cooler or darker colors.
This creates a visual “mood” that reflects the lighting environment.


🖼️ Images / Videos
enter image description here----------

🔗 Simulation Links

- [Tinkercad Simulation ](https://www.tinkercad.com/)

Insert your own simulation link if you’ve built it on Tinkercad or another simulator.

🙌 Credits

Created by: Zahara BG
