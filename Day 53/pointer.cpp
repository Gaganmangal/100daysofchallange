#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    // refrencing
    int *b = &a;
    cout << "adress of a" << b << endl;
    cout << "value of a" << *b << endl; // de refresing
    // pointer to pointer
    int **c = &b;
    cout << "adress of b is" << c << endl;
    cout << "value of adress c is " << *c << endl;
    cout << "value of adress c (of adress c) is " << **c << endl;
    return 0;
}