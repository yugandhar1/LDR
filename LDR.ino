void setup() {
  Serial.begin(115200);

  // put your setup code here, to run once:

}

void loop() {
  int sensorValue=analogRead(A0);
  // put your main code here, to run repeatedly:
  Serial.println(sensorValue);

}
