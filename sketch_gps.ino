#include <TinyGPS++.h>

TinyGPSPlus gps;
HardwareSerial GPS_Serial(2);

void setup() {
  Serial.begin(115200);
  GPS_Serial.begin(9600, SERIAL_8N1, 16, 17);

  Serial.println("GPS Location");
}

void loop() {

  while (GPS_Serial.available()) {
    gps.encode(GPS_Serial.read());
  }
  if (gps.satellites.isUpdated()) {
    Serial.print("Satellites: ");
    Serial.println(gps.satellites.value());
  }

  if (gps.location.isUpdated()) {

    Serial.print("Latitude: ");
    Serial.println(gps.location.lat(), 6);

    Serial.print("Longitude: ");
    Serial.println(gps.location.lng(), 6);

    Serial.print("Speed: ");
    Serial.print(gps.speed.kmph());
    Serial.println(" km/h");
  }
}