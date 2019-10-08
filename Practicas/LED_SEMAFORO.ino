int LED_G = 13;
int LED_Y = 12;
int LED_R = 11;
const int BOTON = 7;
int val = 0;
int state = 0;
int old_val = 0;


void setup()
{
  pinMode(LED_G, OUTPUT);
  pinMode(LED_Y, OUTPUT);
  pinMode(LED_R, OUTPUT);
}

void loop()
{
  val = digitalRead(BOTON); //lee el estado del boton
  if ((val == HIGH) && (old_val == LOW)){
  
    state = 1-state;
    delay(10);
  }
  old_val = val;
  if(state == 1){
  
    digitalWrite(LED_G, HIGH);
    delay(5000);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_Y, HIGH);
    delay(1000);
    digitalWrite(LED_Y, LOW);
    digitalWrite(LED_R, HIGH);
    delay(4000);
    digitalWrite(LED_R, LOW);
  }
}
