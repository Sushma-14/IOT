int array[11][8]={{0,0,0,0,0,0,1},{1,0,0,1,1,1,1},{0,0,1,0,0,1,0},{0,0,0,0,1,1,0},{1,0,0,1,1,0,0},{0,1,0,0,1,0,0},{0,1,0,0,0,0,0},{0,0,0,1,1,1,1},{0,0,0,0,0,0,0},{0,0,0,1,1,0,0},{0,1,1,1,0,0,0}};
int s[]={2,3,4,5,6,7,8,8};
void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<8;i++){
    pinMode(s[i],OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int c=0;c<11;c++){
    for(int j=0;j<8;j++){
      digitalWrite(s[j],array[c][j]);
      }
      delay(3000);
  }

}
