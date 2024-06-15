bool Search(int n, vector<int> &arr, int k)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
            return true;
        if (arr[s] == arr[mid] && arr[mid] == arr[e])
        {
            s++;
            e--;
        }
        else if (arr[s] <= arr[mid])
        {
            if (arr[s] <= k && k < arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < k && k <= arr[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return false;
}