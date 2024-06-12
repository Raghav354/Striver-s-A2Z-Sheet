int solve(int ind, int *arr, vector<int> &dp)
{
    if (ind < 0)
        return 0;
    if (ind == 0)
    {
        return arr[0];
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int left = arr[ind] + solve(ind - 2, arr, dp);
    int right = solve(ind - 1, arr, dp);

    return dp[ind] = max(left, right);
}
int findMaxSum(int *arr, int n)
{
    vector<int> dp(n, -1);
    return solve(n - 1, arr, dp);
}

// Tabulation
int FindMaxSum(int arr[], int n)
{
    vector<int> dp(n, -1);
    dp[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        int left = arr[i];
        if (i > 1)
            left += dp[i - 2];
        int right = dp[i - 1];
        dp[i] = max(left, right);
    }
    return dp[n - 1];
}

//space optimization