Node *findIntersection(Node *head1, Node *head2)
{
    Node *ans = new Node(-1);
    Node *ansTail = ans;
    map<int, bool> m;
    Node *temp = head2;
    while (temp)
    {
        m[temp->data] = true;
        temp = temp->next;
    }
    temp = head1;
    while (temp)
    {
        if (m.find(temp->data) != m.end())
        {
            Node *n = new Node(temp->data);
            ansTail->next = n;
            ansTail = n;
        }
        temp = temp->next;
    }
    return ans->next;
}