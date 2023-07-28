#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("harshit");
    s.push("nikhil");
    s.push("sharma");
    cout << "top element" << s.top() << endl;
    cout << s.size() << endl;
    s.pop();
    cout << "top element" << s.top() << endl;
    cout << s.size() << endl;
    s.pop();
    cout << "top element" << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;

    return 0;
}