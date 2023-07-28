#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> a;
    a.push("harshit");
    a.push("nikhil");
    a.push("sharma");
    cout << "first ele" << a.front() << endl;
    a.pop();
    cout << "first ele" << a.front() << endl;
    a.pop();
    cout << "first ele" << a.front() << endl;

    return 0;
}