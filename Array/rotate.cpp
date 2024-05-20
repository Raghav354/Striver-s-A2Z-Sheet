void reverseArr(vector<int> &nums, int i, int j)
{
    while (i < j)
    {
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
}
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    reverseArr(nums, 0, n - 1);
    reverseArr(nums, 0, k - 1);
    reverseArr(nums, k, n - 1);
}

// void rotate(vector<int> &nums, int k)
// {
//     int n = nums.size();
//     vector<int> v(nums.size());
//     for (int i = 0; i < n; i++)
//     {
//         v[(i + k) % n] = nums[i];
//     }
//     nums = v;
// }