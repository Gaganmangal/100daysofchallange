#include <iostream>
using namespace std;
void row_wise_sum(int arr[][4]);
void largest_sum(int arr[][4]);
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
    row_wise_sum(arr);
    largest_sum(arr);
    return 0;
}
void row_wise_sum(int arr[][4])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            /* code */
            sum = sum + arr[i][j];
        }

        cout << i << "  row sum" << sum << endl;
        sum = 0;
    }
}
void largest_sum(int arr[][4])
{
    int sum = 0, max = INT_MIN, index = 0;
    for (int i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            /* code */
            sum = sum + arr[i][j];
        }

        // cout<<1<<"  row sum"<<sum<<endl;
        if (max < sum)
        {
            max = sum;
            index = i;
        }
        sum = 0;
    }
    cout << "maximun sum is" << max << "at index" << index + 1;
}