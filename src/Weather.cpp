#include "Weather.h"
#include <string>

using namespace std;

Weather::Weather(string w)
{
    weatherType = w; //the user should most likely input one word to describe the weather
}
string Weather::classifyDrinkType() //should tell what class of drinks the program should go to based on weather
{
    if (weatherType == "sunny")
    {
        //choose the refreshers, teas or lattes (cold drinks) - need these classes most likely
    }
    if (weatherType == "cloudy")
    {
        //choose lattes, americanos, espressos - any hot drinks (need classes for those)
    }  
    if (weatherType == "snowy")
    {
        //choose lattes, americanos, espressos - any hot drinks (need classes for those)
    }  
    if (weatherType == "rainy")
    {
        //choose lattes, americanos, espressos - any hot drinks (need classes for those)
    }
}