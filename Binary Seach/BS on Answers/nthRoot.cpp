int check(int mid, int n, int m)
{
    long long int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if (ans > m)
        {
            return 2;
        }
    }
    if (ans == m)
        return 1;
    else
        return 0;
}
int NthRoot(int n, int m)
{
    int s = 1, e = m;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int chk = check(mid, n, m);
        if (chk == 1)
        {
            return mid;
        }
        else if (chk == 0)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}