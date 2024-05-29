vector<int> rightView(Node *root)
{
   vector<int>ans;
   if(root == NULL)return ans;
   int level = 0;
   queue<Node*>q;
   q.push(root);
   
   while(!q.empty())
   {
       int n = q.size();
       
       for(int i=0 ; i<n ; i++){
           root = q.front();
           q.pop();
           
           if(root->left != NULL) q.push(root->left);
           if(root->right != NULL) q.push(root->right);
           
           if(i == n-1) ans.push_back(root->data);
       }
   }
   return ans;
}
