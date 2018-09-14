/*********************************************************************
** Author:          Sandro Aguilar
** Date:            September 13, 2018
** Description:     Exceptions, Templates, and the STL
*********************************************************************/
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::cerr;

template <typename T>
T max(T num1, T num2) {
    return (num1 > num2) ? num1: num2;
}

int main() {
    int a = 2;
    int b = 3;
    cout << "Square is: " << max(a,b);

    return 0;
}