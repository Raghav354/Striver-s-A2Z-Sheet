// Tip :- Leaf node can create problem.

int isSumProperty(Node *root)
{
    if (!root)
        return 1;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            Node *node = q.front();
            q.pop();

            if (node->left == NULL && node->right == NULL)
                continue;

            if (node->left)
            {
                q.push(node->left);
                sum += node->left->data;
            }
            if (node->right)
            {
                q.push(node->right);
                sum += node->right->data;
            }
            if (node->data != sum)
                return 0;
        }
    }
    return 1;
}

// By DFS.
bool isSumProperty(Node *root)
{
    if (!root || (!root->left && !root->right))
        return true;

    int sum = 0;

    if (root->left)
        sum += root->left->data;
    if (root->right)
        sum += root->right->data;

    bool currentCheck = (root->data == sum);

    bool leftCheck = isSumProperty(root->left);
    bool rightCheck = isSumProperty(root->right);

    return currentCheck && leftCheck && rightCheck;
}