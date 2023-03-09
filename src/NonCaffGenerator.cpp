#include "../lib/CaffGenerator.h"
#include "../lib/Americano.h"
#include "../lib/ChaiTea.h"
#include "../lib/CoffeeSyrup.h"
#include "../lib/CremeFrappuccino.h"
#include "../lib/CremeFrappuccinoFlavor.h"
#include "../lib/Espresso.h"
#include "../lib/Latte.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

void NonCaffGenerator::generateList(vector<string> *drinkList, bool *isHot)
{
    CremeFrappuccino *cremeFrap = new CremeFrappuccino();
    CremeFrappuccinoFlavor *frapFlavor = new CremeFrappuccinoFlavor(cremeFrap);
    drinkList->push_back(frapFlavor->getName());
    delete cremeFrap;
    delete frapFlavor;

}
