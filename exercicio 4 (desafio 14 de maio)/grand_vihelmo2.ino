// C++ code

void setup()
{
 Serial.begin(9600);

int contador = 5;

  while(contador <= 100){
  Serial.println(contador);
  contador = contador + 5;  
 }



}

void loop()
{
 
}