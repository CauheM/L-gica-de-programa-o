// C++ code
//
float anodenascimento = 0;
float anoatual = 0;
int idade = 0;
long semana = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("insira o ano do seu nascimento");
  while ( ! Serial.available() );
  anodenascimento = Serial.parseInt(); 
  
  Serial.println("insira o ano atual");
  while ( ! Serial.available() );
  anoatual = Serial.parseInt(); 
  
  idade = anoatual - anodenascimento;
  semana = idade * 4 * 12;
    
 Serial.println("sua idade eh " + String(idade) + " e em semana eh " + String(semana));  
 Serial.println();

delay(1000);
}