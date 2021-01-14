int buttonApin = 9;
int buttonBpin = 8;
int ledPin = 5;
int count; 

void setup(){
    pinMode(ledPin, OUTPUT);
    pinMode(buttonApin, INPUT_PULLUP); //default value for the switch = HIGH
    pinMode(buttonBpin, INPUT_PULLUP);
    count = 0;
    
}

void loop(){
    //turn led on with button a, and off with button b
    /*  if (digitalRead(buttonApin) == LOW){
    digitalWrite(ledPin, HIGH);
    }

    if (digitalRead(buttonBpin) == LOW){
    digitalWrite(ledPin, LOW);
    } */


    //keeps led on HIGH while it's pressed
    /* if (digitalRead(buttonApin) == LOW) {
        digitalWrite(ledPin, HIGH); 
    } else {
        digitalWrite(ledPin, LOW); 
    } */

    //turns led  on and off from the same button 
    //might need to check how that interacts with loops --- what if I press it multiple times in a row?
    if (digitalRead(buttonApin) == LOW){
        count++;
        delay(500);
    }

    if (count % 2 != 0){
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW);
    }
}