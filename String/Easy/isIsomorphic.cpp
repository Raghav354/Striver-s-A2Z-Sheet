bool areIsomorphic(string str1, string str2)
{
    map<char, char> m;
    if (str1.size() != str2.size())
        return false;

    for (int i = 0; i < str1.size(); i++)
    {
        if (m.find(str1[i]) != m.end())
        {
            if (str2[i] != m[str1[i]])
                return false;
        }
        else
        {
            for (auto it : m)
            {
                if (it.second == str2[i])
                    return false;
            }
        }
        m[str1[i]] = str2[i];
    }
    return true;
}