#define echoPin 2
#define trigPin 3
int Kaki12=12;
int Kaki11=11;
int Kaki10=10;
int Kaki9=9;
long duration; 
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600); 
  Serial.println("Ultrasonic Sensor HC-SR04 Test");
  Serial.println("with Arduino UNO R3");
  pinMode(Kaki12, OUTPUT);
  pinMode(Kaki11, OUTPUT);
  pinMode(Kaki10, OUTPUT);
  pinMode(Kaki9, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; 
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  if (distance >= 300)
  {
  digitalWrite(Kaki12, HIGH);
  digitalWrite(Kaki11, LOW);
  digitalWrite(Kaki10, LOW);
  digitalWrite(Kaki9, HIGH);
  }
  
  if (distance >= 200 && distance <300)
  {
  digitalWrite(Kaki12, LOW);
  digitalWrite(Kaki11, HIGH);
  digitalWrite(Kaki10, LOW);
  digitalWrite(Kaki9, LOW);
  }
  if (distance <200)
  {
  digitalWrite(Kaki12, LOW);
  digitalWrite(Kaki11, LOW);
  digitalWrite(Kaki10, HIGH);
  digitalWrite(Kaki9, LOW);
  }
}
