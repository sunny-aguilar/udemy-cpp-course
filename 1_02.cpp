/*********************************************************************
** Author:          Sandro Aguilar
** Date:            August 22, 2018
** Description:     Practice with boolalpha that sets 1 to true and 0
**                  to false;
*********************************************************************/
#include <iostream>

int main() {
    bool result1 {false};
    bool result2 {false};

    result1 = (100 == 50+50);
    result2 = (1 == 2);

    // boolalpha sets 1 to true and 0 to false
    std::cout << std::boolalpha << std::endl;

    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;

    return 0;
}
