# Arduino-5641AS-Display
Code to work with the Arduino 5641AS 4-Digit 8-Segment Display

# Wiring

This library only works with a single wiring configuration as follows:


```
                       7  6  5  4  3  2
                       |  |  |  |  |  |
                       |  |  |  |  |  |
---------------------------------------------------------------
|   |^^|          |^^|          |^^|          |^^|            |
|   |__|          |__|          |__|          |__|            |               
|   |  |          |  |          |  |          |  |            |              
|   |__|  O       |__|  O       |__|  O       |__|  O         |                                             
---------------------------------------------------------------
                       |   |  |  |  |  |
                       |   |  |  |  |  |
                      13  12  X  10 9  8
  
```

There are 12 pins on the module, with 11 of them leading to corresponding digital outputs as marked by the above numbers.

The one pin that doesn't connect (Marked by the "X") would normally control the decimal point. My own project didn't need it, but I'll leave it as an exercise to the reader to integrate it if they need it.
          

# How to Integrate the Library
Create a new folder in your Arduino libraries folder (ProgramFiles(x86)/Arduino/libraries in my case) and name it; I called it LED_5641AS.

Inside that folder, place the LED_5641AS.h and LED_5641AS.cpp files.

In the Arduino IDE, navigate through the menus through Sketch > Include Libraries and click on "Manage Libraries"

A screen should pop up, and it will begin checking for libraries. Once it's done, check Sketch > Include Libraries again and your folder should now be visible in the menu.

Click on your folder name in the menu, and the library should be successfully imported.

# Coding 

Firstly, in the setup() segment of code, you must activate your digital output pins as such:
```
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
```
Otherwise, the board won't know what to do with the instructions.

This code works by declaring an object of class "LEDWrite", and then calling method "writeNumber()" of that object to output a number.

writeNumber(int Digit, int Number) takes two integer inputs, the first ranging from 1-4 and selecting the digit from left to right, and the second ranging from 0-9 and selecting the number to display. For example, writeNumber(2,3) would output the number 3 on the second slot.

# Code example
``` Arduino
LEDWrite writer;

void loop() {
  // put your main code here, to run repeatedly:
writer.writeNumber(1,1);
delay(1000);
writer.writeNumber(2,2);
delay(1000);
writer.writeNumber(3,3);
delay(1000);
writer.writeNumber(4,4);
delay(1000);

}
```
The above would declare an object 'writer' of class LEDWrite, and the loop would sequentially display 1---, -2--, --3-, ---4.




