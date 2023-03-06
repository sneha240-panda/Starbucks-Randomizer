#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <string>
#include "Weather.h"

class Randomizer
{
private:
    Weather *weather;

public:
    Randomizer(Weather *currentWeather);
    std::string getRandomDrink();
};
#endif