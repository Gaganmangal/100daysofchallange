#include <iostream>
#include <string>

using namespace std;

int main()
{
    string key{"mnbvcxzlkjhgfdsapoiuytrewqMNBVCXZLKJHGFDSAPOIUYTREWQ"};
    string value{"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklxcvbnm"};
    string s1;
    cout << "enter your string";
    getline(cin, s1);
    char s;
    int i;
    string encoded{" "};
    for (auto s : s1)
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
            encoded = key.at(i) + encoded;
        }
        else
        {
            encoded = s + encoded;
        }
    }
    cout << "encoding message ......." << endl;
    cout << encoded << endl;

    string decoded{" "};
    for (auto s : s1)
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
            decoded = value.at(i) + decoded;
        }
        else
        {
            decoded = s + decoded;
        }
    }
    cout << "decoding message ......." << endl;
    for (i = decoded.length() - 1; i >= 0; i--)
    {
        cout << decoded.at(i);
    }
    return 0;
}