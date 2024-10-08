int binarySearch(vector<int> &nums, int s, int e, int target)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int getPivot(vector<int> &nums)
{
    int s = 0, e = nums.size() - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] >= nums[0])
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
int search(vector<int> &nums, int target)
{
    int pivot = getPivot(nums);
    int n = nums.size();
    if (target >= nums[pivot] && target <= nums[n - 1])
    {
        return binarySearch(nums, pivot, n - 1, target);
    }
    else
    {
        return binarySearch(nums, 0, pivot - 1, target);
    }
}