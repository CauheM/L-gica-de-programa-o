String nome[7];
String email[7];
int idade[7];
void setup()
{
Serial.begin(9600);
Serial.println("****** Bem vindo a Is The Party ******"); 
Serial.println();  
}

void loop()
{
  for (int i = 0; i < 7; i++){
  Serial.println("coloque o " + String(i + 1) + "o nome do convidado");
  while ( ! Serial.available());
  nome[i] = Serial.readString();
  
  Serial.println("coloque o email do(a) " + nome[i]);
  while ( ! Serial.available());
  email[i] = Serial.readString();
  
  Serial.println("qual eh a idade do(a) " + nome[i]);
  while ( ! Serial.available());
  idade[i] = Serial.parseInt();
 
  
  }

  Serial.println();
  Serial.println("****** Lista dos convidados informados ******");
  
  for (int i = 0; i < 7; i++){
  Serial.println("Nome: " + nome[i]);
  Serial.println("Email: " + email[i]);
  Serial.println("Idade: " + String(idade[i]));
  Serial.println("-----");
  }








}
