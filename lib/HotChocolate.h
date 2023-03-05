#ifndef HOTCHOCOLATE_H
#define HOTCHOCOLATE_H

#include <string>

class HotChocolate : public Drink, public NonCaffeinated
{
private:
    std::string isName = "Hot Chocolate";
    bool whippedCream = false;

public:
    HotChocolate(bool);
    std::string getName();
    bool getWhipped();
}
#endif