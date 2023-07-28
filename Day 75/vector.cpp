#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5, 1);
    vector<int> last(a);

    cout << "size___>" << v.capacity() << endl;
    cout << "size   >" << v.size() << endl;
    v.push_back(23);
    cout << "size___>" << v.capacity() << endl;
    cout << "size   >" << v.size() << endl;
    v.push_back(29);
    cout << "size___>" << v.capacity() << endl;
    cout << "size   >" << v.size() << endl;
    v.push_back(56);
    cout << "size___>" << v.capacity() << endl;
    cout << "size   >" << v.size() << endl;
    v.push_back(87);
    cout << "size___>" << v.capacity() << endl;
    cout << "size   >" << v.size() << endl;
    v.push_back(45);
    cout << "size___>" << v.capacity() << endl;
    cout << "size   >" << v.size() << endl;

    cout << "front   " << v.front() << endl;
    cout << "last ele" << v.back() << endl;

    v.pop_back();
    cout << "size___>" << v.capacity() << endl;
    cout << "size   >" << v.size() << endl;
    v.clear();
    cout << "size___>" << v.capacity() << endl;
    cout << "size   >" << v.size() << endl;
    for (int i : a)
    {
        cout << " <" << i << endl;
    }
    for (int i : last)
    {
        cout << " <" << i << endl;
    }

    return 0;
}