#include <iostream>
using namespace std;
class scrtmsg
{
private:
    string str;
    string key{"mnbvcxzlkjhgfdsapoiuytrewqMNBVCXZLKJHGFDSAPOIUYTREWQ"};
    string value{"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklxcvbnm"};

public:
    void getinput();
    void encoding();
    void decoding();
};
void scrtmsg ::getinput()
{
    cout << "enter the massage    :-  :" << endl;
    getline(cin, str);
}
void scrtmsg ::encoding()
{
    char s;
    int i;
    string encoded{""};
    for (auto s : str)
    {
        if (isalpha(s))
        {
            for (i = 0; i < value.length(); i++)
            {
                if (s == value.at(i))
                {
                    break;
                }
            }
            encoded = encoded + key.at(i);
        }
        else
        {
            encoded = encoded + s;
        }
    }
    cout << "encoding message ......." << endl;
    cout << encoded << endl;
}

void scrtmsg ::decoding()
{
    string decoded{""};
    char s;
    int i;
    for (auto s : str)
    {
        if (isalpha(s))
        {
            for (i = 0; i < key.length(); i++)
            {
                if (s == value.at(i))
                {
                    break;
                }
            }
            decoded = decoded + value.at(i);
        }
        else
        {
            decoded = decoded + s;
        }
    }
    cout << "decoding message ......." << endl;
    cout << decoded;
}

int main()
{
    scrtmsg stmsg;
    stmsg.getinput();
    stmsg.encoding();
    stmsg.decoding();
    return 0;
}