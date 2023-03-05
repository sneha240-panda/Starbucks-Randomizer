#include "../lib/RefresherFlavor.h"
#include "../lib/Drink.h"
#include <string>
using namespace std;

RefresherFlavor::RefresherFlavor(Drink *currentDrink)
{
    drink = currentDrink;
}

string RefresherFlavor::getName()
{
    return "\nDrink: " + drink->getTemp() + " " + drink->getName() + "\n" + "Refresher Flavor: " + refresherFlavors.at(0);
}