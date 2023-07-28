#include <iostream>
class Solution
{
public:
    vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vecor<int> s;
        for (int i = 0; i < m; i++)
        {
            s.push_back(nums1.at(i));
        }
        for (int i = 0; i < n; i++)
        {
            s.push_back(nums2.at(n));
        }
        sort(s.begin(), s.end());
        return s;
    }
};
using namespace std;
int main()
{
    return 0;
}