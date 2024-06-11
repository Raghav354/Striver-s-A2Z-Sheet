int solveMem(vector<int> &height, int ind, vector<int> &dp)
{
    if (ind == 0)
        return 0;
    if (dp[ind] != -1)
    {
        return dp[ind];
    }

    int left = solveMem(height, ind - 1, dp) + abs(height[ind] - height[ind - 1]);
    int right = INT_MAX;
    if (ind > 1)
        right = solveMem(height, ind - 2, dp) + abs(height[ind] - height[ind - 2]);

    return dp[ind] = min(left, right);
}
int minimumEnergy(vector<int> &height, int n)
{
    vector<int> dp(n + 1, -1);
    return solveMem(height, n - 1, dp);
}