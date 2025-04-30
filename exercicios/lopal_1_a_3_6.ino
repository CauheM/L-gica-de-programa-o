// C++ code
const float cm_por_polegada = 2.54;

void setup() {
  Serial.begin(9600);
  Serial.println("Conversor CM -> POL");
}

void loop() {
  Serial.println("Digite os centimetros:");
  
  while (!Serial.available());
  float centimetros = Serial.parseFloat();
  while (Serial.available()) Serial.read();
  
  float polegadas = centimetros / cm_por_polegada;
  
  Serial.print(centimetros);
  Serial.print(" cm = ");
  Serial.print(polegadas, 3); // 3 casas decimais
  Serial.println(" pol");
  Serial.println();
  delay(1500);
}