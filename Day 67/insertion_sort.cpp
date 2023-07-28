#include <iostream>
using namespace std;

bool insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int val = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = val;
    }
    return 1;
}
void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[6] = {354, 235, 56, 234, 234, 254};
    if (insertion_sort(arr, 6))
    {
        show(arr, 6);
    }
    else
    {
        cout << "error" << endl;
    }
    return 0;
}