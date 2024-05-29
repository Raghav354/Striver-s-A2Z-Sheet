//Leetcode :- Value must not be in BST

TreeNode* insertIntoBST(TreeNode* root, int x) {
        TreeNode* curr = root;
        if(root == NULL)
        {
            return new TreeNode(x);
        }
        while(root!=NULL){
            if(root->val < x)
            {
                if(root->right)
                    root = root->right;
                else{
                    root->right = new TreeNode(x);
                    break;
                }
            }else{
                if(root->left)
                    root = root->left;
                else{
                    root->left = new TreeNode(x);
                    break;
                }
            }
        }
        return curr;
    }


//GFG -: If value is already present in BST.
Node* insert(Node* root, int data) {
        
            if(root == NULL){
                root = new Node(data);
                return root;
            }
            
            if(root->data == data){
                return root;
            }
            if(root->data < data)
            {
                root->right = insert(root->right , data);
            }else{
                root->left = insert(root->left , data);
            }
            return root;
    }