bool a;
int i=0;
void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);//a
pinMode(11,OUTPUT);//b
pinMode(10,OUTPUT);//c
pinMode(9,OUTPUT);//d
pinMode(3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  a= digitalRead(3);
if(a==HIGH && i==0){
 digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 digitalWrite(10,LOW);
 digitalWrite(9,LOW);
 i++;
 a=LOW;
}
else if(a==HIGH && i==1){
  digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 digitalWrite(10,LOW);
 digitalWrite(9,HIGH);
 i++;
  a=LOW;
  }
else if(a==HIGH && i==2){
  digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(9,LOW);
 i++;
  a=LOW;
}
else if(a==HIGH && i==3){
  digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(9,HIGH);
 i++;
  a=LOW;
}
else if(a==HIGH && i==4){
   digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(9,LOW);
 i++;
  a=LOW;
}
else if(a==HIGH && i==5){
   digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(9,HIGH);
 i++;
  a=LOW;
}
else if(a==HIGH && i==6){
  digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,LOW);
 i++;
  a=LOW;
}
else if(a==HIGH && i==7){
   digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,HIGH);
 i++;
  a=LOW;
}
else if(a==HIGH && i==8){
   digitalWrite(12,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(10,LOW);
 digitalWrite(9,LOW);
 i++;
  a=LOW;
}
else if(a==HIGH && i==9){
   digitalWrite(12,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(10,LOW);
 digitalWrite(9,HIGH);
 i++;
  a=LOW;
}
else if(a==HIGH && i==10){
   digitalWrite(12,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(10,LOW);
 digitalWrite(9,LOW);
 i++;
  a=LOW;
}
else if(a==HIGH && i==11){
   digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,HIGH);
 i++;
  a=LOW;
}
else if(a==HIGH && i==12){
  digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,LOW);
 i++;
  a=LOW;
}
else if(a==HIGH && i==13){
   digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(9,HIGH);
 i++;
  a=LOW;
}
else if(a==HIGH && i==14){
   digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(9,LOW);
 i++;
  a=LOW;
}
else if(a==HIGH && i==15){
  digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(9,HIGH);
 i++;
  a=LOW;
}
else if(a==HIGH && i==16){
  digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(9,LOW);
 i++;
  a=LOW;
}
else if(a==HIGH && i==17){
  digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 digitalWrite(10,LOW);
 digitalWrite(9,HIGH);
 i=0;
  a=LOW;
  }

delay(500);
}
