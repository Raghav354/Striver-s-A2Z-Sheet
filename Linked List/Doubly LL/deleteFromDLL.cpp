Node *deleteNode(Node *head, int x)
{
    Node *temp = head;
    Node *prev = NULL;
    if (x == 1)
    {
        if (head->next != NULL)
            head = head->next;
        return head;
    }

    while (x > 1)
    {
        prev = temp;
        temp = temp->next;
        x--;
    }
    if (temp->next)
    {
        prev->next = temp->next;
        temp->next->prev = prev;
    }
    else
    {
        prev->next = NULL;
    }
    delete (temp);
    return head;
}