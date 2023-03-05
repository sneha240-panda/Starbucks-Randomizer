#include "../lib/CoffeeSyrup.h"
#include "../lib/Drink.h"
#include <string>
using namespace std;

CoffeeSyrup::CoffeeSyrup(Drink *currentDrink)
{
    drink = currentDrink;
}

string CoffeeSyrup::getName()
{
    return "\nDrink: " + drink->getTemp() + " " + drink->getName() + "\n" + "Syrup: " + syrups.at(0);
}