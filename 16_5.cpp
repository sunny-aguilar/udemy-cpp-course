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

// template for generic multiplication
template <class S>
S multiply(S a, S b) {
    return a * b;
}

// template for generic comparisons
template <typename T>
T max(T a, T b) {
    return (a > b) ? a: b;
}

int main() {
    int a =2;
    int b = 3;

    cout << "Multiply: " << multiply(a , b) << endl;
    double doubleA {1};
    double doubleB {2};
    char charA = 'A';
    char charB = 'B';
    cout << "Integer: " << max(a, b) << endl;
    cout << "Double: " << max(doubleA, doubleB) << endl;
    cout << "Char: " << max(charA, charB) << endl;

    return 0;
}