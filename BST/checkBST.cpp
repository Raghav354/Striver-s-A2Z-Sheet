bool isValidBST(TreeNode* root) {
        if(root->left== NULL && root->right == NULL)
            return true;
        long long int mini=LONG_MIN;
        long long int maxi=LONG_MAX;
        return check(root,mini,maxi);
    }
    bool check(TreeNode* root , long long int mini , long long int maxi){
        if(root == NULL)return true;
        if(root->val <= mini || root->val >= maxi)
            return false;
        
        return check(root->left,mini , root->val) && check(root->right , root->val , maxi);
    }