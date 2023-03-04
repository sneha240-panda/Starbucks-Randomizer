#include "../header/Weather.h"
#include <string>
#include <iostream>
using namespace std;

Weather::Weather()
{
    currentWeather = 2;
}

void Weather::getWeatherTypes()
{
    int i = 0;
    for (; i < weatherTypes.size() - 1; i++)
    {
        cout << i << ": " << weatherTypes.at(i) << ", ";
    }

    cout << i << ": " << weatherTypes.at(i) << endl;
}

void Weather::setCurrentWeather(int currentPosition)
{
    currentWeather = currentPosition;
}

string Weather::getCurrentWeather()
{
    return weatherTypes.at(currentWeather);
}