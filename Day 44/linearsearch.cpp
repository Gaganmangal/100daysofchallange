#include <iostream>
using namespace std;
bool find(int arr[], int size, int k)
{
    if (size == 0)
    {
        return 0;
    }
    if (arr[0] == k)
    {
        return 1;
    }
    return find(arr + 1, size - 1, k);
}
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8}, size = 8;
    if (find(arr, size, 7))
    {
        cout << "find yctfdrue468o=-o0-u8t7yguygbtg6r77tpu890tr";
    }
    else
    {
        cout << "not find  kkjvuyguvvvlyuyvliug7tgdcgffx6d5ez";
    }
    return 0;
}