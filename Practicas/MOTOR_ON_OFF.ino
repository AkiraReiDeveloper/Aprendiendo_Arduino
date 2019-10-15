const int boton = 2;
const int NMOS = 9;
int val = 0;
int state = 0;
int old_val = 0;

void setup()
{
  pinMode(NMOS, OUTPUT);
  pinMode(boton, INPUT);
}

void loop()
{
  val = digitalRead(boton);
  if((val == HIGH)&&(old_val == LOW)){
    
    state = 1-state;
    delay(10);
  }
  old_val = val;
  if(state == 1){
    digitalWrite(NMOS, HIGH);
  }else{
    digitalWrite(NMOS, LOW);
  }
  
}
