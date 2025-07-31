# Light Mood Changer 🌈

The **Light Mood Changer** is an Arduino-based project that uses a photoresistor to detect ambient light and change the color of an RGB LED accordingly. It’s a simple and interactive way to visualize changes in light levels and is great for learning how sensors and outputs work together in a circuit.

---

## 📦 Components

- Arduino Uno (or compatible)
- Breadboard
- RGB LED
- Photoresistor (LDR)
- Resistors (varied: for LED and LDR voltage divider)
- Jumper wires
- USB cable (for programming)

---

## 🔧 Installation & Setup

### 1. Build the Circuit

- Connect the photoresistor in a **voltage divider** setup with a resistor to an **analog input pin** (e.g., A0).
- Connect the **RGB LED** with current-limiting resistors to **three PWM digital pins** (e.g., 9, 10, 11).
- Use a breadboard and jumper wires to lay out your components neatly.

### 2. Upload the Code

- Connect your Arduino to your computer via USB.
- Open the Arduino IDE.
- Upload the provided sketch (`LightMoodChanger.ino`).

---

## 💡 How It Works

- The **photoresistor** measures ambient light levels.
- When the room is **bright**, the RGB LED displays **warmer or brighter colors**.
- When the room is **dim or dark**, the LED shifts to **cooler or darker colors**.
- This creates a visual “mood” that reflects the current lighting environment.

---

## 🖼️ Images / Videos

<img width="1440" height="715" alt="image" src="https://github.com/user-attachments/assets/14a2557d-a4c5-4a6f-80e9-40f7042dd6b5" />

![Light Mood Changer Circuit](/mnt/data/Night%20Light%20(1)%20(1).png)

> *(Photo shows full circuit layout using Arduino Uno, RGB LED, photoresistor, and resistors on a breadboard.)*

---

## 🔗 Simulation Links

- [Tinkercad Simulation](https://www.tinkercad.com/)  
> *Insert your actual simulation link here if available.*

---

## 🙌 Credits

**Created by:** Zahara BG  
Inspired by ambient lighting and real-world mood lamps.  
Thanks to the Arduino community for example projects and guidance.
