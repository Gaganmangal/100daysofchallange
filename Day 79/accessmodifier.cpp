#include <iostream>
using namespace std;
class employee
{
    int id[100], price[100];
    int counter;

public:
    void init_counter(void)
    {
        counter = 0;
    }
    void get_data(void);
    void display_data(void);
};
void employee ::get_data(void)
{
    cout << "name of id and pricr respectivaly";
    cin >> id[counter] >> price[counter];
    counter++;
}
void employee ::display_data(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "id and price" << i + 1 << "item";
        cout << id[i] << "      " << price[i];
    }
}
int main()
{
    employee dukaan;
    cout << "how many iteam you peches in your dukaabn";
    int n;
    cin >> n;

    dukaan.init_counter();
    for (int i = 0; i < n; i++)
    {

        dukaan.get_data();
    }
    dukaan.display_data();
    return 0;
}