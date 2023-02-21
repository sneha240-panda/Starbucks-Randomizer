#ifndef WEATHER_H
#define WEATHER_H
#include <string>
using namespace std;

class Weather 
{
    public:
        string weatherType; ///user input of type of weather
        string classifyDrinkType(); //based on user input, shows types of drinks to choose from


};
#endif