#include "../header/Latte.h"
#include <string>

Latte::Latte(bool isItHot, int numOfEspressoShots)
{
    isHot = isItHot;
    numEspressoShots = numOfEspressoShots;
}

std::string Americano::getName()
{
    return "You have ordered a Latte."
}