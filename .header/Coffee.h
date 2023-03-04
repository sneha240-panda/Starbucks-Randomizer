#ifndef COFFEE_H
#define COFFEE_H

#include <string>

class Coffee : public Drink, public Caffeinated
{
private:
    std::string isName = "Coffee";
    
public:
    Coffee(bool);
    std::string getName();
    std::string getShots(int);
}
#endif
