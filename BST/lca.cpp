/*
    case 1. both lies on left;
    case 2. both lies on right;
    case 3. one lies on left and another lies on right;
*/
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root){
            if(root->val > p->val && root->val > q->val){
                root = root->left;
            }else if(root->val < p->val && root->val < q->val){
                root = root->right;
            }else{
                return root;
            }
        }
        return NULL;
    }