#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the user persentage";
    cin >> a;
    cout << "\nThe greade is :";
    if (a > 90)
    {
        cout << "A";
    }
    else if (a > 75)
    {
        cout << "B";
    }
    else if (a > 65)
    {
        cout << "c";
    }
    else if (a > 50)
    {
        cout << 'D';
    }
    else if (a > 33)
    {
        cout << "E";
    }
    else
    {
        cout << "F";
    }
    return 0;
}