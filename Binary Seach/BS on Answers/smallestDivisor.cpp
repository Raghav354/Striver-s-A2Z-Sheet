int smallestDivisor(vector<int> &nums, int threshold)
{
    int maxi = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        maxi = max(maxi, nums[i]);
    }
    int s = 1, e = maxi;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += ceil(double(nums[i] / double(mid)));
        }
        if (sum > threshold)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return s;
}