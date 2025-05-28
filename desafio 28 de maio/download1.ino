#include <Servo.h>
Servo motor;
const int led1 = 5;
const int led2 = 4;
const int led3 = 3;
const int ledR = 13;
const int ledG = 12;
int palpite[3] = {0, 0, 0};
int numerosorteado[3];

void setup()
{
Serial.begin(9600);
randomSeed(analogRead(0));
pinMode(led1, OUTPUT);  
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);  
pinMode(ledR, OUTPUT);
pinMode(ledG, OUTPUT);   
motor.attach(11);
motor.write(0);  
Serial.println("BEM VINDO A FORTALEZA DE DADOS SAGRADOS");   
Serial.println("acerte 3 numeros pra abrir o portao da sabedoria");  
int contador;
  do{
  
Serial.println("Escolha seu primeiro palpite de 1 a 6"); 
while ( ! Serial.available());
palpite[1] = Serial.parseInt();

numerosorteado[1] = random(1, 7); 

Serial.println("Seu palpite: " + String(palpite[1]));
Serial.println("Numero sorteado: " + String(numerosorteado[1])); 
  
  if(palpite[1] == numerosorteado[1]){
 Serial.println("Parabens voce acertou");
 digitalWrite(ledG, HIGH); 
 digitalWrite(ledG, LOW);   
 }
 else{
 Serial.println("A nao voce errou, tente novamente"); 
 digitalWrite(ledR, HIGH); 
 digitalWrite(ledR, LOW);       
 }   
  
  
  if (palpite[1] == numerosorteado[1]){
  digitalWrite(led1, HIGH);
  contador = 1;  
  } else {
  digitalWrite(led1, LOW);
  contador = 0;  
  }
 } 
 while (contador == 0); 
  
 do{
  
Serial.println("Escolha seu segundo palpite de 1 a 6"); 
while ( ! Serial.available());
palpite[2] = Serial.parseInt();

numerosorteado[2] = random(1, 7); 

Serial.println("Seu palpite: " + String(palpite[2]));
Serial.println("Numero sorteado: " + String(numerosorteado[2])); 
  
  if(palpite[2] == numerosorteado[2]){
 Serial.println("Parabens voce acertou");
 digitalWrite(ledG, HIGH); 
 digitalWrite(ledG, LOW);   
 }
 else{
 Serial.println("A nao voce errou, tente novamente"); 
 digitalWrite(ledR, HIGH); 
 digitalWrite(ledR, LOW);       
 }   
  
  
  if (palpite[2] == numerosorteado[2]){
  digitalWrite(led2, HIGH);
  contador = 2;  
  } else {
  digitalWrite(led2, LOW);
  digitalWrite(led1, LOW);  
  contador = 0;  
  }
 } 
 while (contador == 1);  
  
 do{
  
Serial.println("Escolha seu terceiro palpite de 1 a 6"); 
while ( ! Serial.available());
palpite[3] = Serial.parseInt();

numerosorteado[3] = random(1, 7); 

Serial.println("Seu palpite: " + String(palpite[3]));
Serial.println("Numero sorteado: " + String(numerosorteado[3])); 
  
  if(palpite[3] == numerosorteado[3]){
 Serial.println("Parabens voce acertou");
 digitalWrite(ledG, HIGH); 
 digitalWrite(ledG, LOW);   
 }
 else{
 Serial.println("A nao voce errou, tente novamente"); 
 digitalWrite(ledR, HIGH); 
 digitalWrite(ledR, LOW);       
 }   
  
  
  if (palpite[3] == numerosorteado[3]){
  digitalWrite(led3, HIGH);
 Serial.println(); 
 Serial.println("AGORA VOCE PODERA ACESSAR O PORTAO");  
 motor.write(90); 
 delay(5000); 
 motor.write(-90);
  } else {
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);  
  digitalWrite(led1, LOW);  
  contador = 0;  
  }
 } 
 while (contador == 2);  
  
   
} 
void loop(){}
