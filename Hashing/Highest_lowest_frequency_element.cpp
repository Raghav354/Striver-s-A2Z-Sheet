vector<int> getFrequencies(vector<int>& v) {
    map<int,int>m;
    for(auto it:v)
    {
        m[it]++;
    }
    int highFreq=INT_MIN , LowFreq=INT_MAX;
    for(auto it:m)
    {
        highFreq = max(highFreq,it.second);
        LowFreq = min(LowFreq,it.second);
    }
    int high=INT_MAX,low=INT_MAX;
    for(auto it:m)
    {
        if(it.second==highFreq)
        {
            high = min(high , it.first);
        }
        if(it.second==LowFreq)
        {
            low=min(low,it.first);
        }
    }
    vector<int> ans;
    ans.push_back(high);
    ans.push_back(low);
    return ans;
}