HardwareSerial GPS_Serial(2);

void setup() {
  Serial.begin(115200);   // Serial Monitor

  GPS_Serial.begin(9600, SERIAL_8N1, 16, 17); 
  // UART2, baud rate, RX=16, TX=17

  Serial.println("GPS Test Started");
}

void loop() {

  while (GPS_Serial.available()) {
    char c = GPS_Serial.read();
    Serial.print(c);
  }

}
