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

template <class T>
T smallest(T arr[], int size) {
    T small = arr[0];

    for (size_t i{0}; i < size; i++) {
        if (arr[i] < small)
            small = arr[i];
    }
    return small;
}

int main() {
    int arr[] {88,34,3,414,59};
    cout << "Smallest value in array is: " << smallest(arr, 5) << endl;

    string array[] {"a","b","c","d","e"};
    cout << "Smallest value in array is: " << smallest(array, 5) << endl;

    std::cerr << "Error found!" << endl;

    return 0;
}


