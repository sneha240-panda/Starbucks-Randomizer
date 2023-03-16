#include "gtest/gtest.h"
#include "../lib/Americano.h"
#include "../lib/Coffee.h"
#include "../lib/Drink.h"
#include <string>

//testing the constructor, getTemp()

Test(AmericanoConstructorTest, ATest1){
	Americano americano1(true, 3);
	Expect_EQ(american1.getTemp(), "Hot");
}

Test(AmericanoConstructorTest, ATest2){
	Americano americano2(false, 4);
	Expect_EQ(americano2.getTemp(), "Iced");
}

TEST(AmericanoConstructorTest, Atest3)
{
    Americano americano3(false, 2);
    ASSERT_EQ(americano3.getNumberEspresso(), "double");
    ASSERT_EQ(americano3.getTemp(), "Iced");
}

// testing the getName() function


TEST(AmericanoGetNameTest, Atest4)
{
    Americano americano4(true, 1);
    EXPECT_EQ(americano4.getName(), "Hot Americano with a 1 espresso shot.");
}

