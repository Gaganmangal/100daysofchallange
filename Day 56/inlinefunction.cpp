#include <iostream>
using namespace std;
inline int product(int x, int y)
{
    return x * y;
}

int money(int current_money, float factor = 1.56)
{
    return current_money * factor;
}

int main()
{
    int a, b;
    cout << "enter a and b" << endl;
    cin >> a >> b;
    cout << "product of a and b" << product(a, b) << endl; // changes to the actual code
    cout << "product of a and b" << product(a, b) << endl;
    int count;
    cout << "enter the current money" << endl;
    cin >> count;
    cout << "if you are not vip" << money(count) << endl;
    cout << "if you are vip" << money(count, 5.34) << endl;
    return 0;
}