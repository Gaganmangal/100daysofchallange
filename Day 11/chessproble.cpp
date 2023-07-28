#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int i = 0;
        while (i < n)
        {
            sum = sum + (n - i) * (n - i);
            i = i + 2;
        }
        cout << sum << endl;
    }
    return 0;
}