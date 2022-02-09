
//declare value for the timer
unsigned long Timer;

//The following code will only run once
void setup() {
  Serial.begin(9600);   //Initialize the Serial Monitor to 9600 baud
  Timer = millis();     //Initialize the timer 
  analogReference(EXTERNAL); //set the analog Reference

}//end of setup

//The following code will run continously
void loop() {
  if (millis() - Timer >= 500) //if 500 ms have passed
  {
    int sensorValue = analogRead(A0); //create a int sensorValue which will equal a value from the arduino
    float voltage = sensorValue * (3.3/1023.0); //convert that value to a voltage
    Serial.println(voltage); //print the voltage
    Timer += 500; //set the timer to 500 ms
  }//end of if statement

}//end of loop
