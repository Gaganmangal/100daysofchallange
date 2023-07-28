#include <iostream>

using namespace std;
int power(int c, int d)
{
    if (d == 0)
    {
        return 1;
    }
    if (d == 1)
    {
        return c;
    }
    int ans = power(c, d / 2);
    if (d & 1)
    {
        return c * ans * ans;
    }
    return ans * ans;
}
int main()
{
    int i = 8, j = 4;
    cout << power(i, j);
    return 0;
}
