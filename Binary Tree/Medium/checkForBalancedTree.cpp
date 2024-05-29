int height(Node *root){
        if(root == NULL)return 0;
        
        int left = height(root->left);
        int right = height(root->right);
        return max(left,right)+1;
    }
    bool isBalanced(Node *root)
    {
        if(root == NULL)return true;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        int l = height(root->left);
        int r = height(root->right);
        bool diff = abs(l-r)<=1;
        
        if(left && right && diff)return true;
        else return false;
    }