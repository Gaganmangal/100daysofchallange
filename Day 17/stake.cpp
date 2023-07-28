#include <iostream>
#include "Stack.h"

using namespace std;
int main()
{
    stack obj1;
    int choise{0};
    while (choise != 5)
    {
        cout << "1 for push operation" << endl;
        cout << "2 for pop operation" << endl;
        cout << "3 for peek operation" << endl;
        cout << "4 for display all the element in array" << endl;
        cout << "5 for exit" << endl;
        cout << "\nenter your choise:" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            obj1.push();
            break;
        case 2:
            obj1.pop();
            break;
        case 3:
            obj1.peek();
            break;
        case 4:
            cout << "elements = ";
            obj1.dispay();
            break;
        default:
            cout << "invalid choise" << endl;
        }
    }

    return 0;
}