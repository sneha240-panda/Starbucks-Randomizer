#ifndef REFRESHER_H
#define REFRESHER_H

#include "Drink.h"
#include <string>

class Refresher : public Drink
{
private:
    // std::string flavors[9] = {"Dragon Drink", "Mango Dragonfruit", "Mango Dragonfruit Lemonade",
    //                           "Paradise Drink", "Strawbery Açaí Lemonade", "Pineapple Passionfruit",
    //                           "Pineapple Passionfruit Lemonade", "Pink Drink", "Strawberry Açaí"};

public:
    Refresher();
    std::string getName();
};

#endif