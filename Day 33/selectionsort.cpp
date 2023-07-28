#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
bool selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            swap(arr, i, min);
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
    if (selection_sort(arr, 6))
    {
        show(arr, 6);
    }
    else
    {
        cout << "error" << endl;
    }
    return 0;
}