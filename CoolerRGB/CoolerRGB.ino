#define BLUE 6 
#define GREEN 5 
#define RED 3
#define BUTTON 9 
#define LED 3 5 6 

int r = 255;
int g = 0;
int b = 0;
int del = 50;

int status;

void setup(){
    pinMode(RED, OUTPUT);
    pinMode(BLUE, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BUTTON, INPUT_PULLUP);
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
}

void colourChange(){
    r = 255; //make sure that you always have R

    for (int i = 0; i < 255; i++)
    {
        r--;
        g++;
        analogWrite(RED, r);
        analogWrite(GREEN, g);
        delay(del);
    }

    for (int i = 0; i < 255; i++)
    {
        g--;
        b++;
        analogWrite(GREEN, g);
        analogWrite(BLUE, b);
        delay(del);
    }

    for (int i = 0; i < 255; i++)
    {
        b--;
        r++;
        analogWrite(BLUE, b);
        analogWrite(RED, r);
        delay(del);
    }
}

void turnOff(){
    analogWrite(RED, 0);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 0);
}

int state = 0;
// for now only 0 or 1:
// 1 - red
// off

void loop(){
    if (digitalRead(BUTTON) == LOW){
        state = (state + 1) % 4;
        delay(500);
    }

    switch(state){
        case 0: 
            turnOff();
            break;
        case 1: 
            turnOff();
            digitalWrite(RED, HIGH);
            break;
        case 2:
            turnOff();
            digitalWrite(GREEN, HIGH);
            break;
        case 3:
            turnOff();
            digitalWrite(BLUE, HIGH);
            break;
        /* case 4:
        //problem --> doesn't turn off when you push again the button
            turnOff();
            colourChange();
            break; */
    }
}
