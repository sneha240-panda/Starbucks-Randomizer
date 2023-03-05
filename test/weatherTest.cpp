#include "gtest/gtest.h"
#include "../lib/Weather.h"

TEST(WeatherTests,weatherConstructorDefault) //tests whether default constructor works
{
    Weather *weather1 = new Weather();
    EXPECT_EQ(weather1->getCurrentWeather(), "Any");
}

TEST(WeatherTests,weatherConstructorParameterized) //tests paramterized constructor
{
    Weather *weather2 = new Weather(1);
    EXPECT_EQ(weather2->getCurrentWeather(), "Cold");
}

TEST(WeatherTests,)
{

}
