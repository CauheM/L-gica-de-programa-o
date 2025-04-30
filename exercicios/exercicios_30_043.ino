// C++ code
//
String sinal = "";
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("escolha um cor do semaforo, verde  ou vermelho ");
  while ( ! Serial.available() ); 
sinal = Serial.readString();
  
  if (sinal == "verde") { //se retornar vedadeiro - losango sim
 Serial.println("segue em frente"); 
 Serial.println();   
  }
  else{ // falso - losango não
  Serial.println("pare");
  Serial.println();
 }
  
 delay(1500); 
  
  
  
}