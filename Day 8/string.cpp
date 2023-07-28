#include <string>

#include <iostream>
using namespace std;
int main()
{
    int i;
    string s1;
    string s2{"Apple"};
    string s3{"banana"};
    string s4("kiwi");
    string s5{"apple"};
    string s6{s1, 0, 3};
    string s7{10, 'x'};

    cout << s1;
    cout << s1.length();

    // initialisation
    cout << "s1 is :  " << s1 << endl;
    cout << "s2 is   " << s2 << endl;
    cout << "s3   " << s3 << endl;
    cout << "s4 is   " << s4 << endl;
    cout << "s5 is    " << s5 << endl;
    cout << "s6 is  " << s6 << endl;
    cout << "string s7 is  " << s7 << endl;

    cout << s1 << "==" << s5 << (s1 == s5) << endl;
    // cout << s1 << "==" << s2 << (s1 == s2)< endl;
    cout << s1 << "!=" << s2 << (s1 != s2) << endl;
    cout << s1 << "<" << s2 << (s1 < s2) << endl;
    cout << s2 << ">" << s1 << (s1 > s2) << endl;
    cout << s3 << "<" << s5 << (s3 < s5) << endl;

    //  //via loop
    // fot(i=0;i<s2.length();i++)
    //     cout<<s2.at(i);

    return 0;
}