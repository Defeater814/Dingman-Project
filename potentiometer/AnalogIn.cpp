// Matthew Dingman
// Professor Qouneh

// AnalogIn.cpp Definition file

// This file is used to define the objects in the AnalogIn.h file for the
// AnalogIn class.

#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include"AnalogIn.h"
using namespace std;

#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"
#define ADC 0


AnalogIn::AnalogIn() {
}

AnalogIn::AnalogIn(unsigned int num) {
  setNumber(num);
}

unsigned int AnalogIn::getNumber() {
  return number;
}

void AnalogIn::setNumber(unsigned int n) {
  number = n;
}

int AnalogIn::readAdcSample() {
  int sample;
  stringstream ss;
  ss << ADC_PATH << ADC << "_raw";
  fstream fs;
  fs.open(ss.str().c_str(), fstream::in);
  fs >> sample;
  fs.close();
  return sample;
}

AnalogIn::~AnalogIn(){
}

