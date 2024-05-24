vector<int> inOrder(Node *root)
{
    vector<int> ans;
    if (root != NULL)
    {
        inOrder(root->left);
        ans.push_back(root->data);
        inOrder(root->right);
    }
    return ans;
}