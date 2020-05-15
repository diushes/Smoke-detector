int sensorPin=0;
int ledPin = 13;
int buzzer = 9;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
 }

void loop()
{
  sensorPin=analogRead(A0);
  Serial.println(sensorPin);
  delay(500);
  if (sensorPin>700){
  	digitalWrite(ledPin, HIGH);
    tone(buzzer, 1200);
    delay(400);
    tone(buzzer,900);
    delay(400);
    digitalWrite(ledPin,LOW);
    noTone(buzzer);
    delay(50);
  
  
  
  }
}