#include "../header/Espresso.h"
#include <string>

Espresso::Espresso(int numOfEspressoShots)
{
    numEspressoShots = numOfEspressoShots;
}

std::string Americano::getName()
{
    return "Espresso";
}