#include "thingProperties.h"

int ledPin=23;

void setup() {

  Serial.begin(9600);
  
  delay(1500); 


  pinMode(ledPin, OUTPUT);
  
  delay(1500);
  
  initProperties();


  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
 
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // Your code here 
  delay(200)
  
}

void onLedChange()  {
  // Add your code here to act upon Led change
  if(led == 1){
    digitalWrite(ledPin, HIGH);
    Serial.println("ON");
  }
  else{
    digitalWrite(ledPin, LOW);
    Serial.println("OFF");
  }
}
