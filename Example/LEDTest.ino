#include <LED_5641AS.h> //Change this if needed

LEDWrite writer;



void setup() {
  // put your setup code here, to run once:
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



}

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
