#include "../header/Americano.h"
#include <string>

Americano::Americano(bool isItHot, int numOfEspressoShots)
{
    isHot = isItHot;
    numEspressoShots = numOfEspressoShots;
}

std::string Americano::getName()
{
    return "Americano";
}