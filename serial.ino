bool a;
bool b;
bool c;
void setup() {
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
Serial.begin(9600);
}

void loop() { 
a=digitalRead(4);
b=digitalRead(5);
c=digitalRead(6);
 if(a==HIGH && b==HIGH && c==HIGH )
{
  Serial.println("no buttons are pressed");
  delay(1000);
  }
  else if(a==HIGH && b==LOW && c==LOW )
{
  Serial.println("two buttons are pressed");
  delay(1000);
  }
  else if(a==LOW && b==HIGH && c==LOW )
{
  Serial.println("two buttons are pressed");
  delay(1000);
  }
  else if(a==LOW && b==LOW && c==HIGH )
{
  Serial.println("two buttons are pressed");
  delay(1000);
  }
  else if(a==HIGH && b==HIGH && c==LOW )
{
  Serial.println("one buttons are pressed");
  delay(1000);
  }
  else if(a==LOW && b==HIGH && c==HIGH )
{
  Serial.println("one buttons are pressed");
  delay(1000);
  }
  else if(a==HIGH && b==LOW && c==HIGH )
{
  Serial.println("one buttons are pressed");
  delay(1000);
  }
  else
  Serial.println("three buttons are pressed");
  delay(1000);
  }
