/*
    1.Search the node if it exist or not.
    2.delete the value and connect the PrevRoot to the left tree of key node.
    3.Find last rightChild of key node and connect all the right subtree to the right . 
*/

TreeNode *deleteNode(TreeNode *root, int key)
{
    TreeNode *curr = root;
    if (root == NULL)
    {
        return root;
    }
    if (root->val == key)
    {
        return deleteVal(root);
    }
    TreeNode *temp = root;
    while (root != NULL)
    {
        if (root->val == key)
        {
            root->left = deleteVal(root);
            break;
        }
        else if (root->val < key)
        {
            if (root->right && root->right->val == key)
            {
                root->right = deleteVal(root->right);
                break;
            }
            else
            {
                root = root->right;
            }
        }
        else
        {
            if (root->left && root->left->val == key)
            {
                root->left = deleteVal(root->left);
                break;
            }
            else
                root = root->left;
        }
    }
    return temp;
}

TreeNode *deleteVal(TreeNode *root)
{
    if (root->left == NULL)
        return root->right;
    else if (root->right == NULL)
        return root->left;

    TreeNode *rightChild = root->right;
    TreeNode *lastRightChild = findLastRight(root->left);
    lastRightChild->right = rightChild;
    return root->left;
}

TreeNode *findLastRight(TreeNode *root)
{
    if (root->right == NULL)
        return root;
    return findLastRight(root->right);
}