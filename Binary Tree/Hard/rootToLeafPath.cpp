// Tip :- use Inorder and keep in mind that when u return u have to backtrack.

void dfs(Node* root , vector<vector<int>>&ans , vector<int>v){
        if(!root)return;
        v.push_back(root->data);
        if(root->left == NULL && root->right == NULL){
            ans.push_back(v);
            return;
        }
        
        dfs(root->left,ans,v);
        dfs(root->right,ans,v);
        v.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        vector<int>v;
        dfs(root,ans,v);
        return ans;
    }