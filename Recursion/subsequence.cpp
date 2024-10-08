void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    solve(nums, output, index + 1, ans);
    int n = nums[index];
    output.push_back(n);
    solve(nums, output, index + 1, ans);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    vector<int> output;
    solve(nums, output, index, ans);
    return ans;
}