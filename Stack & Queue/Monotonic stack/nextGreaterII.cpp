/*
    Method 1.To make a circular array just copy the whole arr after the end of the array.
    Method 2. Use i = i%n to traverse the array and make the size n = 2n;
*/

vector<int> nextGreaterElements(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(nums.size(), -1);
    stack<int> s;
    for (int i = 2 * nums.size() - 1; i >= 0; i--)
    {
        int curr = nums[i % n];
        while (!s.empty() && curr >= s.top())
        {
            s.pop();
        }
        if (s.empty())
            ans[i % n] = -1;
        else
            ans[i % n] = s.top();

        s.push(curr);
    }
    return ans;
}