int lengthOfLongestSubstring(string s) {
        if(s.size()==1)return 1;
        map<char,int>m;
        int i=0,j=0;
        int ans=0;
        while(j<s.size())
        {
            m[s[j]]++;

            while(m[s[j]] > 1)
            {
                m[s[i]]--;
                i++;
            }
            ans = max(j-i+1,ans);
            j++;
            
        }
        return ans;
    }