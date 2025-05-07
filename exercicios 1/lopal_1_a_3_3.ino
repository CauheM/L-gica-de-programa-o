// C++ code
long numero = 0;
long resultado = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
Serial.println("escolha um numero");
while ( ! Serial.available() ); 
numero = Serial.parseInt();

resultado = numero + numero; 

Serial.println("o dobro de " + String(numero) + " eh " + String(resultado));
Serial.println();
}