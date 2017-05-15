
#include "TestLibrary.h"

TestLib::TestLib(bool displayMsg){
  
}


long TestLib:: getRandomNumber(){

    unsigned long specialNumber = random(5,1000);
    //specialNumber *= PI;
    specialNumber *= getPi();
    specialNumber -= 5;

    return specialNumber;
  
}

//private method for this class
float TestLib::getPi(){
  return 3.145926;  
};

