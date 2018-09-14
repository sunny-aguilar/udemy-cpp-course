///*********************************************************************
//** Author:          Sandro Aguilar
//** Date:            August 26, 2018
//** Description:     10. Using constructor with default arguments
//**                  reduce the need for multiple constructors.
//*********************************************************************/
//#include <iostream>
//#include <string>
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//
//class Airplane{
//    private:
//        string type;
//        int speed;
//
//    public:
//        // default constructor with default values
//        Airplane(string model = "none", int velocity = 0)
//            : type{model}, speed{velocity} {
//        }
//
//        string getType() {
//            return type;
//        }
//        int getSpeed() {
//            return speed;
//        }
//};
//
//int main() {
//    Airplane plane {"SR-71", 1100};
//    cout << "Model: " << plane.getType() << " Speed: " << plane.getSpeed() <<  "MPH" << endl;
//
//    Airplane wrightPlane;
//    cout << "Model: " << wrightPlane.getType() << " Speed: "
//         << wrightPlane.getSpeed() <<  "MPH" << endl;
//
//    return 0;
//}
