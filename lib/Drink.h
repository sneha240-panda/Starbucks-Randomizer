#ifndef DRINK_H
#define DRINK_H

#include <string>

class Drink
{
protected:
    bool isHot = true;

public:
    std::string getTemp();
    virtual std::string getName() = 0;
};

#endif