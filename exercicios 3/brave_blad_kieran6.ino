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
  
  if (numero1 %2 == 0){ 
 Serial.println("Seu número é par");  
  } else {
 Serial.println("Seu número é impar");
  } 
delay(1000); 
}
