# MPMC-Project-

INTRODUCTION

Project Highlights
We have made this project using an Arduino set which helped us to find a solution for the problem statement.
We were able to successfully determine all the results approximately.

Operating Highlights
We have designed a setup with the aim of it working as multipurpose project so that it benefits all the domains it touches.
While doing this project each member of the group benefit by learning the basics of Arduino and also effective utilization of sensors in our daily lives.

PROBLEM STATEMENT

-Effective utilization of Arduino to create an alarm system for real life motion detection.

OBJECTIVES
•	TO CREATE AN ARDUINO SETUP THAT MEASURES THE DISTANCE OF A TARGET FROM THE SETUP.
•	TO CREATE AN ARDUINO SETUP THAT CALCULATES THE SPEED OF SOUND IN REAL TIME.
•	TO CREAT AN ARDUINO SETUP THAT ACTS AS AN ALARM SYSTEM FOR MOVEMENT DETECTION (PROXIMITY SENSOR).

EQUIPMENTS

The Following Are the Equipment Which Were Used To Build The Setup:
•	ARDUINO UNO
•	ULTRASONIC SENSORS
•	16 BY 2 LIQUID CRYSTAL DISPLAY(LCD)
•	PIEZO ELECTRIC SENSOR 
•	LIGHT EMITTING DIODE
•	RESISTOR 
•	JUMPER CABLES
•	BREADBOARD
•	POTENTIOMETER 
•	USB CABLE 

METHODOLOGY

TO MEASURE THE DISTANCE OF A TARGET WHEN SPEED OF SOUND IS KNOWN
The objective of this project is to linearly measure distance using the ultrasonic sensor, and then display that value on the LCD display. 

Procedure
For the first step, we connected the UNO with LCD, Ultrasonic sensors, Potentiometer, LED and Piezo electric sensor with the help of breadboard and jumper cables.
For the second step we, connected the UNO with the PC.

TO MEASURE THE SPEED OF SOUND WHEN THE DISTANCE IS FIXED
We will be making very little changes in the formula to obtain speed as we know : Speed=Distance/Time
 
We are going to change the variables and use time and distance(Here 6 inches) as a reference to calculate speed.
Procedure
For the first step, we connected the UNO with LCD, Ultrasonic sensors, Potentiometer, LED and Piezo electric sensor with the help of breadboard and jumper cables.
For the second step we, connected the UNO with the PC using a USB cable.
This sensor is fairly easy to use. To hook it up, we take the sensor VCC pin and hook it to the Arduino 5V pin. We take the sensor GND and connect to Arduino GND. The Trig pin on the sensor we take to pin 13 on the Arduino and the Echo pin on the sensor we connect to the Arduino pin 11.
The sensor works as follows.  You take the trigger pin LOW with a digital write. You then pause, take the trigger pin HIGH, pause, and then take the trigger pen LOW again.  This LOW-HIGH-LOW sequence creates a high pitched ultrasonic tone, or ping, which is sent out from the sensor. This ping will go out and bounce off the first thing in front of it, and bounce back to the sensor. The sensor will output a HIGH pulse on its echo pin, and the length of the pulse in microseconds indicates the time it took the ping to travel to the target and return. 

RESULT
In this project we successfully:
•	Measured the distance of the target from the setup.
•	Measured the speed of sound in real time (approx. 340).
•	Created an effective alarm system which sets off whenever it detects a motion.

FUTURE IMPLEMENTATION
-IT CAN BE USED IN PARKING SYSTEM WHERE WE CAN DIGITALLY SEE WHICH PARKING SPOTS ARE ALLOCATED AND WHICH SPOTS ARE VACANT.
-IT CAN BE USED AS VEHICLE ANTI-DETECTION SENSOR WHICH WILL SOUND AN ALARM WHEN A VEHICLE GETS TOO CLOSE TO AN OBJECT
-IT CAN BE OPERATED AS A MOTION-DETECTING ALARM SYSTEM.

Conclusion
The prototype created by can effectively detect closeness of an object from the source hence we have provided an effective solution to the problem statement that was to provide an alarm system by we are sensing the motion of an object and also display its distance from the source and indicating the closeness of the object via a LED which blinks slowly when he target is far and increases its blinking pattern and the alarm sound interval for which we have used a piezo electric sensor.

References: http://www.toptechboy.com/
 
 



