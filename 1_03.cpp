/*********************************************************************
** Author:          Sandro Aguilar
** Date:            July 26, 2018
** Description:     5. Given a vector of integers named vec, find the
**                  sum of the of the product of all pairs. For example,
**                  given vector vec to be {1,2,3}, the possible pairs 
**                  are (1,2), (1,3), and (2,3). So the result would 
**                  be (1*2) + (1*3) + (2*3) which is eleven. If the
**                  vector is empty or has only 1 element, then the
**                  result should be 0;
*********************************************************************/
#include <iostream>
#include <vector>
using std::vector;

int calculate_pairs(vector<int> vec);

int main() {
    vector<int> vec {2,4,6,8};

    std::cout << "Result: " << calculate_pairs(vec);
}

int calculate_pairs(vector<int> vec) {
    int result {};
    int size {static_cast<int>(vec.size())};
    int start {};
    int second {};

    if (size < 2)
        result = 0;
    else {
        for (start; start < size - 1; start ++) {
            for (second; second < size - 1; second++) {
                result += vec[start] * vec[second + 1];
            }
            second = start+1;

        }
    }

    return result;
}
