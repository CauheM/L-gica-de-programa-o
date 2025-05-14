// C++ code

void setup()
{
 Serial.begin(9600);

int contador = 2;

  while(contador <= 100){
  Serial.println(contador);
  contador = contador + 2;  
 }



}

void loop()
{
 
}