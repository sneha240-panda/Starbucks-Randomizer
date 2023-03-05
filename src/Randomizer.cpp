#include "../lib/Randomizer.h"
#include "../lib/Weather.h"
#include "../lib/CaffGenerator.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

Randomizer::Randomizer(Weather *currentWeather)
{
    weather = currentWeather;
}

string Randomizer::getRandomDrink()
{
    vector<string> drinkList = {};
    CaffGenerator *caffGenerator = new CaffGenerator();
    bool isHot = false;
    switch (weather->getCurrentPos())
    {
    case 0:
        isHot = false;
        break;
    case 1:
        isHot = true;
        break;
    default:
        isHot = false;
    }
    caffGenerator->generateList(&drinkList, &isHot);
    srand(time(0));
    int randIndex = rand() % drinkList.size();

    delete caffGenerator;
    return drinkList.at(randIndex);
}
