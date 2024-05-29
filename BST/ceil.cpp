int findCeil(Node* root, int x) {
    if (root == NULL) return -1;
    int ans = -1;
    while(root != NULL){
        if(root->data >= x){
            ans = root->data;
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return ans;
}