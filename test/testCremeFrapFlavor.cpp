#include "gtest/gtest.h"
#include "../lib/CremeFrappuccinoFlavor.h"

TEST(CremFrapTest, getsName)
{
    CremeFrappuccinoFlavor *creme1 = new CremeFrappuccinoFlavor();
    EXPECT_NO_THROW(creme1->getName());
}
TEST(CremFrapTest,constructor)
{
    CremeFrappucinoFlavor *creme2 = new CremeFrappuccinoFlavor();
    EXPECT_NO_THROW(creme2->getName());
}