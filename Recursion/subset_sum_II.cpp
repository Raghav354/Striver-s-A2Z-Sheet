//Not an optilmal code
void solve(int index , vector<int>nums , vector<int>temp , vector<vector<int>>&ans)
{
	if(index>=nums.size())
	{
		ans.push_back(temp);
		return ;
	}
		temp.push_back(nums[index]);
		solve(index+1 , nums,temp,ans);
        temp.pop_back();
		solve(index+1,nums,temp,ans);
}

vector<vector<int>> getUniqueSubsets(vector<int>& arr) {
    int index=0;
    vector<vector<int>>ans;
    vector<int>temp;
    solve(index,arr,temp,ans);
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    return ans;    
}

//optimal code -> 
void solve(int index , vector<int>nums , vector<int>temp , vector<vector<int>>&ans)
{
        ans.push_back(temp);
        for(int i=index ; i<nums.size() ; i++)
        {
            if(i != index && nums[i] == nums[i-1])continue;
            temp.push_back(nums[i]);
		    solve(i+1 , nums,temp,ans);
            temp.pop_back();
        }
}

vector<vector<int>> getUniqueSubsets(vector<int>& arr) {
    int index=0;
    vector<vector<int>>ans;
    vector<int>temp;
    solve(index,arr,temp,ans);
    return ans;    
}
