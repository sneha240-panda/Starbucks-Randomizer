#include "Randomizer.h"
#include <vector>
#include <cstdlib> // for rand() function

class CafRandomizer : public Randomizer {
public:
    std::string getRandomDrink() override {
        std::vector<std::string> drinks = {"Latte", "Espresso", "Americano", "Chai Tea"};
        int randomIndex = rand() % drinks.size();
        return drinks[randomIndex];
    }
};
