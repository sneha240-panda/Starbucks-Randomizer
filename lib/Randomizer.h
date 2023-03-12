#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <string>
#include "Weather.h"

class Randomizer
{
private:
    Weather *weather;
    int age;

public:
    Randomizer(Weather *currentWeather, int theUserAge);
    std::string getRandomDrink();
};
#endif