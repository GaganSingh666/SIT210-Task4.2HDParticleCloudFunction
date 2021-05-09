int redLed = D1;
int yellowLed = D2;
int greenLed = D3;


void setup() {

    pinMode(redLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    
    Particle.function("lightStatus",lightControl);
}

void loop() {

}

int lightControl(String colour){
    
    if(colour == "red"){
        digitalWrite(redLed, HIGH);
        digitalWrite(yellowLed, LOW);
        digitalWrite(greenLed, LOW);
        return 1;
    }
    if(colour == "yellow"){
        digitalWrite(redLed, LOW);
        digitalWrite(yellowLed, HIGH);
        digitalWrite(greenLed, LOW);
        return 2;
    }
    if(colour == "green"){
        digitalWrite(redLed, LOW);
        digitalWrite(yellowLed, LOW);
        digitalWrite(greenLed, HIGH);
        return 3;
    }
    
}
