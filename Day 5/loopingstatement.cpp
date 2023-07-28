#include <iostream>
using namespace std;
int main()
{
    // lopping or iterative statement
    // 1 for loop
    int a;
    cout << "enter the element table";
    cin >> a;
    cout << "by for loop";
    for (int i = 1; i < 11; i++)
    {
        cout << a << "*" << i << "=" << a * i << endl;
    }
    // 2 while loop
    cout << "first N natural number" << endl;
    int n;
    cout << "enter the element till number is print";
    cin >> n;
    int i;
    i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
    // 3 do while loop
    // fabonic series
    i = 1;
    a = 0;
    int b = 1, c;
    cout << "fabonicie series";
    cout << a << " " << b;
    do
    {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
        i++;
    } while (i < n);
    return 0;
}