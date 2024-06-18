int countStudent(int arr[], int n, long long int pages)
{
    long long int st = 1, pageCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageCount + arr[i] <= pages)
        {
            pageCount += arr[i];
        }
        else
        {
            st++;
            pageCount = arr[i];
        }
    }
    return st;
}

long long findPages(int n, int arr[], int m)
{
    if (m > n)
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
        int st = countStudent(arr, n, mid);
        if (st <= m)
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