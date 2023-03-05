#include "../lib/Americano.h"
#include "../lib/Coffee.h"
#include "../lib/Drink.h"
#include <string>

Americano::Americano(bool isItHot, int numOfEspressoShots)
{
    isHot = isItHot;
    numEspressoShots = numOfEspressoShots;
}

std::string Americano::getName()
{
    return Drink::getTemp() + " Americano with " + getNumberEspresso() + " espresso shot.";
}