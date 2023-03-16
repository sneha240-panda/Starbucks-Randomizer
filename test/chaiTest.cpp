#include "gtest/gtest.h"
#include "../lib/ChaiTea.h"
#include "../lib/Drink.h"
#include <string>

TEST(ChaiConstructorTest, CTtest1)
{
    Chai chai1();
    EXPECT_EQ(chai1.getTemp(), "Hot");


TEST(ChaiConstructorTest, CTtest2)
{
    Chai chai2(true);
    EXPECT_EQ(chai2.getTemp(), "Hot");
}

TEST(ChaiConstructorTest, CTtest3)
{
    Chai chai3(false);
    EXPECT_EQ(chai3.getTemp(), "Hot");
}

TEST(ChaiGetNameTest, CTtest4)
{
    Chai chai4(true);
    EXPECT_EQ(chai4.getName(), "Hot Chai Tea");
}

TEST(ChaiGetNameTest, CTtest5)
{
    Chai chai5(false);
    EXPECT_EQ(chai5.getName(), "Hot Chai Tea");
}

TEST(ChaiGetNameTest, CTtest6)
{
    Chai chai6();
    EXPECT_EQ(chai6.getName(), "Hot Chai Tea");
}

