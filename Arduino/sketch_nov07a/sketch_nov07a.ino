void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);

}

void loop() {
    if(Serial.available()>0)
{
  int a= Serial.parseInt();
  Serial.println(a);
}

}
