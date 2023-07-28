#if !defined(_HERITANCE_H_)
#define _HERITANCE_H_
class account
{
private:
    int acount_id;

protected:
    std::string name{""};

public:
    int balance = 0;
    // account(std::string nm {""},int acid=0);

    // ~account(){
    // }
    int find_account_id(int demo_id)
    {
        return acount_id;
    }
    void deposit(int bal)
    {
        balance = balance + bal;
        std::cout << "balance added" << bal << std::endl;
        std::cout << "total balance=" << balance << std::endl;
    }
    void withdrow(int bal)
    {
        balance = balance - bal;
        std::cout << "balance dedacted" << bal << std::endl;
        std::cout << "total balance" << balance << std::endl;
    }
};

class saving_acount : public account
{
protected:
    float interest_rate = 0.025;

public:
    void saving_deposite(int);
    void saving_withdrow(int);
    void show_balence(int t = 1);
};
// account::account(std::string nm {""},int acid=0){
//             name=nm;
//             acount_id=acid;
//         }

#endif