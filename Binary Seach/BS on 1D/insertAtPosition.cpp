int searchInsertK(vector<int> arr, int n, int k)
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (k > arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans + 1;
}