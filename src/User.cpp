#include "User.h"
#include <string>

using namespace std;

User::User(string n, int a)
{
    userName = n;
    age = a;
}
User::User()
{
    // dont remember how to do this - SP
}
string User::getName()
{
    return userName;
}
string User::getDrink()
{
   //my thought process is as follows:
   //1. make sure you have the weather temperature and classification (e.g. 71 degrees translates to moderately cold)
   //2. have a statement that scans allergies and ingredients for each drink
   //3. make a big if statement to filter out types of drinks based on weather conditions
}