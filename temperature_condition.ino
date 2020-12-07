int x;
int y;
float a;
float b;
void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
 Serial.begin(9600);
}

void loop() {
x = analogRead(A0);
y = analogRead(A4);
a=(5/1023.0)*x;
b=(5/1023.0)*y;


if (a>0.50 && b>0.50){
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
}
else {
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
}
}
