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

