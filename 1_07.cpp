/*********************************************************************
** Author:          Sandro Aguilar
** Date:            August 26, 2018
** Description:     7. Move constructor - a move constructor is 
**                  implemented to improve the efficiency of the copy
**                  constructor when using r-values.
*********************************************************************/
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class Car {
    private:
        int* speed;
        string brand;

    public:
        void setPointer(int* s) {
            speed = s;
        }
        int getSpeed() {
            return *speed;
        }
        void setBrand(string b) {
            brand = b;
        }
        string getBrand() {
            return brand;
        }
        Car()
            : speed{0}, brand{"none"}{
        }
        Car(int* speed, string brand)
            : speed{speed}, brand{brand} {
        }
        Car(Car &&source)
        /*: speed{source.speed}*/ {
            this->speed = source.speed;
            source.speed = nullptr;
            std::cout << "move constructor running..." << std::endl;
        }
};

int main() {
    Car honda;
    std::cout << honda.getBrand() << std::endl;
    honda.setBrand("bmw");
    std::cout << honda.getBrand() << std::endl;

    int x {100};
    honda.setPointer(&x);

    std::cout << "Speed: " << honda.getSpeed() << std::endl;

    vector<Car> vec;
    vec.push_back(Car{&x, "toyota"});
//    Car toyota = Car(&x, "toyota");
    std::cout << "Vec Size: " << vec.size();


    return 0;
}
