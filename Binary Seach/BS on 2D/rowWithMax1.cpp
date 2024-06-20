int firstOcc(vector<int> &arr, int n, int x)
{
    int s = 0, e = n - 1;
    int first = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {
            first = mid;
            e = mid - 1;
        }
        else if (arr[mid] > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return first;
}

int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    int maxCount = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int first = firstOcc(arr[i], m, 1);
        if (first != -1)
        {
            int oneCount = m - first;
            if (oneCount > maxCount)
            {
                maxCount = oneCount;
                index = i;
            }
        }
    }
    return index;
}