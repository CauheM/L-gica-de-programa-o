// C++ code
float idade = 0; // coloca uma ,0 para driblar os números quebrados 
long idademeses = 0;
long idadedias = 0;
long idadehoras = 0;
long idademinutos = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("qual eh sua idade?");
while( ! Serial.available() );  
 idade = Serial.parseInt();


idademeses = idade * 12;
idadedias = idade * 365;
idadehoras = idade * 8766;
idademinutos = idade * 525960;


Serial.println("sua idade em meses eh " + String(idademeses));
Serial.println("sua idade em dias eh " + String(idadedias));
Serial.println("sua idade em horas eh " + String(idadehoras));
Serial.println("sua idade em minutos eh " + String(idademinutos));
Serial.println(); 

delay(1000);
}