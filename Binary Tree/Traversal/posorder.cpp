void post(Node* root , vector<int>&ans){
    if(root == NULL)
    return ;
    
    if(root!=NULL){
        post(root->left , ans);
        post(root->right , ans);
        ans.push_back(root->data);
    }
}