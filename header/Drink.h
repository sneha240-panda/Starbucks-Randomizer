#ifndef DRINK_H
#define DRINK_H

#include<iostream>
#include <string>
using namespace std;

class Drink{
    
  public:
     virtual string getName() = 0;
     string getTemp;

  protected:
    bool isHot;
};

#endif
