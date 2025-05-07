// C++ code
//
int senha = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("digita a senha");
  while ( ! Serial.available() ); 
senha = Serial.parseInt();
  
  if (senha == 1234 ){ //se retornar vedadeiro - losango sim
 Serial.println("conta acessada"); 
 Serial.println();   
  }
 else{ // falso - losango não
  Serial.println("senha incorreta");
  Serial.println();
 }
  
 delay(1500); 
  
  
  
}