const int pinRedLED=11;
const int pinPIR=5;

void setup()
{
  pinMode(pinRedLED, OUTPUT);
  pinMode(pinPIR, INPUT);
  Serial.begin(9600);
}

void loop()
{
  boolPIR=digitalRead(pinPIR);
  Serial.print("\nPIR status: ");
  Serial.print(boolPIR);

  if(boolPIR==true){
    digitalWrite(pinRedLED, HIGH);
  }
  else{
    digitalWrite(pinRedLED, LOW);
  }

  delay(1000);
}
