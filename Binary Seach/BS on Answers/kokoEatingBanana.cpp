int totalHours(vector<int> piles, int k)
{
    long long int hours = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        hours += ceil(double(piles[i]) / double(k));
        //to prevent overflow. => edge case => piles = [805306368,805306368,805306368] , h =1000000000
        if (hours > INT_MAX)
        {
            return INT_MAX;
        }
    }
    return hours;
}
int minEatingSpeed(vector<int> &piles, int h)
{
    int ans = INT_MAX, maxi = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        maxi = max(maxi, piles[i]);
    }
    int s = 1, e = maxi;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int hr = totalHours(piles, mid);
        if (hr <= h)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}