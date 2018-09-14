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

int divide(int num, int den);

int main() {
    double quotient{};

    try {
        quotient = divide(3,0);
        cout << "The answer to the division is: " << quotient<< endl;
    }
    catch (string &ex) {
        std::cerr << ex;
    }
    cout << "Program has completed normal ops" << endl;

    return 0;
}

int divide(int num, int den) {
    if (den == 0)
        throw string("Cannot divide by zero!\n");
    else
        return num / den;
}