#include <iostream>
#include <algorithm>
using namespace std;
void ster_rev(string &str, int i, int j)
{
    if (i >= j)
    {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    ster_rev(str, i, j);
}
int main()
{
    string str = "harshit sharma";
    ster_rev(str, 0, str.length() - 1);
    cout << str;
    return 0;
}