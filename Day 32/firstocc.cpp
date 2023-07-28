#include <iostream>
#include <vector>

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> dublicate;
    int low, mid, high, ans = -1;
    low = 0;
    if (nums.empty())
    {
        high = -1;
    }
    else
        high = nums.size();

    mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (nums.at(mid) == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (target > nums.at(mid))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
    dublicate.push_back(ans);
    low = 0;
    if (nums.empty())
    {
        high = -1;
    }
    else
        high = nums.size();
    while (low <= high)
    {

        if (nums.at(mid) == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (target > nums.at(mid))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
    dublicate.push_back(ans);

    return dublicate;
}
int main()
{
    vector<int> sol;
    vector<int> input{1, 2, 3, 3, 4, 5, 5};
    int target{3};
    sol = searchRange(input, target);
    std::cout << sol;
}