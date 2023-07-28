#include <iostream>
using namespace std;
int main()
{
    int i = 9;
    int *ptr = &i;
    int **ptr1 = &ptr;

    cout << i << endl;
    cout << "adress of i" << ptr << endl;
    cout << "value at i" << *ptr << endl;
    cout << "adress of ptr" << **ptr1;
    cout << "value of i using double ptr" << *ptr1;
    return 0;
}