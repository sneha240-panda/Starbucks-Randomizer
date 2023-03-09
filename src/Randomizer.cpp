#include "../lib/Randomizer.h"
#include "../lib/Weather.h"
#include "../lib/CaffGenerator.h"
#include "../lib/NonCaffGenerator.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

//need to create a way to differentiate NonCaff from Caff. We can do this by creating an if statement that takes in the user's age as an object 
//and if it is under say like the age of 10, the program would use the Non-Caffeinated generator, and if over that age, it uses the CaffGenerator.

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
    
    /* vector<string> drinkList = {};
    NonCaffGenerator *noncaffGenerator = new NonCaffGenerator();
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
    noncaffGenerator->generateList(&drinkList, &isHot);
    srand(time(0));
    int randIndex = rand() % drinkList.size();

    delete noncaffGenerator;
    return drinkList.at(randIndex); */
}
