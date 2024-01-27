
#include <bits/stdc++.h>

using namespace std;
vector<int> countFrequency(int n, int x, vector<int> &nums){
    map<int,int>m;
    for(auto it:nums)
    {
        m[it]++;
    }
    vector<int>v;
    for(int i=0 ; i<n;i++)
    {
        if(m.find(i+1) != m.end())
        v.push_back(m[i+1]);
        else
        v.push_back(0);
    }
    return v;
}