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
class dog : public animal
{
};
class germanshapper : public dog
{
};
int main()
{
    germanshapper d;
    d.speek();
    return 0;
}