#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(7);
    l.push_front(8);
    for (int i : l)
    {
        cout << i << endl;
    }
    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << endl;
    }
    return 0;
}