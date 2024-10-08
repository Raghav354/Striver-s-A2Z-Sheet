// Tip :- First node of the vertical line is top view.

vector<int> topView(Node *root)
{
    vector<int> ans;
    if (!root)
        return ans;
    queue<pair<Node *, int>> q;
    map<int, int> m;
    q.push({root, 0});

    while (!q.empty())
    {
        auto it = q.front();
        q.pop();

        Node *node = it.first;
        int line = it.second;
        if (m.find(line) == m.end())
        {
            m[line] = node->data;
        }

        if (node->left != NULL)
            q.push({node->left, line - 1});

        if (node->right != NULL)
            q.push({node->right, line + 1});
    }
    for (auto it : m)
        ans.push_back(it.second);

    return ans;
}