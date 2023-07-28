#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int k = 1;
    vector<int> error;
    while (k == 1)
    {
        cout << "P is for print number" << endl;
        cout << "A- Add number" << endl;
        cout << "M - display mean of the number" << endl;
        cout << "s-display the smallest number" << endl;
        cout << "l-display the largest numbrer" << endl;
        cout << "q-quit" << endl;
        cout << "\n\n\n"
             << endl;
        cout << "enter your choise:";
        char choise;
        cin >> choise;
        if (choise == 'p' || choise == 'P')
        {
            cout << "[";
            // cout<<"size of vector;"<<error.size();
            for (int i = 0; i < error.size(); i++)
            {
                cout << error.at(i) << ", ";
            }
            cout << "]" << endl;
        }
        else if (choise == 'a' || choise == 'A')
        {
            int j{0};
            cin >> j;
            error.push_back(j);
            cout << "number" << error.at(error.size() - 1) << "added sucessully" << endl;
        }
        else if (choise == 'm' || choise == 'M')

        {
            int sum{0};
            for (int i = 0; i < error.size(); i++)
            {
                sum = sum + error.at(i);
            }
            cout << "the avgrage =" << sum / error.size() << endl;
        }
        else if (choise == 's' || choise == 'S')
        {
            int small_num;
            small_num = error.at(0);
            for (int i = 1; i < error.size(); i++)
            {
                if (small_num > error.at(i))
                {
                    small_num = error.at(i);
                }
            }
            cout << "smallest number" << small_num << endl;
        }
        else if (choise == 'l' || choise == 'L')
        {
            int largst_num;
            largst_num = error.at(0);
            for (int i = 1; i < error.size(); i++)
            {
                if (largst_num < error.at(i))
                {
                    largst_num = error.at(i);
                }
            }
            cout << "largest number" << largst_num << endl;
        }
        else if (choise == 'q' || choise == 'Q')
        {
            cout << "good bye" << endl;
            k = 0;
        }
        else
        {
            cout << "unknown selection" << endl;
        }
    }
    return 0;
}