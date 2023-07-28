#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    {
        int temp = v[s];
        v[s] = v[e];
        v[e] = temp;
        s++;
        e--;
    }
    return v;
}
vector<int> sum_of_array(vector<int> &arr3, int n, vector<int> &arr4, int m)
{
    int i = n - 1, j = m - 1;
    int carry = 0, sum = 0;
    vector<int> ans;
    while (j >= 0 && i >= 0)
    {
        sum = arr3.at(i) + arr4.at(j) + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        sum = arr3.at(i) + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        sum = arr3.at(j) + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    if (carry > 0)
    {
        ans.push_back(carry);
    }
    return reverse(ans);
}
int main()
{
    vector<int> arr1(10), arr2(10), ans(11);
    int n, m;
    cout << "enter the no of first array" << endl;
    cin >> n;
    cout << "enter the element in first array" << endl;
    for (int k = 0; k < n; k++)
    {
        cin >> arr1.at(k);
    }
    cout << "enter the element in second array" << endl;
    cout << "enter the no of second array" << endl;
    cin >> m;
    for (int k = 0; k < n; k++)
    {
        cin >> arr2.at(k);
    }

    // sum of array
    ans = sum_of_array(arr1, n, arr2, m);
    for (int k = 0; k < ans.size(); k++)
    {
        cout << ans.at(k);
    }
    return 0;
}