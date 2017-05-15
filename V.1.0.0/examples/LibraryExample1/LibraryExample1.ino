
#include "TestLibrary.h"

TestLib testlib(true);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:

  long rndNo = testlib.getRandomNumber();
  Serial.println(rndNo);

  delay(2000);
  
}
