#ifndef REFRESHERSLEMONADES_H
#define REFRESHERSLEMONADES_H

#include "../header/Drink.h"
#include "../header/NonCaffeinated.h"
#include <string>

class RefreshersLemonades : public Drink, public NonCaffeinated
{
private:
    std::string isName = "Refreshers Beverage";
    std::string flavors[9] = {"Dragon Drink", "Mango Dragonfruit", "Mango Dragonfruit Lemonade",
                              "Paradise Drink", "Strawbery Açaí Lemonade", "Pineapple Passionfruit",
                              "Pineapple Passionfruit Lemonade", "Pink Drink", "Strawberry Açaí"};

public:
    std::string getFlavor(int);
    std::string getName();
}

#endif