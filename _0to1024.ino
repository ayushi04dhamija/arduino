void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);
Serial.begin(9600);
}

void loop() {
  int a=analogRead(A0);
  Serial.println(a*0.0358);
 // analogWrite(3,a);
 
  delay(100);
/*for(int i=0; i<=1024; i++)
{ 
  analogWrite(3,i);
  delay(100);
  
}
*/
}
