// C++ code
//
long numero1 = 0;
long numero2 = 0;
void setup()
  
{
 Serial.begin(9600);
}

void loop()
{

    Serial.println("escolha um numero");
while( ! Serial.available() );  
 numero1 = Serial.parseInt();
  
  Serial.println("escolha outro numero");
while( ! Serial.available() );  
 numero2 = Serial.parseInt();
  
  if (numero1 < numero2){ 
 Serial.println(String(numero2) + " eh maior que " + String(numero1));  
  } else {
 Serial.println(String(numero1) + " eh maior que " + String(numero2));
  } 
delay(1000); 
}
