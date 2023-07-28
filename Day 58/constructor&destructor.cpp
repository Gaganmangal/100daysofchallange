#include <iostream>
using namespace std;
class player
{
private:
    int age;
    int game;
    std::string name;

public:
    player();
    player(std::string nm);
    player(std::string nm, int a);
    player(std ::string nm, int a, int g);
    getname(player &source)
    {
        source.name;
        cout << "name of player =" << endl;
        cout <<
    }
    ~player()
    {
        cout << "data deleted sucessfully" << endl;
    }
};
player::player()
{
    cout << "no external data enter all variable have garbage value now" << endl;
}
player::player(std ::string nm) : name{nm}
{
}
player ::player(std ::string nm, int a, int g) : name{nm}, age{a}, game{g}
{
}
player::player(std ::string nm, int a) : name{nm}, age{a}
{
}

int main()
{
    player varat;
    player dhoni{"dhoni"};
    player rahul{"rahul dravidh", 28, 40};
    player galot{"ashok gelot", 67};

    return 0;
}