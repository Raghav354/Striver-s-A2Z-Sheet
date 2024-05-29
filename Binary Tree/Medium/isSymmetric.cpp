// Tip :- Check for both left and right side and compare data value.

bool check(Node*r1 , Node* r2){
        if(r1==NULL && r2 == NULL)return true;
        if(r1!=NULL && r2 == NULL)return false;
        if(r1==NULL && r2 != NULL)return false;
        
        if(r1->data != r2->data)return false;
        
        return check(r1->left , r2->right) && check(r1->right , r2->left);
        
    }
    
    bool isSymmetric(struct Node* root)
    {
	    if(root==NULL)return true;
	    
	    return check(root->left , root->right);
    }