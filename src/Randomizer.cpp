#include "../lib/Randomizer.h"
#include "../lib/Weather.h"
#include "../lib/CaffGenerator.h"
#include "../lib/NonCaffGenerator.h"
#include "../lib/NonCafAndCaf.h"

#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

Randomizer::Randomizer(Weather *currentWeather, int theUserAge)
{
    weather = currentWeather;
    age = theUserAge;
}

string Randomizer::getRandomDrink()  
{
    vector<string> drinkList = {}; // creating an empty drink list. this is the final list which will be picked from to get the drink for the user!
    CaffGenerator *caffGenerator = new CaffGenerator(); // creating a caff generator object! this is for the caffeinated drinks
    NonCaffGenerator *nonCaffGenerator = new NonCaffGenerator(); // creating a nonCaf generator object! this is for the noncaffeinated drinks
    NonCafAndCaf *nonCafAndCafGen = new NonCafAndCaf(); // creating a caf AND noncaf generator object! this is for all drinks

    bool isHot = false; // default bool isHot is false

    switch (weather->getCurrentPos())
    {
        case 0:
            isHot = false; // if the weather is hot, the drink is cold
            break;
        case 1:
            isHot = true; // if the weather is cold, the drink is hot
            break;
        default:
            isHot = false; // any drink is cool! (pun 100% intended)
    }
    
    if (age <= 10) // fix this! 
    {
        nonCaffGenerator->generateList(&drinkList, &isHot); // generate list of creme frappuccino, refresher, and hot chocolate
        delete nonCaffGenerator; // deleting the noncaf generator
    }
    else
    {
        caffGenerator->generateList(&drinkList, &isHot); // generate list of americano, latte, chaiTea, and espresso 
        delete caffGenerator; // delete the caff generator object (cuz you gotta deallocate memory)
    }

    srand(time(0)); // seed for random
    int randIndex = rand() % drinkList.size(); // generate a random index from the drinkList vector
    return drinkList.at(randIndex);
}
