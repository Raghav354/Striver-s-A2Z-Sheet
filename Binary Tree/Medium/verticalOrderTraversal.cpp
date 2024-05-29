// Tip -: Use vertical line concept and use level to find node at same line.

vector<vector<int>> verticalTraversal(TreeNode *root)
{
    vector<vector<int>> ans;
    if (!root)
        return ans;

    // use multiset when we have to return sorted value if not then use map<int,vector<int>>>.
    map<int, map<int, multiset<int>>> m;
    queue<pair<TreeNode *, pair<int, int>>> q;
    q.push({root, {0, 0}});

    while (!q.empty())
    {
        auto it = q.front();
        q.pop();

        TreeNode *node = it.first;
        int x = it.second.first;
        int y = it.second.second;
        m[x][y].insert(node->val);

        if (node->left)
            q.push({node->left, {x - 1, y + 1}});

        if (node->right)
            q.push({node->right, {x + 1, y + 1}});
    }
    for (auto it : m)
    {
        vector<int> v;
        for (auto p : it.second)
        {
            v.insert(v.end(), p.second.begin(), p.second.end());
        }
        ans.push_back(v);
    }
    return ans;
}