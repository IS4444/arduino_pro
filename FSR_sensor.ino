//double a;
double s=100000;
void setup() {
  Serial.begin(115200);
  delay(10);
}

void loop() {
  delay(500);
  int a = analogRead(A0);
  double Va,Vb,Ra,Rb = 1*10*10*10,V = 5,i;
  
  Vb = a * V / 1023.0;
  Va = V -Vb;
  i = Vb/Rb;
  Ra = Va/i;
  if(Ra<s){
    s = Ra;
  }
  //Serial.print("出力電圧\t");
  //Serial.println(String(Vb));
  Serial.print("抵抗値\t");
  Serial.println(String(Ra));
  Serial.print("\t\t最小値\t");
  Serial.println(String(s));
}
