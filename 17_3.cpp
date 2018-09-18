/*********************************************************************
** Author:          Sandro Aguilar
** Date:            September 7, 2018
** Description:     Linked Lists
*********************************************************************/
#include <iostream>
using std::cout;
using std::endl;

class NumberList{
    private:
        struct ListNode {
            double value;
            ListNode *next;
            ListNode(double val, ListNode *next1 = nullptr) {
                value = val;
                next = next1;
            }
        };
        ListNode *head;

    public:

};

int main() {


    return 0;
}
