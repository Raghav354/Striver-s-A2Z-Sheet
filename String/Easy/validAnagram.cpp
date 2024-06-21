bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    vector<int> map(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        int ind = s[i] - 'a';
        map[ind]++;
    }

    for (int j = 0; j < t.size(); j++)
    {
        int ind = t[j] - 'a';
        map[ind]--;
    }
    if (count(map.begin(), map.end(), 0) == 26)
        return true;
    else
        return false;
}