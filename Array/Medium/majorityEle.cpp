// Giving TLE -: TC - O(nlog(n))
/*
int majorityElement(int a[], int n)
{
    int ans = -1;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    for (auto it : m)
    {
        if (it.second > n / 2)
            ans = it.first;
    }
    return ans;
}
*/

// Optimized code -: Moore’s Voting Algorithm:
/* Tip :- First, choose a candidate from the given set of elements if it is the same as the candidate element,
 increase the votes. Otherwise, decrease the votes if votes become 0, select another new element as the new candidate.
*/

int majorityElement(int a[], int n)
{
    int majElement;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            majElement = a[i];
            count = 1;
        }
        else if (a[i] == majElement)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == majElement)
            freq++;
    }
    if (freq > n / 2)
        return majElement;
    else
        return -1;
}