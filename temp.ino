const int LM35 = A0; //analog pin# A0;

void setup() 
{
       Serial.begin(115200);
       pinMode(LM35, INPUT);
       delay(10);
      }

 
void loop() 
{
float LM35 = analogRead(A0);
float temperature = (LM35 * 500)/1023;
Serial.println("Cattle temperature is:");
Serial.println(temperature);
delay(5000);
}

 
