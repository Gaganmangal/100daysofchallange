#include <iostream>
using namespace std;
bool bfind(int arr[], int s, int e, int k)
{
    if (s > e)
    {
        return 0;
    }
    int mid = s + e - s / 2;
    if (arr[mid] == k)
    {
        return 1;
    }
    else if (arr[mid] > k)
    {
        return bfind(arr, s, mid - 1, k);
    }
    return bfind(arr, mid + 1, e, k);
}
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8}, size = 8;
    if (bfind(arr, 0, size, 9))
    {
        cout << "is found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}