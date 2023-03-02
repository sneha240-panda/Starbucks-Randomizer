#include "../header/User.h"
#include "../header/Weather.h"
#include <string>
#include <iostream>

using namespace std;

User::User(string n, int a, bool c)
{
    userName = n;
    age = a;
    userCaff = c;
}
User::User()
{
    age = 10;
    userName = "username";
    c = false;
}
string User::getName()
{
    return userName;
}
string User::getDrink()
{
   //my thought process is as follows:
   //1. make sure you have the classification (e.g. moderately cold, etc)
   //2. have a statement that scans allergies and ingredients for each drink
   //3. make a big if statement to filter out types of drinks based on weather conditions
}