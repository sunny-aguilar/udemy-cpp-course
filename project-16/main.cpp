/*********************************************************************
** Author:          Sandro Aguilar
** Date:            September 2, 2018
** Description:     
**
*********************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Account {
    public:
        virtual void withdraw(double amount) {
            cout << "In Account::withdraw" << endl;
        }
        virtual ~Account() { cout << "Account::Destructor" << endl; };
};

class Checking: public Account {
    public:
        virtual void withdraw(double amount) {
            cout << "In Checking::withdraw" << endl;
        }
        virtual ~Checking() { cout << "Checking::Destructor" << endl; };
};

class Savings: public Account {
    public:
        virtual void withdraw(double amount) {
            cout << "In Savings::withdraw" << endl;
        }
        virtual ~Savings() { cout << "Savings::Destructor" << endl; };
};

class Trust: public Account {
    public:
        virtual void withdraw(double amount) {
            cout << "In Trust::withdraw" << endl;
        }
        virtual ~Trust() { cout << "Trust::Destructor" << endl; };
};

int main() {
    cout << "\n===Pointers===\n";
    Account* p1 = new Account();
    Account* p2 = new Savings();
    Account* p3 = new Checking();
    Account* p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}