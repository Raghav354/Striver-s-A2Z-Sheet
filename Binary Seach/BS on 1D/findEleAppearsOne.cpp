int findOnce(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    if (arr[0] != arr[1])
        return arr[0];
    if (arr[n - 1] != arr[n - 2])
        return arr[n - 1];
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
            return arr[mid];
            
        //if mid is odd and a[mid-1] == a[mid] that mean it's a left part .
        //similarly for the right part.
        else if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) ||
                 mid % 2 == 1 && arr[mid] == arr[mid - 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}