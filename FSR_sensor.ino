void setup() {
  Serial.begin(115200);
  delay(10);
}

void loop() {
  delay(1000);
  int a = analogRead(A0);
  double Va,Vb,Ra,Rb = 1*10^3,V = 5,i;
  Vb = a * V / 1023.0;
  Va = V -Vb;
  i = V/Rb;
  Ra = Va/i;
  //Ra = (Rb / V - Va) * Va;
  Serial.println(String(Va));
  Serial.println(String(Ra));
}
