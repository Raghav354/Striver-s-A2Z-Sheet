int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        int sum=0;
        int ans=0;
        map<int,int>preSumMap;
        for(int i=0 ; i<N ; i++){
            sum += A[i];
            if(sum == k)
            ans = max(ans , i+1);
            
            int diff = sum-k;
            if(preSumMap.find(diff) != preSumMap.end()){
                int len = i-preSumMap[diff];
                ans = max(len,ans);
            }
            if(preSumMap.find(sum) == preSumMap.end()){
                preSumMap[sum] = i;
            }
        } 
        return ans;
    } 