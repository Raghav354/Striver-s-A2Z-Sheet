void solve(int index , vector<int>nums , int sum , vector<int>&ans)
{
	if(index>=nums.size())
	{
		ans.push_back(sum);
		return ;
	}
		sum += nums[index];
		solve(index+1 , nums,sum,ans);
		sum-=nums[index];
		solve(index+1,nums,sum,ans);

}

vector<int> subsetSum(vector<int> &num){
		vector<int>ans;
		solve(0,num,0,ans);
		sort(ans.begin(),ans.end());
		return ans;
}