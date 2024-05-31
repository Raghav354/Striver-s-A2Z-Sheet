Node* predecessor(Node* root , Node* pre , int key){
        while(root){
            if(root->key >= key){
                root = root->left;
            }else{
                pre = root;
                root=root->right;
            }
        }
        return pre;
    }
    
    Node* successor(Node* root , Node* suc , int key){
        while(root){
            if(root->key <= key){
                root = root->right;
            }else{
                suc = root;
                root = root->left;
            }
        }
        return suc;
    }
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        pre = predecessor(root,NULL,key);
        suc = successor(root,NULL,key);
        
    }