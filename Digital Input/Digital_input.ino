int buttonApin = 2;
//int buttonBpin = 8;
int ledPin = 5;
boolean state; 

void setup(){
    pinMode(ledPin, OUTPUT);
    pinMode(buttonApin, INPUT_PULLUP); //default value for the switch = HIGH
    //pinMode(buttonBpin, INPUT_PULLUP);
    state = false;
    
}

void loop(){
    //turns led  on and off from the same button 
    //might need to check how that interacts with loops --- what if I press it multiple times in a row?
    if (digitalRead(buttonApin) == LOW){
        state = !state;
        delay(500);
    }

    if (state){
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW);
    }
}