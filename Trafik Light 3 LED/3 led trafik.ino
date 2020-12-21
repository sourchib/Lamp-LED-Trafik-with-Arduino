int kaki13=13;
int kaki12=12;
int kaki11=11;

void setup() {  
  pinMode(kaki13, OUTPUT);
  pinMode(kaki12, OUTPUT);
  pinMode(kaki11, OUTPUT);
}

void loop() {
  digitalWrite(kaki13, HIGH);
  delay(500);
  digitalWrite(kaki13, LOW);
  delay(500);  
  digitalWrite(kaki12, HIGH); 
  delay(500);
  digitalWrite(kaki12, LOW);
  delay(500);  
  digitalWrite(kaki11, HIGH);
  delay(500);
  digitalWrite(kaki11, LOW);
  delay(500);
}
