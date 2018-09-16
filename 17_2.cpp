/*********************************************************************
** Author:          Sandro Aguilar
** Date:            September 16, 2018
** Description:     Linked Lists
*********************************************************************/
#include <iostream>
using std::cout;
using std::endl;

struct ListNode{
    double value;
    ListNode *next;

    ListNode(double value, ListNode *next1 = nullptr) {
        this->value = value;
        next = next1;
    }
};

int main() {
    ListNode *secondptr = new ListNode(13.5);
    ListNode *head = new ListNode(12.5, secondptr);

    cout << "Head Node Value: " << head->value << endl;
    cout << "Second Node Value: " << secondptr->value << endl;

    return 0;
}