int getRotation(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int findKRotation(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    if (arr[0] <= arr[mid] && arr[mid] <= arr[n - 1])
    {
        return 0;
    }
    else
    {
        return getRotation(arr, n);
    }
}