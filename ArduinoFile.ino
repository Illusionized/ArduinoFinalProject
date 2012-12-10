//This program will utilize python in order to retrieve a g-mail account status.

int ledPin = 1; //Red led 1
int ledPin2 = 2; //Red led 2
int ledPin3 = 3; //Green led 3
int ledPin4 = 4; //Green led 4
int buzzerPin = 0;
int ser = 0;

void setup(){
  Serial.begin(9600);         
  pinMode(ledPin,OUTPUT);     //Led output
  pinMode(ledPin2,OUTPUT);     //Led output
  pinMode(ledPin3,OUTPUT);     //Led output
  pinMode(ledPin4,OUTPUT);     //Led output
  pinMode(buzzerPin, OUTPUT); //Buzzer output
}

void loop(){
  if (Serial.available()) {
    ser = Serial.read();     //read the serial port
    if(ser = 0){ //Turn off the red leds if there is no e-mail 
      digitalWrite(ledPin,LOW);
      digitalWrite(ledPin2,LOW);
    }else{ //Assume that there are unread emails, so turn on the green leds and the buzzer
      digitalWrite(buzzerPin, HIGH);
      delay(1000);
      digitalWrite(buzzerPin, LOW);
      digitalWrite(ledPin3,HIGH);
      digitalWrite(ledPin4,HIGH);
    }  
  delay(1000);
}
}