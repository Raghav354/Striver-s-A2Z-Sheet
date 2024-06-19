bool check(vector<int> &bloomDay, int m, int k, int day)
{
    int mCount = 0, c = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] <= day)
        {
            c++;
            if (k == c)
            {
                mCount++;
                c = 0;
                if (mCount == m)
                    return true;
            }
        }
        else
        {
            c = 0;
        }
    }
    return m == mCount;
}
int minDays(vector<int> &bloomDay, int m, int k)
{
    int n = bloomDay.size();
    int ans = -1;
    int mini = bloomDay[0], maxi = bloomDay[0];
    for (int i = 1; i < n; i++)
    {
        mini = min(mini, bloomDay[i]);
        maxi = max(maxi, bloomDay[i]);
    }
    int s = mini, e = maxi;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (check(bloomDay, m, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}