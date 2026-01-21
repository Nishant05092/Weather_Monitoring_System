# 🌦️ Weather Monitoring System using DHT11 & Arduino

> A simple embedded system project to monitor real-time temperature and humidity using Arduino and DHT11 sensor.

---

## 📌 Project Overview

The **Weather Monitoring System** is an embedded system designed to measure and display **real-time temperature and humidity** of the surrounding environment.  
It uses a **DHT11 temperature and humidity sensor** interfaced with an **Arduino** microcontroller to collect environmental data and display it on an **LCD** or the **Serial Monitor**.

This project is ideal for beginners in **Embedded Systems**, **IoT**, and **Sensor Interfacing**.

---

## 🎯 Objective

- Measure real-time **temperature (°C)** and **humidity (%)**
- Interface **DHT11 sensor** with Arduino
- Display sensor data on **LCD / Serial Monitor**
- Understand basics of embedded programming and sensors

---

## 🧰 Components Used

- 🟦 Arduino Uno / Mega  
- 🌡️ DHT11 Temperature & Humidity Sensor  
- 🖥️ 16×2 LCD Display *(optional)*  
- 🔩 10kΩ Resistor *(if DHT11 module not used)*  
- 🔌 Breadboard  
- 🧵 Jumper Wires  
- 🔋 Power Supply / USB Cable  

---

## ⚙️ Working Principle

The **DHT11 sensor** consists of:
- A **capacitive humidity sensor** to measure relative humidity  
- An **NTC thermistor** to measure temperature  

The sensor provides **pre-calibrated digital output**.  
The Arduino reads this data, processes it, and displays:
- 🌡️ **Temperature in °C**
- 💧 **Humidity in %**

The readings are updated continuously in real time.

---

## 🔌 Circuit Connections

### DHT11 Sensor
| Pin | Connection |
|----|-----------|
| VCC | 5V (Arduino) |
| GND | GND |
| DATA | Digital Pin (D2 / D7) |

### LCD (Optional)
- Connected via **I2C** or **parallel interface** depending on setup

---

## 🧪 Procedure

1. Connect the DHT11 sensor to Arduino as per the circuit diagram  
2. Install the **DHT sensor library** in Arduino IDE  
3. Write the Arduino program to read sensor data  
4. Upload the code to Arduino  
5. Open **Serial Monitor** or observe **LCD display**  
6. Record temperature and humidity readings  

---

## 💻 Software & Libraries

- Arduino IDE  
- DHT Sensor Library  
- LiquidCrystal / LiquidCrystal_I2C Library  

---

## 📊 Output

- ✅ Real-time **Temperature (°C)**
- ✅ Real-time **Humidity (%)**
- ✅ Displayed on **LCD / Serial Monitor**

---

## 📈 Applications

- 🌾 Smart Agriculture  
- 🏠 Smart Home Systems  
- 🌍 Environmental Monitoring  
- 🏭 Industrial Automation  
- 🌦️ Weather Stations  

---

## ✅ Result

The system successfully measures and displays **real-time temperature and humidity** using Arduino and DHT11 sensor with reliable output.

---

## 🧾 Conclusion

This project demonstrates a **low-cost, efficient, and reliable** solution for environmental monitoring.  
It enhances understanding of **sensor interfacing, embedded systems, and real-time data acquisition**.

---

## 🚀 Future Scope

- Add **Wi-Fi module (ESP8266 / ESP32)** for IoT integration  
- Upload data to **cloud platforms**  
- Add **mobile app or web dashboard**  
- Use advanced sensors like **DHT22** for higher accuracy  

---

## 👨‍💻 Author

**Nishant Sharma**  
🎓 Mechatronics & Automation Engineering Student  

---

⭐ If you like this project, consider giving it a star!
