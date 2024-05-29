
//  Using BFS
int countNodes(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*>q;
        int count=0;
        q.push(root);

        while(!q.empty())
        {
            int n = q.size();
            for(int i=0 ; i<n ; i++){
                root = q.front();
                q.pop();

                if(root->left)q.push(root->left);
                if(root->right)q.push(root->right);
                count++;
            }
        }
        return count;
    }

    // USing DFS

    void inorder(TreeNode* root , vector<int>&v){
        if(root == NULL) 
        return;

        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int countNodes(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return ans.size();
    }