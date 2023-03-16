#include "../lib/Latte.h"
#include <string>

Latte::Latte(bool isItHot, int numOfEspressoShots)
{
    isHot = isItHot;
    numEspressoShots = numOfEspressoShots;
}

std::string Espresso::getName()
{
    return this->getTemp() + " Latte with " + numOfEspressoShots + " shots.";
}