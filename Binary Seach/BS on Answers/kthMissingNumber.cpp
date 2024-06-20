int findKthPositive(vector<int> &arr, int k)
{
    int n = arr.size();
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int missingNum = arr[mid] - (mid + 1);
        if (missingNum >= k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return e + k + 1;
}