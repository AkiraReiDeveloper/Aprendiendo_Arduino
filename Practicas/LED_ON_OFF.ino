const int LED = 13;
const int BUTTON = 7;
int value; 
int bandera = 0;
int old_val = 0;
void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, OUTPUT);
}

void loop(){
  value = digitalRead(BUTTON);
  if((value == HIGH) && (old_val == LOW)){
    bandera = 1 -bandera;
    delay(10);
  }
  old_val = value;
  if(bandera == 1){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
  
}
