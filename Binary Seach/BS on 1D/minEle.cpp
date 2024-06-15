int getMin(int arr[], int n)
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
    return arr[s];
}

int findMin(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    //If array is not rotated than 0th index value is minimum.
    if (arr[s] <= arr[mid] && arr[mid] <= arr[e])
    {
        return arr[0];
    }
    else
    {
        return getMin(arr, n);
    }
}