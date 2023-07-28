#include <iostream>
using namespace std;
void pattern(int n)
{
    if (n == 1)
    {
        cout << 1;
        return;
    }
    for (int i = n * n; i > 1; i--)
    {
        for (int j = n * n; j > 1; j--)
        {
            if (j == n * n)
            {
                cout << n;
            }
            if (i == n * n || i == 2)
            {
                cout << n;
                continue;
            }
            pattern(n - 1);
            if (j == 2)
            {
                cout << n;
            }
            cout << endl;
        }
    }
}
int main()
{
    int n;
    cout << "enter your element";
    cin >> n;
    pattern(n);
    // for (int i = n*n; i < 1; i--)
    // {
    //     // for (int j = n*n; j < 1; j--){
    //     //     if(i==2||i==n*n||j==2||j==n*n){
    //     //          cout<<n;
    //     // }
    // }
    return 0;
}