// Tip :- In pair => (diameter , height);

pair<int, int> optimizedDiameter(Node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    pair<int, int> left = optimizedDiameter(root->left);
    pair<int, int> right = optimizedDiameter(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(op3, max(op2, op1));
    ans.second = max(left.second, right.second) + 1;
    return ans;
}

int diameter(Node *root)
{
    return optimizedDiameter(root).first;
}