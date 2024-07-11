bool canJump(vector<int> &nums)
{
    if (nums.size() == 1)
        return true;

    int i = 0, maxJump = 0;
    while (i < nums.size() && i <= maxJump)
    {
        maxJump = max(maxJump, nums[i] + i);
        i++;
    }
    return i == nums.size();
}