/*********************************************************************
** Author:          Sandro Aguilar
** Date:            August 26, 2018
** Description:     8. Class initialization lists - this class uses
**                  class initialization lists to initialize the member
**                  variables when they are declared.
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Country {
    private:
        string name;
        int population;
        double averageTemp;

    public:
        // default constructor
        Country()
            : name{"none"}, population{0}, averageTemp{0.0} {
        }

        // 2-arg constructor
        Country(string name, int population)
            : name{name}, population{population}, averageTemp{0.0} {
        };

        // 3-arg constructor
        Country(string name, int population, double averageTemp)
            : name{name}, population{population}, averageTemp{averageTemp} {
        }

        // getter functions
        // get name
        string getName() {
            return name;
        };
        // get population
        int getPop() {
            return population;
        }
        // get temperature
        double getTemp() {
            return averageTemp;
        }
};

int main() {
    Country first;

    cout << std::fixed << std::setprecision(1);

    cout << "Country: " << first.getName() << endl;
    cout << "Population: " << first.getPop() << endl;
    cout << "Avg. Temp: " << first.getTemp() << endl << endl;

    Country second{"Canada", 999999};

    cout << "Country: " << second.getName() << endl;
    cout << "Population: " << second.getPop() << endl;
    cout << "Avg. Temp: " << first.getTemp() << endl << endl;

    Country third{"Mexico", 555555, 24.3};

    cout << "Country: " << third.getName() << endl;
    cout << "Population: " << third.getPop() << endl;
    cout << "Avg. Temp: " << third.getTemp() << endl;

    return 0;
}
