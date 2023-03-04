#include "gtest/gtest.h"
#include "../lib/User.h"

TEST(UsetTest, testDefaultConstructor)
{
    User *user = new User();
    EXPECT_EQ(user->getAge(), 25);
    // EXPECT_STREQ(user->getName(), "AwsomeSauce");
}