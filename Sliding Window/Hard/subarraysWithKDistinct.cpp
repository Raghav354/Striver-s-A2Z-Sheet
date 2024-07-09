
// Exactly k = atmost k - atmost k-1;

int atMostKDiffrent(vector<int>&nums,int k){
        map<int,int>m;
        int i=0,j=0;
        int count=0;
        
        while(j<nums.size()){
            m[nums[j]]++;

            while(m.size() > k){
                m[nums[i]]--;
                if(m[nums[i]]==0){
                    m.erase(nums[i]);
                }
                i++;
            }
            count += j-i+1;
            j++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int ans = atMostKDiffrent(nums,k) - atMostKDiffrent(nums,k-1);
        return ans;
    }