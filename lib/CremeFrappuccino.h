#ifndef CREMEFRAPPUCCINO_H
#define CREMEFRAPPUCCINO_H

#include "../lib/Drink.h"
#include <string>

class CremeFrappuccino : public Drink
{
private:
    // std::string syrup[15] = {"Pistachio", "Peppermint Mocha", "Peppermint White Chocolate",
    //                          "Caramel Brulée", "Chestnut Praline", "Sugar Cookie Almondmilk",
    //                          "Toasted White Chocolate", "Chocolate Cookie Crumble",
    //                          "Caramel Ribbon Crunch", "Strawberry", "Chai",
    //                          "Double Chocolaty Chip", "Matcha", "Vanilla Bean",
    //                          "White Chocolate"};

public:
    CremeFrappuccino();
    std::string getName() override;
};

#endif