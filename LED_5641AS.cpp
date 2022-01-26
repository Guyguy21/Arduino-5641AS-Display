#include "Arduino.h"
#include "LED_5641AS.h"



void LEDWrite::writeNumber(int Digit, int Number) {
    int D1 = 7;
    int D2 = 4;
    int D3 = 3;
    int D4 = 8;
    int P1 = 6;
    int P2 = 5;
    int P3 = 2;
    int P4 = 13;
    int P5 = 12;
    int P6 = 11;
    int P7 = 10;
    int P8 = 9;
    switch (Digit) {
    case 1:
        digitalWrite(D1, LOW);
        digitalWrite(D2, HIGH);
        digitalWrite(D3, HIGH);
        digitalWrite(D4, HIGH);
        break;
    case 2:
        digitalWrite(D1, HIGH);
        digitalWrite(D2, LOW);
        digitalWrite(D3, HIGH);
        digitalWrite(D4, HIGH);
        break;
    case 3:
        digitalWrite(D1, HIGH);
        digitalWrite(D2, HIGH);
        digitalWrite(D3, LOW);
        digitalWrite(D4, HIGH);
        break;
    case 4:
        digitalWrite(D1, HIGH);
        digitalWrite(D2, HIGH);
        digitalWrite(D3, HIGH);
        digitalWrite(D4, LOW);
        break;
    }
    switch (Number) {
    case 0:
        digitalWrite(P1, HIGH);
        digitalWrite(P2, HIGH);
        digitalWrite(P3, HIGH);
        digitalWrite(P4, HIGH);
        digitalWrite(P5, HIGH);
        digitalWrite(P6, LOW);
        digitalWrite(P7, HIGH);
        digitalWrite(P8, LOW);
        break;
    case 1:
        digitalWrite(P1, LOW);
        digitalWrite(P2, LOW);
        digitalWrite(P3, HIGH);
        digitalWrite(P4, LOW);
        digitalWrite(P5, LOW);
        digitalWrite(P6, LOW);
        digitalWrite(P7, HIGH);
        digitalWrite(P8, LOW);
        break;
    case 2:
        digitalWrite(P1, HIGH);
        digitalWrite(P2, LOW);
        digitalWrite(P3, HIGH);
        digitalWrite(P4, HIGH);
        digitalWrite(P5, HIGH);
        digitalWrite(P6, LOW);
        digitalWrite(P7, LOW);
        digitalWrite(P8, HIGH);
        break;
    case 3:
        digitalWrite(P1, HIGH);
        digitalWrite(P2, LOW);
        digitalWrite(P3, HIGH);
        digitalWrite(P4, LOW);
        digitalWrite(P5, HIGH);
        digitalWrite(P6, LOW);
        digitalWrite(P7, HIGH);
        digitalWrite(P8, HIGH);
        break;
    case 4:
        digitalWrite(P1, LOW);
        digitalWrite(P2, HIGH);
        digitalWrite(P3, HIGH);
        digitalWrite(P4, LOW);
        digitalWrite(P5, LOW);
        digitalWrite(P6, LOW);
        digitalWrite(P7, HIGH);
        digitalWrite(P8, HIGH);
        break;
    case 5:
        digitalWrite(P1, HIGH);
        digitalWrite(P2, HIGH);
        digitalWrite(P3, LOW);
        digitalWrite(P4, LOW);
        digitalWrite(P5, HIGH);
        digitalWrite(P6, LOW);
        digitalWrite(P7, HIGH);
        digitalWrite(P8, HIGH);
        break;
    case 6:
        digitalWrite(P1, HIGH);
        digitalWrite(P2, HIGH);
        digitalWrite(P3, LOW);
        digitalWrite(P4, HIGH);
        digitalWrite(P5, HIGH);
        digitalWrite(P6, LOW);
        digitalWrite(P7, HIGH);
        digitalWrite(P8, HIGH);
        break;
    case 7:
        digitalWrite(P1, HIGH);
        digitalWrite(P2, LOW);
        digitalWrite(P3, HIGH);
        digitalWrite(P4, LOW);
        digitalWrite(P5, LOW);
        digitalWrite(P6, LOW);
        digitalWrite(P7, HIGH);
        digitalWrite(P8, LOW);
        break;
    case 8:
        digitalWrite(P1, HIGH);
        digitalWrite(P2, HIGH);
        digitalWrite(P3, HIGH);
        digitalWrite(P4, HIGH);
        digitalWrite(P5, HIGH);
        digitalWrite(P6, LOW);
        digitalWrite(P7, HIGH);
        digitalWrite(P8, HIGH);
        break;
    case 9:
        digitalWrite(P1, HIGH);
        digitalWrite(P2, HIGH);
        digitalWrite(P3, HIGH);
        digitalWrite(P4, LOW);
        digitalWrite(P5, LOW);
        digitalWrite(P6, LOW);
        digitalWrite(P7, HIGH);
        digitalWrite(P8, HIGH);
        break;

    }

}