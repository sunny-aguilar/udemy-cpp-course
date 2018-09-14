///*********************************************************************
//** Author:          Sandro Aguilar
//** Date:            September 13, 2018
//** Description:     Exceptions, Templates, and the STL
//*********************************************************************/
//#include <iostream>
//#include <string>
//using std::cin;
//using std::cout;
//using std::endl;
//using std::string;
//
//class IntRange {
//private:
//    int input;
//    int lower;
//    int upper;
//
//public:
//    class OutOfRange {};
//
//    IntRange(int low, int high)
//        : lower{low}, upper{high} {
//    }
//
//    int getInput() {
//        cin >> input;
//        if (input < lower ||  input > upper)
//            throw OutOfRange();
//        return input;
//    }
//
//};
//
//int main() {
//    IntRange range(5,10);
//    int userValue;
//
//    cout << "Enter a value in the range 5 - 10: ";
//    try {
//        userValue = range.getInput();
//        cout << "You entered " << userValue << endl;
//    }
//    catch (IntRange::OutOfRange) {
//        cout << "That value is our of range.\n";
//    }
//    cout << "End of the program.\n";
//
//    return 0;
//}
//
