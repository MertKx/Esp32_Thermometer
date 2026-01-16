# Esp32_Thermometer
This project demonstrates an IoT based environmental monitoring system developed using Esp32 controller. 

The system integrates a DHT11 sensor to capture real-time temperature and humidity data. The core functionality involves a dynamic threshold mechanism where the user can manually adjust the humidity limit using a potentiometer. Depending on whether the current humidity level is above or below this user-defined threshold, the system triggers different LED indicators (Red/Blue) to provide immediate visual feedback.

![WhatsApp Image 2026-01-16 at 23 17 55 (1)](https://github.com/user-attachments/assets/7c3aeb49-7b02-4daa-b33d-4f7ed117fbf2)
As you can see here if humidity of environment is lower than threshold value (which determined by potentiometer movements) blue light shows up.


![WhatsApp Image 2026-01-16 at 23 17 55](https://github.com/user-attachments/assets/85652942-bef5-404d-837b-a5c3dfe95b70)
If its higher than threshold value, red light glows.


This setup serves as a foundational prototype for smart home applications, illustrating how analog inputs can interact with digital sensors to automate household environments. It highlights key embedded systems concepts such as Analog-to-Digital Conversion (ADC), sensor data processing, and real-time hardware control.
