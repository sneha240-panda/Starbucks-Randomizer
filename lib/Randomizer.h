#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <string>
#include "Weather.h"

class Randomizer
{
private:
    Weather *weather;
    int age;
    int choiceDrink;

public:
    Randomizer(Weather *currentWeather, int theUserAge, int UserChoiceDrink);
    int getAge();
    int getuserChoiceDrink();
    Weather getCurrWeather();
    std::string getRandomDrink();
};
#endif