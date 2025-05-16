int led = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int SV = analogRead(A0);
analogWrite(led,SV/4);
Serial.println(SV);
delay(1);
}
