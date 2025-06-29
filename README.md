LCD Interface with Arduino - Hello World
This project demonstrates how to interface a 16x2 LCD display with an Arduino Uno and print the classic "Hello, World!" message. The LCD is connected using the standard 4-bit mode with the LiquidCrystal library.

🛠️ Components Used:
Arduino Uno 

16x2 LCD display

10kΩ Potentiometer (for contrast control)

Jumper wires

Breadboard

🔌 Pin Connections:
LCD Pin	Function	Arduino Pin
1 (VSS)	GND	GND
2 (VDD)	VCC (5V)	5V
3 (VO)	Contrast Adjust	Potentiometer Center Pin
4 (RS)	Register Select	Pin 13
5 (RW)	Read/Write	GND
6 (E)	Enable	Pin 12
11-14	Data (D4-D7)	pin 4,5,6,7
