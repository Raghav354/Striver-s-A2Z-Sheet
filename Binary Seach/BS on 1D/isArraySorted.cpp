bool arraySortedOrNot(int arr[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        if (arr[i] > arr[i + 1])
            return false;
        i++;
    }
    return true;
}