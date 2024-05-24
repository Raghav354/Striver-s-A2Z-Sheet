// Height = max(leftHeight , RightHeight)+1;

int height(struct Node* node){
        if(node == NULL)return 0;
        int l = height(node->left);
        int r = height(node->right);
        int ans = max(l,r)+1;
        return ans;
    }