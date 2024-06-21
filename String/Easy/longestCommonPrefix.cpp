string longestCommonPrefix(vector<string> &strs)
{
    int n = strs[0].size();
    string ans = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
        while (strs[i].find(ans))
        {
            ans = ans.substr(0, n - 1);
            n--;
            if (ans.empty())
                return "";
        }
    }
    return ans;
}