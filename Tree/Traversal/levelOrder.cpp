vector<vector<int>> levelOrder(TreeNode *root)
{
    if (root == NULL)
        return {};
    vector<vector<int>> ans;
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            v.push_back(temp->val);
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
        ans.push_back(v);
    }
    return ans;
}