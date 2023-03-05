#include "Randomizer.h"
#include <vector>
#include <cstdlib> // for rand() function

class NonCafRandomizer : public Randomizer {
public:
    std::string getRandomDrink() override {
        std::vector<std::string> drinks = {"Creme Frappuccino", "Refresher", "Hot Chocolate"};
        int randomIndex = rand() % drinks.size();
        return drinks[randomIndex];
    }
};
