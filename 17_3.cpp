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
        NumberList() { head = nullptr; }
        ~NumberList();
        void add(double number);
        void remove(double number);
        void displayList() const;
};

int main() {


    return 0;
}
