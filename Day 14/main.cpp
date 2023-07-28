#include <iostream>
#include "Acount.h"
using namespace std;
int main()
{
    Account frank_account;
    frank_account.set_name("frank's account");
    frank_account.set_balance(10000.0);
    if (frank_account.deposit(200.0))
    {
        cout << "deposite OK" << endl;
    }
    else
        cout << "deposite Not allowed" << endl;

    if (frank_account.withdraw(5000.0))
        cout << "withdraw OK" << endl;
    else
        cout << "in suffient amount" << endl;
    if (frank_account.withdraw(15000.0))
        cout << "with drow OK" << endl;
    else
        cout << "acount not have sufficient amount" << endl;
}