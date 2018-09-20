/*********************************************************************
** Author:          Sandro Aguilar
** Date:            September 18, 2018
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
            this->value = val;
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

class SortedNumberList: public NumberList {
    public:
        void add(double number);
};

/*********************************************************************
** Description:     adds a new node to the end of the linked list
*********************************************************************/
void NumberList::add(double number) {
    if (head == nullptr)
        head = new ListNode(number);
    else {                                          // the list is not empty
        ListNode *nodePtr = head;                   // use nodePtr to traverse the list
        while (nodePtr->next != nullptr)
            nodePtr = nodePtr->next;

        nodePtr->next = new ListNode(number);       // nodePtr->next is nullptr so nodePtr points to last node
        // create a new node and put it after the last node
    }
}

/*********************************************************************
** Description:     display the linked list values stored in list
*********************************************************************/
void NumberList::displayList() const {
    ListNode *nodePtr = head;
    while (nodePtr) {
        cout << nodePtr->value << "   ";
        nodePtr = nodePtr->next;
    }
}

/*********************************************************************
** Description:     destructor deallocates the memory used by the list
*********************************************************************/
NumberList::~NumberList() {
    ListNode *nodePtr = head;
    while (nodePtr != nullptr) {
        ListNode *garbage = nodePtr;
        nodePtr = nodePtr->next;
        delete garbage;
    }
}

/*********************************************************************
** Description:
*********************************************************************/

/*********************************************************************
** Description:
*********************************************************************/
void NumberList::remove(double number) {

}

int main() {
    NumberList list;
    list.add(2.5);
    list.add(7.9);
    list.add(12.6);
    list.displayList();
    list.remove(12.6);
    cout << endl;

    return 0;
}

