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
//    ListNode *secondptr = new ListNode(13.5);
//    ListNode *head = new ListNode(12.5, secondptr);

    ListNode *head = new ListNode(13.5);
    head = new ListNode(12.5, head);

    // traversing the list
    ListNode *ptr = head;
    // display first note value
    cout << "First Node Value: " << head->value << endl;
    // move the pointer to the next node
    ptr = ptr->next;
    cout << "Second Node Value: " << ptr->value << endl;

    return 0;
}