#include <iostream>
using namespace std;
bool check(string str, int i, int j)
{
    // if true
    if (i > j)
    {
        return 1;
    }
    if (str[i] == str[j])
    {
        i++;
        j--;
        return check(str, i, j);
    }
    return 0;
}
int main()
{
    string tr = "asdfgg
        iuhgjiwerbgjjdsa ";
        if (check(tr, 0, tr.length() - 1))
    {
        cout << "is pallindrome";
    }
    else
    {
        cout << "not pallinedrome";
    }
    return 0;
}