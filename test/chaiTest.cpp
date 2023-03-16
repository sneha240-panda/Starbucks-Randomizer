#include "gtest/gtest.h"
#include "../lib/ChaiTea.h"
#include "../lib/Drink.h"
#include <string>

TEST(ChaiConstructorTest, CTtest2)
{
    Chai chai2(true);
    EXPECT_EQ(chai2.getTemp(), "Hot");
}

TEST(ChaiConstructorTest, CTtest3)
{
    Chai chai3(false);
    EXPECT_EQ(chai3.getTemp(), "Iced");
}

TEST(ChaiGetNameTest, CTtest4)
{
    Chai chai4(true);
    EXPECT_EQ(chai4.getName(), "Hot Chai Tea");
}

TEST(ChaiGetNameTest, CTtest5)
{
    Chai chai5(false);
    EXPECT_EQ(chai5.getName(), "Iced Chai Tea");
}


