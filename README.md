# Automatic Irrigation System using Arduino

## 📌 Project Overview
This project demonstrates an automatic irrigation system using Arduino UNO and a soil moisture sensor.  
The system automatically turns the water pump ON or OFF based on the moisture level of the soil, helping in water conservation and efficient irrigation.

---

## ⚙️ Components Used
- Arduino UNO  
- Soil Moisture Sensor  
- Relay Module  
- DC Water Pump / Motor  
- LEDs (Motor ON & Motor OFF indicators)  
- Resistors  
- External Power Supply  
- Connecting Wires  

---

## 🔁 Working Principle
- The soil moisture sensor measures the water content in the soil.
- The sensor sends an analog signal to the Arduino.
- Arduino compares the sensor value with a predefined threshold.
- If the soil is dry, the relay is activated and the motor turns ON.
- If the soil is wet, the relay is deactivated and the motor turns OFF.
- LEDs indicate the motor ON and OFF status.

---

## 🧠 Logic Used
- Dry soil → Motor ON → Motor ON LED glows  
- Wet soil → Motor OFF → Motor OFF LED glows  

The system works continuously without manual intervention.

---

## 💻 Programming Language
- Arduino Programming Language (C/C++ based)

---

## 📂 File Structure
- `Automatic_Irrigation_System.ino` – Arduino source code  
- `README.md` – Project documentation  
- `circuit_diagram.png` – Circuit diagram   

---

## ▶️ How to Run
1. Connect the components as per the circuit diagram.
2. Upload the `.ino` file to Arduino UNO using Arduino IDE.
3. Power the system.
4. Observe automatic motor operation based on soil moisture.

---

## 🎯 Applications
- Agriculture irrigation systems  
- Home gardening  
- Smart farming solutions  
