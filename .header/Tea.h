#ifndef TEA_H
#define TEA_H

#include "../header/Drink.h"
#include "../header/Caffeinated.h"
#include <string>

class Tea : public Drink, public Caffeinated
{
private:
    std::string isName = "Chai Tea";

public:
    std::string getName();
}

#endif
