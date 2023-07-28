#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "harshit";
    m[12] = "sharma";
    m[9] = "lavish";
    m[11] = "nikhil";
    for (auto i : m)
    {
        cout << i.first << "  " << i.second << endl;
    }
    m.erase(12);
    for (auto i : m)
    {
        cout << i.first << "  " << i.second << endl;
    }
    cout << m.count(11) << endl;
    auto it = m.find(1);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << "  " << (*i).second << endl;
    }
    return 0;
}