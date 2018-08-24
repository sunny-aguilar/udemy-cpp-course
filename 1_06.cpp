/*********************************************************************
** Author:          Sandro Aguilar
** Date:            July 26, 2018
** Description:     5. Block scope concept
**
**
*********************************************************************/
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using std::string;

int main() {
    {
        int num1 {100};
        std::cout << num1 << std::endl;
    }

    {
        int num2 {200};
        std::cout << num2 << std::endl;
    }

    std::cout << num1 << " " << num2 << std::endl;  // error! this line wont compile

    return 0;
}
