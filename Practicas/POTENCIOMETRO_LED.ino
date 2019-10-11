int const analogPin=A5;
const int led = 9;
int valor;
int angulo;
int intensidad;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  valor = analogRead(analogPin);
  Serial.print("Valor: ");
  Serial.print(valor);
  intensidad = valor/4;
  angulo = map(valor,0,1023,0,179);
  Serial.print(" Angulo =");
  Serial.println(angulo);
  analogWrite(led, intensidad);
  delay(200);
}
