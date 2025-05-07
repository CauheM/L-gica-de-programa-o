// C++ code
//
String nome, cargo;
float salario = 0;
float novosalario = 0;
void setup()
  
{
 Serial.begin(9600);
}

void loop()
{

    Serial.println("qual eh seu nome?");
while( ! Serial.available() );  
 nome = Serial.readString();
  
    Serial.println("qual eh seu cargo?");
while( ! Serial.available() );  
 cargo = Serial.readString();
  
    Serial.println("qual eh seu salario?");
while( ! Serial.available() );  
 salario = Serial.parseInt();
  
  if (salario <= 1000){
  novosalario = salario * 10; 
 Serial.println("Seu nome: " + nome);
 Serial.println("Seu cargo: " + cargo);  
 Serial.println("Seu salario: " + String(novosalario));  
  } else {
 Serial.println("Seu nome: " + nome);
 Serial.println("Seu cargo: " + cargo);  
 Serial.println("Seu salario: " + String(salario));
  } 
delay(1000);
}