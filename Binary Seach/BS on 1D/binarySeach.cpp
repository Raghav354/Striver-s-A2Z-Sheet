int search(vector<int> &nums, int target)
{
    vector<int> arr = nums;
    int s = 0, e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
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