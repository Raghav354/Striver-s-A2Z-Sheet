
// Function to find the maximum number of meetings that can
// be performed in a meeting room.
static bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int maxMeetings(int start[], int end[], int n)
{
    // Your code here
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p = make_pair(start[i], end[i]);
        vp.push_back(p);
    }
    sort(vp.begin(), vp.end(), cmp);
    int ansEnd = vp[0].second;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (ansEnd < vp[i].first)
        {
            count++;
            ansEnd = vp[i].second;
        }
    }
    return count;
}
