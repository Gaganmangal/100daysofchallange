#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int largestRectangleArea(vector<int> &heights)
{
    stack<int> st;
    int maxArea = 0;
    int i = 0;
    int n = heights.size();

    while (i < n)
    {
        if (st.empty() || heights[i] >= heights[st.top()])
        {
            st.push(i);
            i++;
        }
        else
        {
            int tp = st.top();
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, heights[tp] * width);
        }
    }

    while (!st.empty())
    {
        int tp = st.top();
        st.pop();
        int width = st.empty() ? i : i - st.top() - 1;
        maxArea = max(maxArea, heights[tp] * width);
    }

    return maxArea;
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    int result = largestRectangleArea(heights);
    cout << "Largest rectangle area in the histogram: " << result << endl;
    return 0;
}
