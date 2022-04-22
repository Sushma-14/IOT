int sensorPin = A0;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
delay(1000);
  // put your main code here, to run repeatedly:

}
