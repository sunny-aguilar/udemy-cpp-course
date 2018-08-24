/*********************************************************************
** Author:          Sandro Aguilar
** Date:            July 26, 2018
** Description:     4.
**
**
*********************************************************************/
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using std::string;

int main() {
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};

    journal_entry_1.erase(0,6);

    if (journal_entry_2 < journal_entry_1)
        journal_entry_1.swap(journal_entry_2);

    std::cout << journal_entry_1 << std::endl;
    std::cout << journal_entry_2 << std::endl;

    return 0;
}
