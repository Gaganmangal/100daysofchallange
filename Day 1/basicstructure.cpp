// data type and type modifiers
#include <iostream>
using namespace std;
int main()
{
    // average     INTEGER
    int a, b; // integer datatype i occupide 4 bYtes range (unsign 0 to 2^23-1  range -2^31 to 2^31-1)
    a = 3;
    b = 4;
    cout << (a + b) / 2;
    cout << "size of interger" << sizeof(a) << endl;
    // FLOAT
    //  SIZE =4 BYTE
    float c;
    c = a / 2;
    cout << "float value" << c << endl;
    cout << "size of float value " << sizeof(c) << endl;

    char d = 'h';
    cout << "character" << d << endl;
    cout << "size of character" << sizeof(d) << endl;
    bool e;
    cout << "size of boolen" << sizeof(e) << endl;
    return 0;
}