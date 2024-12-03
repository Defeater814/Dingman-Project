// Matthew Dingman
// Professor Qouneh

// Header File for derek_LED.cpp

// This header file is used to create the LED class that will be used in the
// myApp.cpp file for LED manipulation. The functions are defined in the
// derek_LED.cpp file.


#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

class LED {
  private:
    string path;
    int number;
    virtual void writeLED(string filename, string value);
    virtual void removeTrigger();
  public:
    LED(int number);
    virtual void turnOn();
    virtual void turnOff();
    virtual void flash(string delayms);
    virtual void outputState();
    virtual void blink(int num);
    virtual ~LED();
};
