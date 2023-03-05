#ifndef AMERICANO_H
#define AMERICANO_H

#include <string>
#include "Coffee.h"
#include "Drink.h"

class Americano : public Coffee, public Drink
{  
    public:
        Americano(bool isHot, int numEspressoShots);
        std::string getName();
    }
#endif