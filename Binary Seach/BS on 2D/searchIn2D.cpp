bool search(vector<int> &nums, int target)
{
    vector<int> arr = nums;
    int s = 0, e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            return true;
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
    return false;
}
int matSearch(vector<vector<int>> &mat, int N, int M, int X)
{
    for (int i = 0; i < N; i++)
    {
        bool chk = search(mat[i], X);
        if (chk)
            return 1;
    }
    return 0;
}