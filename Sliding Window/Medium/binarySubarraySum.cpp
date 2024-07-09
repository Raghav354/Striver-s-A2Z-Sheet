int numSubarraysWithSum(vector<int> &nums, int k)
{
    int i = 0, j = 0;
    int ans = 0, sum = 0;
    while (j < nums.size())
    {
        sum += nums[j];
        while (i < j && sum > k)
        {
            sum -= nums[i];
            i++;
        }
        if (sum == k)
        {
            ans++;
            int it = i;
            while (it < j && nums[it] == 0)
            {
                ans++;
                it++;
            }
        }
        j++;
    }
    return ans;
}