#include "../header/RefreshersLemonades.h"
#include <string>

std::string RefreshersLemonades::getFlavor(int pos)
{
    int arrLength = sizeof(arr) / sizeof(std::string);
    if (pos > arrLength)
    {
        return "No such position in the Flavors array!";
    }
    return flavors[pos];
}

std::string RefreshersLemonades::getName()
{
    return isName;
}