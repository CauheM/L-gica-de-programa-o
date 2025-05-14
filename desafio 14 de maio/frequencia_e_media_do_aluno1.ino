int nota1 = 0;
int nota2 = 0;
int frequencia = 0;
int medianota = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 Serial.println("Qual e a sua primeira nota?");
while( ! Serial.available() ); //tinha esquecido de como colocava
nota1 = Serial.parseInt();

Serial.println("Qual e a sua segunda nota?");
while( ! Serial.available() ); 
nota2 = Serial.parseInt();

Serial.println("Qual e a sua segunda frequencia?");
while( ! Serial.available() );
frequencia= Serial.parseInt();

medianota = nota1 + nota2;
 
  if (medianota >= 10 && medianota < 20 ){   //tinha esquecido de como colocava
  Serial.println("Voce foi aprovado por nota");
  }
  else if (medianota > 20){
  Serial.println("nota invalida");
  }
  else if (medianota == 20){
  Serial.println("Nota maxima parabens!!");
  }
  else{
  Serial.println("Voce foi reprovado por nota");
  }
  
 
  if (frequencia >= 75 && frequencia < 100){
 Serial.println("e foi aprovado por frequencia");  
 Serial.println();
  }
 else if (frequencia > 100){
 Serial.println("frequencia invalida");
 Serial.println();
 }
  else if (frequencia == 100){
 Serial.println("Frequencia maxima parabens!!");
 Serial.println();
 } 
  else{
 Serial.println("e foi reprovado por frequencia");
 Serial.println();
 }





}