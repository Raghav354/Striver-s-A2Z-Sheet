int findFloor(vector<long long> v, long long n, long long x)
{

    long long int start = 0, end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        if (v[mid] == x)
        {
            return mid;
        }
        else if (v[mid] < x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}