/*********************************************************************
** Author:          Sandro Aguilar
** Date:            September 16, 2018
** Description:     Linked Lists
*********************************************************************/
#include <iostream>
using std::cout;
using std::endl;

struct ListNode {
    double value;
    ListNode *next;
};

int main() {
    // create a pointer to a ListNode structure and assign it to nullptr
    ListNode *head = nullptr;
    // dynamically create a ListNode structure and assign it to head pointer
    head = new ListNode;
    // assign data member in the structure pointed to by head a value
    head->value = 12.5;
    // display value
    cout << "List value " << head->value << endl;
    // signify the end of the list
    head->next = nullptr;

    return 0;
}
