#include "gtest/gtest.h"
#include "../lib/User.h"

TEST(UserTest, testDefaultConstructor)
{
    User *user = new User();
    EXPECT_EQ(user->getAge(), 25);
    EXPECT_EQ(user->getName(), "AwesomeSauce");
}