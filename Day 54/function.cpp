#include <iostream>
using namespace std;
int sum(int x, int y)
{
    int c = x + y;
    return c;
}
// this will not swap and b hencew call by value+
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
// call by reference
void swappp(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b, d;
    int *f = &a, *g = &b;
    cout << "enter the value of a and b";
    cin >> a >> b;
    d = sum(a, b);
    cout << "the sum of a,b" << d << endl;
    cout << "value of a and b respectively" << a << b << endl;
    swap(a, b);
    cout << "value of a and b respectively" << a << b << endl;
    swappp(&a, &b);
    cout << "value of a and b respectively" << a << b << endl;

    return 0;
}