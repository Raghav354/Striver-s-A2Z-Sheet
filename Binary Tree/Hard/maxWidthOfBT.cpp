// Tip :- Keep in mind the int overflow.
int widthOfBinaryTree(TreeNode* root) {
        if(!root)
        return 0;
        int ans = INT_MIN;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});

        while(!q.empty()){
            int n = q.size();
            int leftMost = 0 , rightMost = 0;
            int mini = q.front().second;
            for(int i=0 ; i<n ; i++){
                auto it = q.front();
                q.pop();

                long long currInd = it.second-mini;
                TreeNode* node = it.first; 

                if(i==0)
                    leftMost = currInd;
                if(i==n-1) 
                    rightMost=currInd;

                if(node->left)
                q.push({node->left,(2*currInd+1)});

                if(node->right)
                q.push({node->right,(2*currInd+2)});
            }
            ans = max(ans , rightMost-leftMost+1);
        }
        return ans;
    }