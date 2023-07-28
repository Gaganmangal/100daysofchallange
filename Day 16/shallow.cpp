#include <iostream>
#include <string>
using namespace std;
class shallow
{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // contructor
    shallow(int d);
    // copy contructor
    shallow(const shallow &source);
    // destructor
    ~shallow();
};
shallow::shallow(int d)
{
    data = new int;
    *data = d;
}
shallow::shallow(const shallow &source) : data(source.data)
{
    cout << "copy constructor -shallow copy" << endl;
}
shallow::~shallow()
{
    delete data;
    cout << "drstructor freing data" << endl;
}

int main()
{
    shallow obj1{100};
    // obj1.set_data_value(100);
    shallow obj2(obj1);
    obj2.get_data_value();
    obj2.set_data_value(500);
    obj2.get_data_value();
    return 0;
}