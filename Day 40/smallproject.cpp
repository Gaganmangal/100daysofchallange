#include <iostream>
using namespace std;
class binary_string
{
    string s;

public:
    void getstring(void)
    {
        cout << "enter binary no";
        cin >> s;
    }
    void checkstring(void);
    void once_complement(void);
    void display(void)
    {
        cout << s;
    }
};
void binary_string ::checkstring(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "string is not binary";
            exit(0);
        }
    }
}
void binary_string ::once_complement(void)
{
    checkstring();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
int main()
{
    binary_string bina;
    bina.getstring();
    bina.checkstring();
    bina.once_complement();
    bina.display();
    return 0;
}