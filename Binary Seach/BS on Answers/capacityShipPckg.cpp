int countDays(vector<int> &weights, int cap)
{
    int day = 1, load = 0;
    for (int i = 0; i < weights.size(); i++)
    {
        if (load + weights[i] > cap)
        {
            day += 1;
            load = weights[i];
        }
        else
        {
            load += weights[i];
        }
    }
    return day;
}
int shipWithinDays(vector<int> &weights, int days)
{
    int maxi = INT_MIN, sum = 0;
    for (int i = 0; i < weights.size(); i++)
    {
        maxi = max(maxi, weights[i]);
        sum += weights[i];
    }
    int s = maxi, e = sum;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int duration = countDays(weights, mid);
        if (duration <= days)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return s;
}