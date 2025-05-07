// C++ code
//
long numero = 0;
void setup()
  
{
 Serial.begin(9600);
}

void loop()
{

    Serial.println("escolha um numero");
while( ! Serial.available() );  
 numero = Serial.parseInt();
  
  if (numero < 0){ 
 Serial.println("Seu numero e negativo");  
  } else {
 Serial.println("Seu numero e positivo");
  } 
delay(1000);
}