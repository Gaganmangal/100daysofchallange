#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_front(8);

    for (int i : d)
    {
        cout << i << endl;
    }
    d.erase(d.begin(), d.begin() + 1);
    for (int i : d)
    {
        cout << i << endl;
    }
    return 0;
}