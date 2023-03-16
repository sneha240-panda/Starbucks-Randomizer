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

TEST(EspressoConstructorTest, Etest2)
{
    Espresso espresso2(1);
    EXPECT_EQ(espresso2.getNumberEspresso(), "single");
}

TEST(EspressoConstructorTest, Etest3)
{
    Espresso espresso3(3);
    ASSERT_EQ(espresso3.getNumberEspresso(), "double");
}

// Testing getName function

TEST(EspressoConstructorTest, Etest4)
{
    Espresso espresso4(2);
    EXPECT_EQ(espresso4.getName(), "A double shot Espresso.");
}

