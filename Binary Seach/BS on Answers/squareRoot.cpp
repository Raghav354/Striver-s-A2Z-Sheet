long long int floorSqrt(long long int x)
{
    long long int ans = INT_MIN;
    int s = 0, e = x;
    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;
        long long int sq = mid * mid;
        if (sq == x)
        {
            return mid;
        }
        else if (sq < x)
        {
            ans = max(ans, mid);
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}