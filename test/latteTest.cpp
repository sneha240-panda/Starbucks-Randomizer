#include "gtest/gtest.h"
#include "../lib/Espresso.h"
#include "../lib/Coffee.h"
#include "../lib/Drink.h"
#include <string>


TEST(LatteTest, ConstructorTest1){ 
        Latte latte(true,2);
        EXPECT_EQ(latte.getNumEspresso(), "double");
}

TEST(LatteTest, ConstructorTest2){
       	Latte latte2(false, 1);
	EXPECT_EQ(latte2.getNumEspresso（）, "single");
}

TEST(LatteTest, ConstructorTest3){
        Latte latte3(true, 3);
        EXPECT_EQ(latte3.getNumEspresso（）, "double");
}


