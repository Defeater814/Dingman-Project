// Matthew Dingman
// Professor Qouneh

// AnalogIn.h header file

// This file is used to instantiate the class AnalogIn defined in the
// AnalogIn.cpp class.

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class AnalogIn{
  private:
    unsigned int number;

  public:
    AnalogIn();
    AnalogIn(unsigned int num);
    unsigned int getNumber();
    virtual void setNumber(unsigned int n);
    virtual int readAdcSample();
    virtual ~AnalogIn();
};
