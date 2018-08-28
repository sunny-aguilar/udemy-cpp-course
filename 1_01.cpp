/********************************************************************* 
** Author:          Sandro Aguilar
** Date:            August 22, 2018
** Description:     Practice initializing vectors 
*********************************************************************/
#include <iostream>
#include <vector>
using std::vector;

int main() {
    vector<int> vector1;
    vector<int> vector2;
    vector<vector<int>> vector2_d;

    vector1.push_back(10);
    vector1.push_back(20);

    std::cout << vector1.at(0) << " " << vector1.at(1) << std::endl;
    std::cout << "size: " << vector1.size() << std::endl;

    vector2.push_back(100);
    vector2.push_back(200);

    std::cout << vector2.at(0) << " " << vector2.at(1) << std::endl;
    std::cout << "size: " << vector2.size() << std::endl;

    vector2_d.push_back(vector1);
    vector2_d.push_back(vector2);

    std::cout << vector2_d.at(0).at(0) << " ";
    std::cout << vector2_d.at(0).at(1) << " ";
    std::cout << vector2_d.at(1).at(0) << " ";
    std::cout << vector2_d.at(1).at(1) << " " << std::endl;

    vector1.at(0) = 1000;

    std::cout << vector2_d.at(0).at(0) << " ";
    std::cout << vector2_d.at(0).at(1) << " ";
    std::cout << vector2_d.at(1).at(0) << " ";
    std::cout << vector2_d.at(1).at(1) << " " << std::endl;

    std::cout << vector1.at(0) << " ";
    std::cout << vector1.at(1) << " ";

    return 0;
}
