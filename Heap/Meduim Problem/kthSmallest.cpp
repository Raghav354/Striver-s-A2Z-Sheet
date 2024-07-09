int kthSmallest(int arr[], int l, int r, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    while (l <= r)
    {
        pq.push(arr[l]);
        l++;
    }
    while (k > 1)
    {
        pq.pop();
        k--;
    }
    return pq.top();
}