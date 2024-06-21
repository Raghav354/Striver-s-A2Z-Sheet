string largestOddNumber(string s)
{
    int pos = -1;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch % 2)
        {
            pos = i;
        }
    }
    return s.substr(0, pos + 1);
}

