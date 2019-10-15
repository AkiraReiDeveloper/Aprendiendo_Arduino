const int LED = 13;
const int PIR = 2;
int sensorState = 0;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorState = digitalRead(PIR);
  if(sensorState == HIGH){
    digitalWrite(LED, HIGH);
    Serial.println("Sensor Activado!");
  }else{
    digitalWrite(LED, LOW);
    Serial.println("Sensor Desactivado!");
  }
  delay(10);
  
}
