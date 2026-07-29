# GPS-NEO-6M-project
GPS Location Tracker

GPS-Based Student Location Tracking System Using ESP32 and NEO-6M GPS Module

Project Description

The GPS-Based Student Location Tracking System is an embedded systems project designed to determine and monitor the real-time location of a student using an ESP32 microcontroller and a NEO-6M GPS module. The GPS module receives signals from multiple satellites and calculates the device's geographical position, including latitude, longitude, altitude, speed, and UTC time.

The ESP32 reads this information from the GPS module through UART communication, processes the data, and displays it on the Serial Monitor or an LCD/OLED display. If Wi-Fi is available, the ESP32 can also upload the GPS coordinates to a cloud server, Google Sheets, or a web application, allowing users to monitor the student's location remotely. The coordinates can be opened in Google Maps to view the exact location.

Components:

ESP32

NEO-6M GPS

USB cable

Output:
Latitude

Longitude

Altitude

Speed

Satellite count

Time
