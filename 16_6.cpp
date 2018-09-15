/*********************************************************************
** Author:          Sandro Aguilar
** Date:            September 15, 2018
** Description:     Exceptions, Templates, and the STL
*********************************************************************/
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> vec {10, 20, 30,40,50};
    vector<int>::iterator vit = vec.begin();
    // auto vit = vec.begin();
    while (vit != vec.end()) {
        cout << *vit << " ";
        vit++;
    }

    return 0;
}
