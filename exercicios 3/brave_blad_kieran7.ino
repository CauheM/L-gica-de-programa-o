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
  
  if (numero %2 == 0){ 
 Serial.println(String(numero) + " eh par");  
  } else {
 Serial.println("esse numero n é par");
  } 
delay(1000); 
}
