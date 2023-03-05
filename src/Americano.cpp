#include "../lib/Americano.h"
#include <string>

Americano::Americano(bool isItHot, int numOfEspressoShots)
{
    isHot = isItHot;
    numEspressoShots = numOfEspressoShots;
}

std::string Americano::getName()
{
    return getTemp() + " Americano with a " + getNumberEspresso() + " espresso shot.";
}