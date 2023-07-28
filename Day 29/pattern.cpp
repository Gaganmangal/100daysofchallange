#include <iostream>
using namespace std;
int main()
{
    int i, j, num, star;
    cout << "enter the no of rows" << endl;
    cin >> num;
    i = 1;

    while (i <= num)
    {
        j = 1;
        while (j <= (num - (i - 1)))
        {
            cout << j;
            j++;
        }
        j = (i - 1) * 2;
        while (j)
        {
            cout << "*";
            j--;
        }
        j = (num - (i - 1));
        while (j > 0)
        {
            cout << j;
            j--;
        }
        i++;
        cout << endl;
    }
    return 0;
}