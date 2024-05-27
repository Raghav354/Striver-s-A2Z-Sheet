void create_tree(node* root, vector<int> &v){
        queue<node*>q;
        q.push(root);
        int i=1;
        while(!q.empty() && i<6){
            node* tempNode = q.front();
            q.pop();
            
            node* leftNode = newNode(v[i++]);
            node* rightNode = newNode(v[i++]);
            tempNode->left = leftNode;
            tempNode->right = rightNode;
            q.push(leftNode);
            q.push(rightNode);
        }
    }