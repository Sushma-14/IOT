int pinsCount=8;
int pins[] ={2,3,4,5,6,7,8,9};
void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < pinsCount; i++)
  {
     pinMode(pins[i], OUTPUT);
  }  
}

void loop() {
 for(int i = 0; i<pinsCount; i++)
 {
   digitalWrite(pins[i], HIGH);
   delay(100);
   digitalWrite(pins[i], LOW);
 }
 
   
}
