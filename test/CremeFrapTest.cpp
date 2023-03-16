#include "gtest/gtest.h"
#include "../lib/CremeFrappuccino.h"
#include "../lib/Drink.h"
#include <string>

TEST(FrapGetNameTest, CFtest1)
{
    Frap frap1();
    EXPECT_EQ(frap1.getName(), "Crème Frappuccino");
}

TEST(FrapGetNameTest, CFtest2)
{
    Frap frap2();
    EXPECT_STRNE(frap2.getName(), "Creme Frappuccino");
}

TEST(FrapGetNameTest, CFtest3)
{
    Frap frap3();
    EXPECT_STRCASEEQ(frap3.getName(), "crème frappuccino");
}

