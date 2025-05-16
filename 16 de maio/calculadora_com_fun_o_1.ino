int edp;
String yesorno;
float resul;

void somar(float numero1, float numero2){
resul = (numero1 + numero2);
Serial.println("O total deu: " + String(resul)); 
Serial.println();
}

float dividir(float numero1, float numero2){
resul = (numero1 / numero2);
return resul;
}

void subtrair(float numero1, float numero2){
resul = (numero1 - numero2);
Serial.println("O total deu: " + String(resul)); 
Serial.println();
}

float multiplicar(float numero1, float numero2){
resul = (numero1 * numero2);
return resul;
}


void setup()
{
 Serial.begin(9600);
 
int contador;  
float n1;
float n2;

  
  do {
    Serial.println("bem vindo a calculadora 100% confiavel e atualizada 2025\n");
    Serial.println("Escolha uma das opcoes");
    Serial.println("1 - somar");
    Serial.println("2 - Dividir");
    Serial.println("3 - subtrair");
    Serial.println("4 - multiplicar");
    while ( ! Serial.available()){}
  edp = Serial.parseInt(); 
  
  Serial.println("digite o primeiro numero (a gente nao sabe ler pensamentos pra prever o que voce quer)\n");
    while ( ! Serial.available()){}
  n1 = Serial.parseFloat(); 
  
  Serial.println("digite o segundo numero");
    while ( ! Serial.available()){}
  n2 = Serial.parseFloat();
  
  switch(edp){
  case 1:
  somar(n1, n2); //passa os valores via parametro
  break;
    
  case 2:
  float atm;
  atm = dividir(n1, n2);   
  Serial.println("O total deu: " + String(resul)); 
  Serial.println();  
  break;  
    
  case 3:
  subtrair(n1, n2);  
  break;
    
  case 4:
  float atn;
  atn = multiplicar(n1, n2);   
  Serial.println("O total deu: " + String(resul)); 
  Serial.println();  
  break;
    
  default: 
   Serial.println("irmao tu sabe ler? n tem essa opcao nao"); 
   Serial.println();
  } 
    
  Serial.println("tu quer ir pro menu? digite sim ou nao");  
    while ( ! Serial.available()){}

    
    if(Serial.readString() == "sim"){
    contador = 1;
    } 
    else{
    contador = 0;
    Serial.println("espero q gostou, agora desapareca (reinicie se querer fazer de novo)"); 
    }
  }
 while(contador != 0);
}

void loop(){}