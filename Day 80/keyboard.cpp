class Solution
{
private:
    void solve(string digit, string output, int index, vector<string> ans, string mapping)
    {
        if (index >= digit.size())
        {
            ans.push_back(output);
            return;
        }
        int num = digit.at(index) - '0';
        string value = mapping[num];

        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            solve(digit, outout, index + 1, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        int index = 0;
        string output;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve_digit(digit, output, index, ans, mapping);
        return ans;
    }
};
class Solution
{
private:
    void solve(string digit, string output, int index, vector<string> ans, string mapping)
    {
        if (index >= digit.size())
        {
            ans.push_back(output);
            return;
        }
        int num = digit.at(index) - '0';
        string value = mapping[num];

        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            solve(digit, outout, index + 1, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        int index = 0;
        string output;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve_digit(digit, output, index, ans, mapping);
        return ans;
    }
};