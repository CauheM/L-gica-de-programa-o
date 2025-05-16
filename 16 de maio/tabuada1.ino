int ne;
int r;
int contador = 1; 
  
  
void setup()
{
 Serial.begin(9600);
 Serial.println("bem vindo a tabuada");
 Serial.println("escolha um numero, para pdemos calcular"); 
 while ( ! Serial.available()); 
 ne = Serial.parseInt(); 
 Serial.println("a tabuada de " + String(ne) + " eh");
  while(contador <= 10){
  r = ne * contador;
  Serial.println(String(ne) + "X" + String(contador) + "=" + String(r));
  contador = contador + 1;
  }
  
}

void loop()
{}

