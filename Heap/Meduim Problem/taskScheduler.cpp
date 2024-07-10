int leastInterval(vector<char> &tasks, int n)
{
    map<char, int> m;
    int totalTask = tasks.size();
    int mostFreq = INT_MIN;
    for (int i = 0; i < tasks.size(); i++)
    {
        m[tasks[i]]++;
        if (m[tasks[i]] > mostFreq)
        {
            mostFreq = m[tasks[i]];
        }
    }
    int mostFreqCount = 0;
    for (auto it : m)
    {
        if (it.second == mostFreq)
        {
            mostFreqCount++;
        }
    }
    int ans = (mostFreq - 1) * (n + 1) + mostFreqCount;
    return max(totalTask, ans);
}