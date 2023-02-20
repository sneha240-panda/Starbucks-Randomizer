#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

class User 
{
    private:
        string userName;
        int age;
        int weather;
    public:
        string getName();
        string getDrink(); //returns the final drink with all parameters considered

}