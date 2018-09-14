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
T square(T num1, T num2) {
    return num1 * num2;
}

int main() {
    int a = 2;
    int b = 2;
    cout << "Square is: " << square(a,b);

    return 0;
}