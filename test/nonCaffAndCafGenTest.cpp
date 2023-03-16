#include "gtest/gtest.h"
#include "../lib/Espresso.h"
#include "../lib/Coffee.h"
#include "../lib/Drink.h"
#include "../lib/NonCaffGenerator.h"
#include "../lib/NonCafAndCaf.h"
#include "../lib/CaffGenerator.h"
#include <string>

TEST(nonCaffAndCafGenTest, testVectorEqual)
{
    vector <string> empty1 = {};
    NonCafAndCaf *nc1 = new NonCafAndCaf();
    bool listAdd1 = true;
    nc1->generateList(&empty1, &listAdd1);
    EXPECT_GT(empty1.size(), 0);
}

