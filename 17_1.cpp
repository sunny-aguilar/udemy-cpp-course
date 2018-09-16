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
    ListNode *head = nullptr;
    head = new ListNode;
    head->value = 12.5;
    cout << "List value " << head->value << endl;

    return 0;
}
