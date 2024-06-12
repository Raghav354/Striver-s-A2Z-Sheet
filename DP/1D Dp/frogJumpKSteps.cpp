int solve(int ind, vector<int> &height, int k, vector<int> &dp)
{
    if (ind == 0)
    {
        return 0;
    }
    if (dp[ind] != -1)
        return dp[ind];
    int minSteps = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
        if (ind - j >= 0)
        {
            int step = solve(ind - j, height, k, dp) + abs(height[ind] - height[ind - j]);
            minSteps = min(step, minSteps);
        }
        else
        {
            break;
        }
    }
    return dp[ind] = minSteps;
}
int minimizeCost(vector<int> &height, int n, int k)
{
    vector<int> dp(n, -1);
    return solve(n - 1, height, k, dp);
}