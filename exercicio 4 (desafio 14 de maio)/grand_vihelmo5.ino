// C++ code

void setup()
{
 Serial.begin(9600);

int contador1 = 60;
int contador2 = 81;
 
  while(contador1 <= 80 && contador2 <= 101){
  Serial.println("numeros par: " + String(contador1) + " numeros impar: " + String(contador2));
  contador1 = contador1 + 2;          
  contador2 = contador2 + 2;

  }
}

void loop()
{
 
}