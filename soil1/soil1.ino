
#define CUSTOM_SETTINGS
#define INCLUDE_SMS_SHIELD
#define INCLUDE_TEMPERATURE_SENSOR_SHIELD
#define INCLUDE_TEXT_TO_SPEECH_SHIELD
#define INCLUDE_TERMINAL_SHIELD  //this Terminal shield is just to check if everything is going alright as planned 
#define INCLUDE_EMAIL_SHIELD
#define INCLUDE_NOTIFICATION_SHIELD
/* Include 1Sheeld library. */
#include <OneSheeld.h>

int i= 1;
int sensorPin = 0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
 
int sensorVCC = 13;
int RED= 12; // Digital PIN 12  
int GREEN= 8; // Digital PIN 8  
void setup() {
  pinMode(RED, OUTPUT);  
  pinMode(GREEN, OUTPUT);  
   //Serial.begin(9600);  
   OneSheeld.begin();
  
 
}
 
void loop() {


  sensorValue = analogRead(sensorPin); 
  Terminal.println(sensorValue);
    if(sensorValue>600)
   {
   // SMS.send("9884473440","Please Water me");
    Terminal.println("water me");
    TextToSpeech.say("Water me");
    Email.send("sujaritha_b@hotmail.com","From Smart Plant","Hi, Pls water me ");
    Notification.notifyPhone("Please Water ME");
    
     digitalWrite(RED, HIGH);  
 
      
   }
   else
   {
    digitalWrite(GREEN,HIGH);  
   }
 
delay(1000);

 digitalWrite(GREEN,LOW);  
 digitalWrite(RED, LOW);  

}
 
  
                     

                    

