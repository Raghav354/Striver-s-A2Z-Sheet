// Tip :- Similar logic as height.

int maxSum(Node* root , int& maxi){
        if(root == NULL)
            return 0;
            
        int leftSum = max(0,maxSum(root->left , maxi));
        int rightSum = max(0,maxSum(root->right , maxi));
        maxi = max(leftSum + rightSum + root->data , maxi);
        
        return max(leftSum , rightSum)+root->data ;
    }
    int findMaxSum(Node* root)
    {
        int maxi = INT_MIN;
        maxSum(root , maxi);
        return maxi;
        
    }