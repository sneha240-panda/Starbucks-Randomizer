#ifndef LATTE_H
#define LATTE_H

#include <string>
#include "Coffee.h"
#include "Drink.h"

class Latte : public Coffee, public Drink
{
    public:
        Latte(bool isHot, int numEspressoShots);
        std::string getName();
    }
#endif