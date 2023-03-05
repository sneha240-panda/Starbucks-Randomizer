#include <iostream>
#include <string>
#include "lib/User.h"
#include "lib/Weather.h"
#include "lib/HotChocolate.h"
#include "lib/CoffeeSyrup.h"

using namespace std;

int main()
{
    string getName = "";
    User *user;
    Weather *weather;
    while (true)
    {
        cout << "Hi, welcome to Starbucks Sample!" << endl;
        cout << "Would you like to tell us your name and age? \n(y: yes, I'd love to; n: no, next time): ";
        cin >> getName;

        if (getName == "y")
        {
            string name;
            int age;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;

            user = new User(name, age);
        }

        else if (getName == "n")
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

        cout << "Name: " << user->getName() << "\n"
             << "Age:" << user->getAge() << endl;
        cout << "Weather: " << weather->getCurrentWeather() << endl;

        HotChocolate *refresher = new HotChocolate();
        CoffeeSyrup *coffeeSyrup = new CoffeeSyrup(refresher);

        cout << coffeeSyrup->getName() << endl;

        delete refresher;
        break;
    }
    delete weather;
    delete user;
}