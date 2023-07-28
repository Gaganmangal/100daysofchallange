#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(0);
    s.insert(4);
    s.insert(5);
    for (int u : s)
    {
        cout << u << " ";
    }
    s.erase(s.begin());
    for (int u : s)
    {
        cout << u << " ";
    }
    cout << "count<<<" << s.count(4);
    set<int>::iterator itr = s.find(4);
    cout << "iterator" << *itr << endl;
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}