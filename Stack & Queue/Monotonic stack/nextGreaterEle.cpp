vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    vector<long long> v(n, -1);
    stack<long long> s;
    for (int i = n - 1; i >= 0; i--)
    {
        long long curr = arr[i];
        while (!s.empty() && curr >= s.top())
        {
            s.pop();
        }
        if (s.empty())
            v[i] = -1;
        else
            v[i] = s.top();

        s.push(curr);
    }
    return v;
}