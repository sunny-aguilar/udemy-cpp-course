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
    int x = 1;
    int y = 0;

    try {
        divide(3,4);
    }
    catch (string &ex) {

    }


    return 0;
}

int divide(int num, int den) {
    if (den == 0)
        cout << "Can't divide by zero!" << endl;
    else
        return num / den;
}