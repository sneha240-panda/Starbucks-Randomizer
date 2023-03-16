#include "gtest/gtest.h"
#include "../lib/Espresso.h"
#include "../lib/Coffee.h"
#include "../lib/Drink.h"
#include <string>

// Testing Constructors 

TEST(EspressoConstructorTest, Etest1)
{
    Espresso espresso1(2);
    ASSERT_EQ(espresso1.getNumberEspresso(), "double");
}

