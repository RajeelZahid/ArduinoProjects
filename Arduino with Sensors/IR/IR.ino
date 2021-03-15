#include <IRremote.h>

int IR_Recv = 2;
IRrecv irrecv(IR_Recv);
decode_results results;

void setup() {
  pinMode(12, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();

}

void loop() {
  if(irrecv.decode(&results)){
    long int deCode = results.value;
    Serial.println(deCode);
    irrecv.resume();
  }

}
