bool issafe(int x, int y, vector<vector<int>> pathcover, vector<vector<int>> m, int n)
{
    if ((x >= 0 && x < n) && (y == 0 && y < n) && (pathcover[x][y] == 0) && (m[x][y] = 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve(vector<string> &ans, string path, vector<vector<int>> &pathcover, int x, int y, vector<vector<int>> m, int n)
{

    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }
    pathcover[x][y] = 1;
    // for down condition
    int newx = x + 1;
    int newy = y;
    if (issafe(x, y, pathcover, m, n))
    {
        path.push_back('D');
        solve(ans, path, pathcover, newx, newy, m, n);
        path.pop_back();
    }

    // for left
    newx = x;
    newy = y - 1;
    if (issafe(x, y, pathcover, m, n))
    {
        path.push_back('L');
        solve(ans, path, pathcover, newx, newy, m, n);
        path.pop_back();
    }
    // for right
    newx = x;
    newy = y + 1;
    if (issafe(x, y, pathcover, m, n))
    {
        path.push_back('R');
        solve(ans, path, pathcover, newx, newy, m, n);
        path.pop_back();
    }
    // for up
    newx = x - 1;
    newy = y;
    if (issafe(x, y, pathcover, m, n))
    {
        path.push_back('U');
        solve(ans, path, pathcover, newx, newy, m, n);
        path.pop_back();
    }

    pathcover[x][y] = 0;
}
class Solution
{
public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<string> ans;
        int x = 0, y = 0;
        if (m[x][y] == 0)
        {
            return ans;
        }
        vector<vector<int>> pathcover = m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                pathcover[i][j] = 0;
        }
        string path = "";

        solve(ans, path, pathcover, x, y, m, n);
        return ans;
    }
};