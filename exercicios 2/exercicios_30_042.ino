// C++ code
//
int idade = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual eh a sua idade?");
  while ( ! Serial.available() ); 
idade = Serial.parseInt();
  
  if (idade >= 18 ){ //se retornar vedadeiro - losango sim
 Serial.println("voce eh maior de idade"); 
 Serial.println();   
  }
 else{ // falso - losango não
  Serial.println("voce nao eh maior de idade");
  Serial.println();
 }
  
 delay(1500); 
  
  
  
}