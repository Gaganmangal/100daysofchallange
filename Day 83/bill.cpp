#include <iostream>
using namespace std;
int main()
{
    const float rate_per_smallroom{25};
    const float ratepre_lareroom{35};
    const float tax{6};
    const int no_of_days_validity{30};
    int small_room, large_room;
    cout << "how many small rooms you want to clean?";
    cin >> small_room;
    cout << "how mwny large room you wnt to clean?";
    cin >> large_room;
    cout << "cost for small rom clean $" << rate_per_smallroom << endl;
    cout << "cost of slarge room clean $" << ratepre_lareroom << endl;
    cout << "cost for rooms" << (small_room * rate_per_smallroom) + (large_room * ratepre_lareroom) << endl;
    cout << "tax" << (tax * (((small_room * rate_per_smallroom) + (large_room * ratepre_lareroom)) / 100)) << endl;
    cout << "\n =========================================================================\n";
    cout << "taoal cost estimated $" << (tax * (((small_room * rate_per_smallroom) + (large_room * ratepre_lareroom)) / 100)) + (small_room * rate_per_smallroom) + (large_room * ratepre_lareroom) << endl;
    cout << "this is estimater till" << no_of_days_validity << endl;
    return 0;
}