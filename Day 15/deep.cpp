#include <iostream>

using namespace std;

class deep
{
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    deep(int d);
    deep(const deep &source);
    ~deep();
};
deep::deep(int d)
{
    data = new int;
    *data = d;
}

deep::deep(const deep &source) :deep(*))
int main()
{
    deep obj1{100};
    // obj1.set_data_value(100);
    deep obj2(obj1);
    obj2.get_data_value();
    obj2.set_data_value(500);
    obj2.get_data_value();
    return 0;
}