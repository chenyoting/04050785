const byte LED=13;
void setup() {
  Serial.begin(9600);
  Serial.println("Hello,World!");
  Serial.print("\tLED pin is: ");
  Serial.println(LED);
  pinMode(LED,OUTPUT);
  

}

void loop() {
  char val;
if(Serial.available() )
{
  val =Serial.read();
  switch(val)
  {
    case '1':
   digitalWrite(LED, HIGH);
   Serial.println("LED ON");
   break;
  
  case '0':
    digitalWrite(LED, LOW);
    Serial.println("LED OFF");
    break;
    
  default:
     Serial.println("XXXX");
  }
}
}

