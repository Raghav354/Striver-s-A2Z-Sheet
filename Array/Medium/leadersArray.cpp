vector<int> leaders(int a[], int n){
        int maxi = a[n-1];
        vector<int>v;
        for(int i=n-1;i>=0;i--){
            if(a[i] >= maxi)
            {
                maxi = a[i];
                v.push_back(a[i]);
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }