pair<int, int> getFloorAndCeil(int arr[], int n, int x)
{
    int s = 0, e = n - 1;
    int fl = -1, ce = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            fl = x;
            ce = x;
            break;
        }
        else if (arr[i] > x && (ce == -1 || ce > arr[i]))
        {
            ce = arr[i];
        }
        else if (arr[i] < x && (fl == -1 || arr[i] > fl))
        {
            fl = arr[i];
        }
    }
    return {fl, ce};
}