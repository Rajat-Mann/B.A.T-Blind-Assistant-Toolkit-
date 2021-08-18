#define trigPin 13
#define echoPin 12
#define motor 3
#define buzzer 9
void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motor, OUTPUT);
  pinMode(buzzer,OUTPUT);
}
void loop()
{ 
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
   digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;

 if (distance==150)
  {
    analogWrite(motor, 150); 
     delay(100);
      analogWrite(motor, 0); 
     delay(100);
     analogWrite(motor, 150); 
     delay(100);
      analogWrite(motor, 0); 
     delay(100);
  }
if (distance <=100 && distance >85)
  {
  analogWrite(buzzer, 50);
    analogWrite(motor, 50); 

  delay(450);
  analogWrite(buzzer, 0);
    analogWrite(motor, 0); 

  delay(450);
  }
else if (distance <=85 && distance >70)
  {
  analogWrite(buzzer, 100);
    analogWrite(motor, 100); 

    delay(425);
 analogWrite(buzzer, 0);
    analogWrite(motor, 0); 

    delay(425);
  }

  else if (distance <=70 && distance >55)
  {
      analogWrite(buzzer, 150);
    analogWrite(motor, 150); 

    delay(400);
  analogWrite(buzzer, 0);
    analogWrite(motor, 0); 

    delay(400);
  }

  else if (distance <=55 && distance >40)
  {
  analogWrite(buzzer, 200);
    analogWrite(motor, 200); 

    delay(360);
  analogWrite(buzzer, 0);
    analogWrite(motor, 0); 

    delay(360);
  }

  else if (distance <=40)
  {
  digitalWrite(buzzer, HIGH);
    digitalWrite(motor, HIGH); 
    
  }
  else if (distance >100)
  {
      analogWrite(buzzer, 0);
    analogWrite(motor, 0); 

 
  }
  else
  {
        analogWrite(buzzer, 0);
    analogWrite(motor, 0);
  }
  

}
