int firstOcc(int arr[], int n, int x)
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
int lastOcc(int arr[], int n, int x)
{
    int s = 0, e = n - 1;
    int last = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {
            last = mid;
            s = mid + 1;
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
    return last;
}

int count(int arr[], int n, int x)
{
    int first = firstOcc(arr, n, x);
    int last = lastOcc(arr, n, x);
    if (first != -1)
        return last - first + 1;
    else
        return 0;
}