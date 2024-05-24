// Tip :- Let a flag and move traversal according to the flag.

vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>v;
    	queue<Node*>q;
    	q.push(root);
    	bool flag = true;
    	while(!q.empty()){
    	    int n = q.size();
    	    vector<int>temp;
    	    for(int i=0 ; i<n ; i++){
    	        Node* node = q.front();
    	        q.pop();
    	        
    	        if(node->left != NULL){
    	            q.push(node->left);
    	        }
    	        if(node->right != NULL){
    	            q.push(node->right);
    	        }
    	        temp.push_back(node->data);
    	   }

    	    if(!flag){
    	        reverse(temp.begin() , temp.end());
    	        flag = true;
    	    }else{
    	        flag = false;
    	    }
    	    v.insert(v.end() , temp.begin() , temp.end());
    	}
    	return v;
    }