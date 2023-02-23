#ifndef CREMEFRAPPUCCINO_H
#define CREMEFRAPPUCCINO_H

#include "../header/Drink.h"
#include "../header/NonCaffeinated.h"
#include <string>

class CremeFrappuccino : public Drink, public NonCaffeinated
{
private:
    std::string isName = "Crème Frappuccino";
    bool whippedCream = 0;
    std::string syrup[15] = {"Pistachio", "Peppermint Mocha", "Peppermint White Chocolate",
                             "Caramel Brulée", "Chestnut Praline", "Sugar Cookie Almondmilk",
                             "Toasted White Chocolate", "Chocolate Cookie Crumble",
                             "Caramel Ribbon Crunch", "Strawberry", "Chai",
                             "Double Chocolaty Chip", "Matcha", "Vanilla Bean",
                             "White Chocolate"};

public:
    CremeFrappuccino(bool);
    std::string getSyrup(int);
    std::string getName();
    bool getWhipped();
}

#endif