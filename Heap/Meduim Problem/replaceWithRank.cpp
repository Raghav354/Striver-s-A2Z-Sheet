vector<int> replaceWithRank(vector<int> &arr, int N)
{
    vector<int> temp = arr;
    sort(arr.begin(), arr.end());
    int count = 1;
    map<int, int> m;
    for (int i = 0; i < arr.size(); i++)
    {
        if (m.find(arr[i]) == m.end())
        {
            m[arr[i]] = count;
            count++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        temp[i] = m[temp[i]];
    }
    return temp;
}