// C++ code
//
float salario = 0;
float novosalario = 0;
void setup()
  
{
 Serial.begin(9600);
}

void loop()
{

    Serial.println("digite seu salario?");
while( ! Serial.available() );  
 salario = Serial.parseInt();
  
  if (salario <= 500){
  novosalario = salario * 30;  
 Serial.println("Seu salario eh: " + String(novosalario));  
  } else { 
 Serial.println("Voce nao tem direito a ajuste no seu salario");
  } 
delay(1000);
}