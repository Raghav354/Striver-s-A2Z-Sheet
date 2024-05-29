bool isIdentical(Node *r1, Node *r2)
{
    if (r1 == NULL && r2 == NULL)
    {
        return true;
    }
    if (r1 == NULL && r2 != NULL)
    {
        return false;
    }
    if (r1 != NULL && r2 == NULL)
    {
        return false;
    }
    bool isLeft = isIdentical(r1->left, r2->left);
    bool isRight = isIdentical(r1->right, r2->right);
    bool val = (r1->data == r2->data);

    if (isLeft && isRight && val)
        return true;
    else
        return false;
}