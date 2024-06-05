void addNode(Node *head, int pos, int data)
{
    Node *n = new Node(data);
    Node *temp = head;
    while (pos--)
    {
        if (temp != NULL)
            temp = temp->next;
    }

    n->next = temp->next;
    n->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = n;
    }
    temp->next = n;
}