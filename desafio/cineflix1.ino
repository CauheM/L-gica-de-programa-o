int idade = 0;

void setup()
{
 Serial.begin(9600);

Serial.println("Bem vindo a cineflix");
  Serial.println();
  delay(500);
  
  Serial.println("digite sua idade, para nos selecionamos os melhores tipos de filmes para voce"); 
  while (! Serial.available());
  idade = Serial.parseInt();
  
  if (idade >= 1 && idade <= 9 ){
  Serial.println("voce podera assistir filmes infantis");
  delay(500);  
  }
  
  else if (idade >= 10 && idade <= 13 ){
  Serial.println("voce podera assistir filmes infantis e infantojuvenis");
  delay(500);  
  }
  
  else if (idade >= 14 && idade <= 17 ){
  Serial.println("voce podera assistir filmes com classificacao de 14 anos");
  delay(500);  
  }
  
  else if (idade >= 18 && idade <= 59 ){
  Serial.println("voce podera assistir todos os tipos de filmes");
  delay(500);  
  }
  
  else if (idade >= 60 && idade <= 120){
  Serial.println("voce podera assistir todos os tipos de filmes e tera desconto para idosos");
  delay(500);  
  }
  
  else {
  Serial.println("idade invalida, verifique os dados");
  delay(500);
  } 
  
  Serial.println();
}

void loop()
{}