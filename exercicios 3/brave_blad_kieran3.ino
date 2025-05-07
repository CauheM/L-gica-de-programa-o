// C++ code
//
float preco = 0;
float percentual = 0; 
long precofinal1 = 0;
long precofinal2 = 0;
void setup()
  
{
 Serial.begin(9600);
}

void loop()
{

    Serial.println("digite o preco do produto?");
while( ! Serial.available() );  
 preco = Serial.parseFloat();
  
   Serial.println("digite e o percentual?");
while( ! Serial.available() );  
 percentual = Serial.parseInt();
  
  if (percentual >= 50){ 
 Serial.println("o produto sera vendido com uma margem muito pequena de lucro");  
  } else { 
    precofinal1 = 100 / percentual;
    precofinal2 = preco / precofinal1;  
 Serial.println("O preco e: " + String(precofinal2));
  } 
delay(1000);
}