int numberOfSubstrings(string s)
{
    int ans = 0;
    int aCount = 0, bCount = 0, cCount = 0;
    int i = 0, j = 0;
    int n = s.size();
    while (j < n)
    {
        if (s[j] == 'a')
            aCount++;
        else if (s[j] == 'b')
            bCount++;
        else
            cCount++;

        while (aCount >= 1 && bCount >= 1 && cCount >= 1)
        {
            // when window hit the valid size than valid substr = 1+remaining Character in the string;
            ans += (n - j);
            if (s[i] == 'a')
                aCount--;
            else if (s[i] == 'b')
                bCount--;
            else
                cCount--;
            i++;
        }
        j++;
    }

    return ans;
}