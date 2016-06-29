
// digital Pin
int BewegungsPin = 3;

// Variable Declaration
char BewegungsmelderState = 0;


void setup() {
    // Input
 pinMode(BewegungsPin, INPUT);
 Serial.begin(9600);
 


}

void loop() {

// Motion Sensor (Send)
 if (digitalRead(BewegungsPin) == LOW && BewegungsmelderState != 0)
 {
  
  BewegungsmelderState = 0;
  
  Serial.println("LOW");
 }
 if (digitalRead(BewegungsPin) == HIGH && BewegungsmelderState != 1)
 {
  
  BewegungsmelderState = 1;
  
  Serial.println("HIGH");
  
  //iffft
  bool published = Particle.publish("Let me in!", "1");
    if (published == false) {
      Serial.println("dgtf-MCP-button-click failed to publish");
    }
 }
 
 

}