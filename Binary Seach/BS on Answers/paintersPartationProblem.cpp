int count(vector<int> &arr, int n, int area)
{
    int st = 1, painted = 0;
    for (int i = 0; i < n; i++)
    {
        if (painted + arr[i] <= area)
        {
            painted += arr[i];
        }
        else
        {
            st++;
            painted = arr[i];
        }
    }
    return st;
}

int findLargestMinDistance(vector<int> &arr, int k)
{
    int n = arr.size();
    if (k > n)
        return -1;
    long long int maxi = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
        sum += arr[i];
    }
    long long ans = -1;
    long long int s = maxi, e = sum;
    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;
        int st = count(arr, n, mid);
        if (st <= k)
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