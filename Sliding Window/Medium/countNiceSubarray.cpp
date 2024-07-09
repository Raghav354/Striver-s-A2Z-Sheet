int numberOfSubarrays(vector<int> &nums, int k)
{
    int ans = 0, odd = 0;
    int i = 0, j = 0;
    int n = nums.size();
    while (j < n)
    {
        if (nums[j] % 2)
            odd++;

        while (i < j && odd > k)
        {
            if (nums[i] % 2)
                odd--;
            i++;
        }
        if (odd == k)
        {
            ans++;
            int tempInd = i;
            while (tempInd <= j)
            {
                if (nums[tempInd] % 2)
                {
                    break;
                }
                ans++;
                tempInd++;
            }
        }

        j++;
    }
    return ans;
}