// accessing class members
#include <iostream>
#include <string>

using namespace std;
class player
{
public:
    // attributes or variables
    std::string name;
    int health;
    int xp;

    // methods or functions
    void talk(string text_to_say) { cout << name << "says" << text_to_say << endl; }
    bool is_dead();
};

class account
{
public:
    // attributes
    std ::string name;
    double balance;

    // methods
    void deposit(double bal)
    {
        balance += bal;
        cout << "in deposit" << endl;
    };
    void withdraw(double bal)
    {
        balance -= bal;
        cout << "in withdraw" << endl;
    };
};
int main()
{
    account frank_account;
    frank_account.name = "frank's account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    player frank;
    frank.name = "frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("hi there");

    player *enemy = new player;
    (*enemy).name = "enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("i will deatry you");
}