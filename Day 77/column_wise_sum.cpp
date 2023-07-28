#include <iostream>
using namespace std;
void column_wise_sum(int arr[][4]);
int main()
{
    int arr[3][4];
    cout << "enter element" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            /* code */
            cin >> arr[i][j];
        }

        /* code */
    }
    cout << "your element" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            /* code */
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
    column_wise_sum(arr);
    return 0;
}
void column_wise_sum(int arr[][4])
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            /* code */
            sum = sum + arr[j][i];
        }

        cout << 1 << "  column sum" << sum << endl;
        sum = 0;
    }
}