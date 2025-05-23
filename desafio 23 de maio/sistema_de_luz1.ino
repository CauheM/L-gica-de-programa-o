int escolha;
int ledv = 13;
int leda = 12;
int ledg = 11;

void setup()
{
  Serial.begin(9600);
  pinMode(ledv, OUTPUT);
  pinMode(leda, OUTPUT);
  pinMode(ledg, OUTPUT);

int contador = 0;
  
do{
 Serial.println("O QUE VOCE DESEJA FAZER");
 Serial.println("1 - ligar o led verde"); 
 Serial.println("2 - desligar o led verde");
 Serial.println("3 - ligar o led amarelo"); 
 Serial.println("4 - desligar o led amarelo"); 
 Serial.println("5 - ligar o led vermelho"); 
 Serial.println("6 - desligar o led vermelho"); 
 Serial.println("7 - ligar todos os led"); 
 Serial.println("8 - desligar todos os led");  
 Serial.println("9 - sair"); 
 while ( ! Serial.available()); 
 escolha = Serial.parseInt(); 
 
  
  switch(escolha){
  case 1:
  digitalWrite(ledg, HIGH);
  contador = 1;  
  break;
  case 2:
  digitalWrite(ledg, LOW);
  contador = 1;  
  break;
  case 3:
  digitalWrite(leda, HIGH);
  contador = 1;  
  break;
  case 4:
  digitalWrite(leda, LOW);
  contador = 1;  
  break;
  case 5:
  digitalWrite(ledv, HIGH);
  contador = 1;  
  break;
  case 6:
  digitalWrite(ledv, LOW);
  contador = 1;  
  break;
  case 7:
  digitalWrite(ledg, HIGH);
  digitalWrite(leda, HIGH);
  digitalWrite(ledv, HIGH); 
  contador = 1;  
  break;
  case 8:
  digitalWrite(ledg, LOW);
  digitalWrite(leda, LOW);
  digitalWrite(ledv, LOW);  
  contador = 1;  
  break;
  case 9: 
  Serial.println("Obrigado por usar a lampada"); 
  contador = 0;  
  break;
  default:
  Serial.println("nao existe essa opcao");
  contador = 1;
}

}
while(contador != 0);
}

void loop()
{}