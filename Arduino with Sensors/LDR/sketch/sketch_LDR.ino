const int pinRedLED=11;
const int pinLDR=A1;

void setup()
{
  pinMode(pinRedLED, OUTPUT);
  pinMode(pinLDR, INPUT);
  Serial.begin(9600);
}

void loop()
{
  float valueLDR = analogRead(pinLDR);
  
  Serial.print("\nRecorded Intensity: ");
  Serial.print(valueLDR);
  
  if(valueLDR<200){
    digitalWrite(pinRedLED, HIGH);
  }
  else{
    digitalWrite(pinRedLED, LOW);
  }
  
  delay(1000);
}
