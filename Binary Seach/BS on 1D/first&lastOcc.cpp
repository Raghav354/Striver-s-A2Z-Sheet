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
vector<int> find(int arr[], int n, int x)
{
    int first = -1, last = -1;
    first = firstOcc(arr, n, x);
    last = lastOcc(arr, n, x);
    vector<int> v;
    v.push_back(first);
    v.push_back(last);
    return v;
}