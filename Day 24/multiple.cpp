#include <iostream>
using namespace std;
class animal
{
public:
    int age;
    int weight;

public:
    void speek()
    {
        cout << "speeking" << endl;
    }
};
class dog
{
public:
    void bark()
    {
        cout << "barking....." << endl;
    }
};
class germanshapper : public dog, public animal
{
};
int main()
{
    germanshapper d;
    d.speek();
    d.bark();
    return 0;
}