#include "gtest/gtest.h"
#include "../lib/Refresher.h"
#include "../lib/Drink.h"
#include <string>

TEST(RefresherGetNameTest, Rtest1)
{
    Refresher refresher1();
    EXPECT_EQ(refresher1.getName(), "Refresher");
}

TEST(RefresherGetNameTest, Rtest2)
{
    Refresher refresher2();
    EXPECT_STRNE(refresher2.getName(), "Refreshers");
}

TEST(RefresherGetNameTest, Rtest3)
{
    Refresher refresher3();
    EXPECT_STRCASEEQ(frefresher3.getName(), "refresher");
}



