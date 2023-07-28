#include <iostream>
using namespace std;
// funtion overloading

class a
{
public:
    void sayHellow()
    {
        cout << "hello,i love programing::" << endl;
    }
    void sayHellow(string name)
    {
        cout << "hellow" << name << endl;
    }
    int sayHellow(string name, int n)
    {
        cout << "hellow programmer" << name << endl;
        return n;
    }
};
// operator loading...........................
class b
{
public:
    int a;

    void operator+(b &obj)
    {
        int value = this->a;
        int value1 = obj.a;
        cout << "subtraction" << value - value1 << endl;
    }
    void operator()()
    {
        cout << "hello " << a;
    }
};
// run time polymorphism ---method over riding
//  thise all are abstraction

class animal
{
public:
    void speek()
    {
        cout << "speking " << endl;
    }
};
class dog : public animal
{
public:
    void speek()
    {
        cout << "barking" << endl;
    }
};
int main()
{
    a aa;
    aa.sayHellow();
    aa.sayHellow("harshit");
    int a = aa.sayHellow("harshit", 4);
    b bb, cc;
    bb.a = 4;
    cc.a = 90;
    bb + cc;
    bb();
    dog d;
    d.speek();

    return 0;
}