
void inorder(TreeNode *root, int &count, int &ans, int k)
{
    if (root == NULL)
        return;

    inorder(root->left, count, ans, k);
    count++;
    if (count == k)
    {
        ans = root->val;
        return;
    }
    inorder(root->right, count, ans, k);
}
int kthSmallest(TreeNode *root, int k)
{
    int ans = -1, count = 0;
    inorder(root, count, ans, k);
    return ans;
}