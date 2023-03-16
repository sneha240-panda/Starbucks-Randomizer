#include "gtest/gtest.h"
#include "../lib/Randomizer.h"

TEST(RandomTest, constructorWorks)
{
    Randomizer *random1 = new Randomizer("1", 10, 2);
    EXPECT_EQ(random1->getAge(), 10);
    EXPECT_EQ(random1->getuserChoiceDrink(), 2);
    EXPECT_EQ(random1->getCurrWeather, 1);
}
TEST(RandomTest, getDrink)
{
    vector <string> empty = {};
    Randomizer *generator1 = new Randomizer();
    bool listAdd = true;
    generator1->generateList(&empty, &listAdd);
    EXPECT_GT(empty.size(), 0);
}

