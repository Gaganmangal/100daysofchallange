#include <iostream>
using namespace std;
void marge(int *aa, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    int mnindex = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = aa[mnindex++];
    }
    mnindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = aa[mnindex++];
    }
    // marging two sorted array
    int index1 = 0, index2 = 0;
    mnindex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {
            aa[mnindex++] = arr1[index1++];
        }
        else
        {
            aa[mnindex++] = arr2[index2++];
        }
    }

    while (index1 < len1)
    {
        aa[mnindex++] = arr1[index1++];
    }
    while (index1 < len1)
    {
        aa[mnindex++] = arr1[index2++];
    }
}
void marge_sorted_Array(int *arr1, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // left part sort
    marge_sorted_Array(arr1, s, mid);
    // right part
    marge_sorted_Array(arr1, mid + 1, e);
    marge(arr1, s, e);
}
int main()
{
    int arr[10] = {2, 7, 3, 7, 4, 8, 4, 3, 5, 9};
    marge_sorted_Array(arr, 0, 10);
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    return 0;
}