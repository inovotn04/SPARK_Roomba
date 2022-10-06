#define AIN1 5
#define BIN1 6

void setup() {
  Serial.begin(9600);
  
  pinMode(AIN1,OUTPUT);
  pinMode(BIN1,OUTPUT);
  
}
 
void loop() {
  
  digitalWrite(AIN1,HIGH); 
  digitalWrite(BIN1,HIGH); 

  delay(1000);
  
  digitalWrite(AIN1,LOW); 
  digitalWrite(BIN1,LOW); 
  
  delay(1000);
}
