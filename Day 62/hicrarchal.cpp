#include <iostream>
using namespace std;
class a
{
public:
    void funct1()
    {
        cout << "function a/1" << endl;
    }
};
class b : public a
{
public:
    void funct2()
    {
        cout << "function 2 is calling b" << endl;
    }
};
class c : public a
{
public:
    void funct3() { cout << "function 3" << endl; }
};
int main()
{
    a aa;
    aa.funct1();
    b bb;
    bb.funct1();
    bb.funct2();

    c cc;
    cc.funct1();
    cc.funct3();

    return 0;
}