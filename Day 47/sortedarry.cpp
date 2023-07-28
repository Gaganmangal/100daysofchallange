#include <iostream>
using namespace std;
bool issorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return 0;
    }
    else
    {
        return issorted(arr + 1, size - 1);
    }
}
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8}, size = 8;
    if (issorted(arr, size))
    {
        cout << "is sorted";
    }
    else
    {
        cout << "not sorted";
    }
    return 0;
}