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

TEST(LatteTest, NameTest1){
        Latte hotLatte1(false, 2);
        Latte coldLatte1(true, 1);
        
        EXPECT_EQ(hotLatte1.getName（）, "Hot Latte with a double espresso shot.");
        EXPECT_EQ(coldLatte1.getName（）, "Cold Latte with a single espresso shot.");
}

TEST(LatteTest, NameTest1){
        Latte coldLatte2(true, 3);
        Latte hotLatte2(false, 1);

        ASSERT_EQ(hotLatte2.getName（）, "Cold Latte with a double espresso shot.");
        ASSERT_EQ(coldLatte2.getName（）, "Hot Latte with a single espresso shot.");
}

