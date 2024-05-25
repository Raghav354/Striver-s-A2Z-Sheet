// Tip :- If sum < 0 than sum = 0 because A subarray with a sum less than 0 will always reduce our answer and so this type of subarray cannot be a part of the subarray with maximum sum.


//Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long int sum = 0;
        long long int ans = INT_MIN;
        for(int i=0 ; i<n ; i++){
            sum += arr[i];
            ans = max(ans , sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return ans;
        
    }