#include<LiquidCrystal.h>
LiquidCrystal LCD(12,11,5,4,3,2);

int trigPin=13; //Sensor trigger pin is connected to arduino 13
int echoPin=9; //Sensor echo pin is connected to arduino 11
float pingTime; //Time for ping to hit target and return
float speedOfSound; //Speed of sound
float targetDistance=6.0; //Target distance 


void setup() {
  Serial.begin(9600); //Turn on serial port
  pinMode(trigPin, OUTPUT); //Set trig pin as an output
  pinMode(echoPin, INPUT); //Set echo pin as an input

  LCD.begin(16,2); 
  LCD.setCursor(0,0);
  LCD.print("Speed of Sound: ");
}

void loop() {
  digitalWrite(trigPin, LOW); //Set trigger pin LOW
  delayMicroseconds(2000); //Pause to let signal settle
  digitalWrite(trigPin, HIGH); //Take trigger pin HIGH
  delayMicroseconds(10); //Pause with trigger pin HIGH
  digitalWrite(trigPin, LOW); //Finish trigger pause by bringing it low 

  pingTime=pulseIn(echoPin, HIGH); //Measure ping travel time in microseconds

  speedOfSound=2*targetDistance/pingTime; //Gives us speed in inches per microseconds
  speedOfSound=speedOfSound*25400; //Gives us speed in meters per second (1 inch = 0.0254 meters, 1 microsecond = 1 * 10^-6 seconds)
  
  LCD.setCursor(0,1);
  LCD.print("                "); //Clears second row
  LCD.setCursor(0,1);
  LCD.print(speedOfSound); 
  LCD.print(" m/s");
  delay(350);
}
