#include <iostream>
using namespace std;
class array
{
protected:
    int n;
    int arr[1000];

public:
    array()
    {
        cout << "enter the size of array" << endl;
        cin >> n;
    }
    insertelement(int ele);
    bool binary_search(int ele);
    bool linear_search(int ele);
    ~array()
    {
        cout << "array is deleted" << endl;
    }
} int main()
{
    return 0;
}

array::insertelement(int ele)
{
    array[i] = ele;
}