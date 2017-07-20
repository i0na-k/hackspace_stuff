void setup() {

Serial.begin(9600);

}

void loop() {

int sensorValue = analogRead(A0);

if (sensorValue > 250){
  Serial.println("val greater than 250");
 }

else{
  Serial.println("val lower than 250");
}

Serial.println(sensorValue);

delay(1);

}
