int led=11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 analogWrite(11,512);
 delay(100);
 analogWrite(11,256);
 delay(100);
 analogWrite(11,128);
 delay(100);
 analogWrite(11,0);
 delay(100);
}
