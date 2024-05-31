TreeNode *buildTreeHelper(vector<int> &pre, int preStart, int preEnd,
                          vector<int> &in, int inStart, int inEnd, map<int, int> &inMap)
{

    if (preStart > preEnd || inStart > inEnd)
        return NULL;

    TreeNode *root = new TreeNode(pre[preStart]);
    int inRoot = inMap[root->val];
    int numsLeft = inRoot - inStart;

    root->left = buildTreeHelper(pre, preStart + 1, preStart + numsLeft, in, inStart, inRoot - 1, inMap);
    root->right = buildTreeHelper(pre, preStart + numsLeft + 1, preEnd, in, inRoot + 1, inEnd, inMap);
    return root;
}
TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    map<int, int> inMap;
    for (int i = 0; i < inorder.size(); i++)
    {
        inMap[inorder[i]] = i;
    }
    TreeNode *root = buildTreeHelper(preorder, 0, preorder.size() - 1,
                                     inorder, 0, inorder.size() - 1, inMap);

    return root;
}