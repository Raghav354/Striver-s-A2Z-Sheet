/*
Tip :- 1. Fill all the left boundary node first except leaf.
       2. Then all the leaf node .
       3. after leaf fill all the right boundary node.
*/

bool isLeaf(Node* root){
        if(root->left == NULL && root -> right == NULL)return true;
        else return false;
    }
    void addLeft(Node* root , vector<int>&ans){
        Node* node = root->left;
        while(node){
            if(!isLeaf(node))ans.push_back(node->data);
            if(node->left)node = node->left;
            else node = node->right;
        }
    }
    
    void addRight(Node* root , vector<int>&ans){
        Node* node = root->right;
        vector<int>temp;
        while(node){
            if(!isLeaf(node))temp.push_back(node->data);
            if(node->right)node = node->right;
            else node = node->left;
        }
        for(int i=temp.size()-1 ; i>=0 ; i--){
            ans.push_back(temp[i]);
        }
    }
    
    void addLeaf(Node* root , vector<int>&ans){
        if(isLeaf(root)){
            ans.push_back(root->data);
            return ;
        }
        if(root->left)addLeaf(root->left , ans);
        if(root->right) addLeaf(root->right , ans);
    }
    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        if(root == NULL)
            return ans;
        if(!isLeaf(root))ans.push_back(root->data);
        addLeft(root , ans);
        addLeaf(root , ans);
        addRight(root , ans);
        return ans;
    }