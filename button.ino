int button=2;
int temp;
void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp=digitalRead(button);
  Serial.print("value of button:");
  Serial.println(temp);
}
