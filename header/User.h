#ifndef USER_H
#define USER_H
#include "Weather.h"
#include <string>
#include <iostream>
using namespace std;

class User 
{
    private:    
        std::string userName;
        int age;
        Weather mainW;
        bool userCaff;
    public:
        User(string, int, bool);
        User();
        string getName();
        string getDrink(); //returns the final drink with all parameters considered

};

#endif