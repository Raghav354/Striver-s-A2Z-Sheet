TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return build(preorder,INT_MAX,i);
    }

    TreeNode* build(vector<int>&preorder,int ub , int& i){
        if(i>=preorder.size() || preorder[i] > ub )
            return NULL;
        
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = build(preorder,root->val,i);
        root->right = build(preorder,ub,i);
        return root;
    }