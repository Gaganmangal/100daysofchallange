#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char o;
    cout << "first no";
    cin >> a;
    cout << "operator";
    cin >> o;
    cout << "second no";
    cin >> b;
    cout << "answer :";
    switch (o)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "you write operatorout of detaction";
    }
    return 0;
}