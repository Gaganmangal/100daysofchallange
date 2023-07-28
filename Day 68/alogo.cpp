#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(14);
    v.push_back(15);
    v.push_back(17);
    v.push_back(19);
    cout << "binary search" << binary_search(v.begin(), v.end(), 15) << endl;
    cout << "lower bound" << lower_bound(v.begin(), v.end(), 15) - v.begin() << endl;
    cout << "upper bound" << upper_bound(v.begin(), v.end(), 15) - v.begin() << endl;

    int a = 3, b = 4;
    cout << "min" << min(a, b) << endl;
    cout << "max" << max(a, b) << endl;
    swap(a, b);
    cout << "swap" << a << b << endl;
    string s{"divyaanshu"};
    reverse(s.begin(), s.end());
    cout << s << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after roteting" << endl;
    for (auto i : v)
    {
        cout << i << endl;
    }
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << endl;
    }
    return 0;
}