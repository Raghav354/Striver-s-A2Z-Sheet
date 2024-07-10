bool isNStraightHand(vector<int> &hand, int groupSize)
{
    int n = hand.size();
    if (n % groupSize != 0)
        return false;

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[hand[i]]++;
    }

    while (m.size())
    {
        int ele = m.begin()->first;
        for (int i = 0; i < groupSize; i++)
        {
            if (m.find(ele + i) == m.end())
            {
                return false;
            }
            else
            {
                m[ele + i]--;
                if (m[ele + i] == 0)
                {
                    m.erase(ele + i);
                }
            }
        }
    }
    return true;
}