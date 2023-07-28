#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    void get_data()
    {
        cout << "the value of a is" << a << endl;
        cout << "the value of a is" << b << endl;
        cout << "the value of a is" << c << endl;
        cout << "the value of a is" << d << endl;
        cout << "the value of a is" << e << endl;
    }
};

// employee::employee(/* args */)
// {
// }

// employee::~employee()
// {
// }

int main()
{
    employee kelash;
    kelash.setdata(1, 2, 4);
    kelash.e = 34;
    kelash.d = 45;
    kelash.get_data();
    return 0;
}