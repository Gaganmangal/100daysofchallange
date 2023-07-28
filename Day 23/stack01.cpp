#include <iostream>
#include "C:\Users\Admin\Desktop\c++anddatascience and algorithm with c++\day17\Stack.h"

using namespace std;
int main()
{
    int choise{0};
    stack01 harsh;
    cout << "1 for push in first stack" << endl;
    cout << "2 for pop in first stack" << endl;
    cout << "3 for display first stack" << endl;
    cout << "4 for push in second stack" << endl;
    cout << "5 for pop in second stack" << endl;
    cout << "6 for display second stack" << endl;
    cout << "7 for peekvalue of first stack" << endl;
    cout << "8 for peek value of second stack" << endl;
    cout << "9 for exit" << endl;
    int ele;
    while (choise != 9)
    {
        switch (choise)
        {
        case 1:
            cout << "enter element =" << endl;
            cin >> ele;
            if (harsh.push_stack_a(ele))
            {
                cout << "push operation successfully" << endl;
            }
            else
            {
                cout << "somethong went wrong" << endl;
            }
            break;
        case 2:
            if (harsh.pop_stack_a())
            {
                cout << "push operation successfully" << endl;
            }
            else
            {
                cout << "somethong went wrong" << endl;
            }
            break;
        case 3:
            harsh.display_stack_b();
            break;
        case 4:

            cout << "enter element =" << endl;
            cin >> ele;
            if (harsh.push_stack_b(ele))
            {
                cout << "push operation successfully" << endl;
            }
            else
            {
                cout << "somethong went wrong" << endl;
            }
            break;
        case 5:
            if (harsh.pop_stack_b())
            {
                cout << "pop operation successfully" << endl;
            }
            else
            {
                cout << "somethong went wrong" << endl;
            }
            break;
        case 6:
            harsh.display_stack_b();
            break;
        case 7:
            cout << "peek element" << harsh.peek_a() << endl;
            break;
        case 8:
            cout << "peek element" << harsh.peek_a() << endl;
            break;
        }
    }

    return 0;
}