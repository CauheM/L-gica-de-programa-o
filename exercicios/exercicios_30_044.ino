// C++ code
//
int nota = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual foi a sua nota");
  while ( ! Serial.available() ); 
nota = Serial.parseInt();
  
  if (nota >= 6 ){ //se retornar vedadeiro - losango sim
 Serial.println("aprovado"); 
 Serial.println();   
  }
 else{ // falso - losango não
  Serial.println("reprovado");
  Serial.println();
 }
  
 delay(1500); 
  
  
  
}