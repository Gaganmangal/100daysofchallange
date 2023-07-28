#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // max heap;
    priority_queue<int> p;
    // min heap
    p.push(3);
    p.push(9);
    p.push(4);
    p.push(0);
    int n = p.size();
    for (int i = 0; i < n; i++)
    {
        cout << p.top() << "  ";
        p.pop();
    }
    return 0;
}