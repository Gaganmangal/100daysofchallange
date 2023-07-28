#include <iostream>
// this is the challange in this we take a number from user and print this is my favarate no too or no way <no> is also my favarote randomly
using namespace std;
int main()
{
    int num;
    cout << "enter the number between 0 to 100";
    cin >> num;
    if (num >= 0 && num <= 100)
    {
        int random;
        random = random % 2;
        if (random == 0)
        {
            cout << "this is my favarote no too";
        }
        else
        {
            cout << "no way" << num << "this is my favarote no too";
        }
    }
    else
    {
        cout << "dude please chose between 0 to 100";
    }
    return 0;
}