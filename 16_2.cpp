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
//class IntRange2 {
//private:
//    int input;
//    int lower;
//    int upper;
//
//public:
//    class TooLow {};
//    class TooHigh {};
//
//    IntRange2(int low, int high)
//            : lower{low}, upper{high} {
//    }
//
//    int getInput() {
//        cin >> input;
//        if (input < lower)
//            throw TooLow();
//        else if (input > upper)
//            throw TooHigh();
//        return input;
//    }
//
//};
//
//int main() {
//    IntRange2 range(5,10);
//    int userValue;
//
//    cout << "Enter a value in the range 5 - 10: ";
//    try {
//        userValue = range.getInput();
//        cout << "You entered " << userValue << endl;
//    }
//    catch (IntRange2::TooLow) {
//        cout << "That value is too low.\n";
//    }
//    catch (IntRange2::TooHigh) {
//        cout << "That value is too high.\n";
//    }
//    catch (...) {
//        cout << "Unknown exception.\n";
//    }
//
//    cout << "End of the program.\n";
//
//    return 0;
//}
//
