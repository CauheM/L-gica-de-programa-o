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
  
  if (idade >= 16 ){ //se retornar vedadeiro - losango sim
 Serial.println("Seu voto eh obrigatorio"); 
 Serial.println();   
  }
 else{ // falso - losango não
  Serial.println("Voce nao tem idade pra votar");
  Serial.println();
 }
  
 delay(1500); 
  
  
  
}