#include <iostream>
#include <string>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        std::string bi_st;
        if (n >= 3)
        {
            cout << "pass" << endl;
            bi_st.at(0) = '1';
            int i{0};
            for (i = 1; i < n - 2; i++)
            {
                bi_st.at(i) = '0';
            }
            bi_st.at(i) = '1';
            bi_st.at(i + 1) = '\0';
        }
        cout << bi_st << endl;
    }
    return 0;
}