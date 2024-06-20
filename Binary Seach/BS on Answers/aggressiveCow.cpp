bool check(vector<int> &position, int m, int mid)
{
    int mCount = 1, currPos = position[0];
    for (int i = 1; i < position.size(); i++)
    {
        if (position[i] - currPos >= mid)
        {
            mCount++;
            currPos = position[i];
            if (m == mCount)
                return true;
        }
    }
    return m == mCount;
}
int maxDistance(vector<int> &position, int m)
{
    sort(position.begin(), position.end());
    int s = 0, e = 1e9 - 1;
    int ans = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (check(position, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}