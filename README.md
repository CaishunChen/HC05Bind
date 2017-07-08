# HC05Bind
Use Arduino to pair a HC05 module with a Bluetooth device. If the BT device is a GPS module that sends NMEA sentences the library will parse GGA and GSA sentences.

Basic Bluetooth sketch connects (at 38400) the HC05 to a BT device
and communicate using the serial monitor at 9600

Connect HC05 VCC to Arduino pin 12

Connect HC05 EN to Arduino pin 11

Connect the HC05 GND to GND

Connect the HC-05 TX to Arduino pin 2 RX.

Connect the HC-05 RX to Arduino pin 3 TX through a voltage divider.

See example for methods.
