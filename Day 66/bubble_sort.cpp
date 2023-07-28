#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
bool bubble_sort(int arr[], int n)
{
    bool swap1 = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j, (j + 1));
                swap1 = true;
            }
        }
        if (swap1)
        {
            break;
        }
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
    if (bubble_sort(arr, 6))
    {
        show(arr, 6);
    }
    else
    {
        cout << "error" << endl;
    }
    return 0;
}