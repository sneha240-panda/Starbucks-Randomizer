#include <iostream>
#include <string>
#include "header/User.h"
#include "header/Weather.h"

using namespace std;

int main()
{
    string stringInput = "";
    User *user;
    Weather *weather;
    while (true)
    {
        cout << "Hi, welcome to Starbucks Sample!" << endl;
        cout << "Would you like to tell us your name and age? \n(y: yes, I'd love to; n: no, next time): ";
        cin >> stringInput;

        if (stringInput == "y")
        {
            string name;
            int age;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;

            user = new User(name, age);
        }

        else if (stringInput == "n")
        {
            user = new User();
        }

        weather = new Weather();
        int currentWeather = -1;
        cout << "What is the weather like now?" << endl;
        weather->getWeatherTypes();
        cout << "Enter the corresponding number: ";
        cin >> currentWeather;
        weather->setCurrentWeather(currentWeather);

        cout << user->getName() << " " << user->getAge() << endl;
        cout << weather->getCurrentWeather() << endl;
        break;
    }
    delete weather;
    delete user;
}