static bool cmp(pair<char, int> &a, pair<char, int> &b)
{
    if (a.second > b.second)
        return true;

    return false;
}
string frequencySort(string s)
{
    string ans;
    vector<pair<char, int>> v;
    unordered_map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    for (auto it : m)
    {
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
    {
        while (it.second--)
            ans.push_back(it.first);
    }
    return ans;
}