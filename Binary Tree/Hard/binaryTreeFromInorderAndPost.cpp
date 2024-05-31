TreeNode *buildTreeHelper(vector<int> &in, int inStart, int inEnd, vector<int> &post, int postStart, int postEnd, map<int, int> &inMap)
{
    if (inStart > inEnd || postStart > postEnd)
        return NULL;

    TreeNode *root = new TreeNode(post[postEnd]);
    int inRoot = inMap[root->val];
    int numsLeft = inRoot - inStart;
    root->left = buildTreeHelper(in, inStart, inRoot - 1, post, postStart, postStart + numsLeft - 1, inMap);
    root->right = buildTreeHelper(in, inRoot + 1, inEnd, post, postStart + numsLeft, postEnd - 1, inMap);
    return root;
}
TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    map<int, int> inMap;
    for (int i = 0; i < inorder.size(); i++)
    {
        inMap[inorder[i]] = i;
    }
    TreeNode *root = buildTreeHelper(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1, inMap);
    return root;
}