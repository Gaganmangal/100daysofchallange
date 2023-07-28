
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "enter the number of element";
    cin >> n;
    int arr[n];
    // INPUT
    for (int i = 0; i < n; i++)
    {
        cout << "enter the" << i + 1 << "element";
        cin >> arr[i];
    }
    // procrssing  :  summ of arry
    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + sum;
    }
    // output
    for (int i = 0; i < n; i++)
    {
        cout << "enter the" << i + 1 << "element" << endl;
        cout << arr[i];
    }
    cout << "the sum of element" << sum;
    return 0;
}