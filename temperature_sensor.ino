int val;
int tempPin = A1;

void setup() {
  Serial.begin(9600);
  pinMode(A1,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  int temp_adc_val;
  float temp_val;
  temp_adc_val = analogRead(A1);
  temp_val = (temp_adc_val*4.88);
  temp_val = (temp_val/10);
  Serial.print("Temperature = ");
  Serial.print(temp_val);
  Serial.print("Degree Celsius\n");
  delay(1000);
  
  // put your main code here, to run repeatedly:

}
