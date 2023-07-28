#include <iostream>
using namespace std;
int factorial(int c)
{
    if (c >= 1)
    {
        return c * factorial(c - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n, m;

    cout << "enter no factorial";
    cin >> n;
    m = factorial(n);
    cout << "factorial of number" << m;
    return 0;
}