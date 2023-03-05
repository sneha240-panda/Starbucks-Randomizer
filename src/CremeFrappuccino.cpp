#include "../lib/CremeFrappuccino.h"
#include <string>

CremeFrappuccino::CremeFrappuccino(bool isWhipped)
{
    whippedCream = isWhipped;
}

std::string CremeFrappuccino::getSyrup(int pos)
{
    int arrLength = sizeof(arr) / sizeof(std::string);
    if (pos > arrLength)
    {
        return "No such position in the Syrup array!";
    }
    return syrup[pos];
}

std::string CremeFrappuccino::getName()
{
    return isName;
}

bool CremeFrappuccino::getWhipped()
{
    return whippedCream;
}
