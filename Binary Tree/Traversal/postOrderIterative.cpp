
//Using two stack.
vector<int> postOrder(Node* root) {
        stack<Node*>st1,st2;
        st1.push(root);
        
        while(!st1.empty())
        {
            Node* node = st1.top();
            st1.pop();
            st2.push(node);
            
            if(node->left)st1.push(node->left);
            if(node->right)st1.push(node->right);
        }
        vector<int>post;
        while(!st2.empty()){
            post.push_back(st2.top()->data);
            st2.pop();
        }
        return post;
    }