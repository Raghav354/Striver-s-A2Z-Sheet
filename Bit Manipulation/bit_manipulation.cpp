vector<int> bitManipulation(int num, int i){
    vector<int>ans;
    int n=num;
    int mask=1;
    mask = mask<<i-1;
    if(n&mask)
    ans.push_back(1);
    else ans.push_back(0);
    n=n|mask;
    ans.push_back(n);
    n=num;
    mask=~mask;
    n=mask&n;
    ans.push_back(n);
    return ans;
}