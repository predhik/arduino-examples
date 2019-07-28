char  ch;
void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  if(Serial.available()>0)
  {
    ch=Serial.read();
  if( ch=="F");
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  delay(1000);
if(ch=="B");
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(12, LOW);
  delay(1000);}
  {
  if(ch=="S");
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9,LOW);
  digitalWrite(12, LOW);
 

}
}
