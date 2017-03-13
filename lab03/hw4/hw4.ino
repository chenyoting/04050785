void setup()
{
 Serial.begin(9600);
}
float sensorValue ;
float sensorVoltage;
int i;
void loop()
{
  for (i=0;i<=5;i++)
    {
    sensorValue = 0.7* sensorValue + 0.3* analogRead(A0);
    }
    sensorVoltage = sensorValue * 5 / 1024 ;// sensorVoltage= Vin * R1 / (R1+R2)

    delay(100);
    Serial.print("sensorVoltage=");
    Serial.print(sensorVoltage);
    Serial.print("\n");
   
}
