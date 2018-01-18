void setup() {
  Serial.begin(115200);
  delay(10);
}

void loop() {
  delay(1000);
  int a = analogRead(A0);
  double Va,Ra,Rb = 10*10^3,V = 5;
  Va = a * V / 1023.0;
  Ra = (Rb / V - Va) * Va;
  Serial.println(String(Va));
  Serial.println(String(Ra));
}
