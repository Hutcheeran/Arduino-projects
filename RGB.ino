//define pins
#define BLUE 6 
#define GREEN 5 
#define RED 3

void setup(){
    pinMode(RED, OUTPUT);
    pinMode(BLUE, OUTPUT);
    pinMode(GREEN, OUTPUT);
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
}

//define variables
int r = 255;
int g = 0;
int b = 0;
int del = 100;

void loop(){
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
    


    
    

    //purple :3
    //analogWrite(RED, 155);
    //analogWrite(GREEN, 41);
    //analogWrite(BLUE, 255); */
}
