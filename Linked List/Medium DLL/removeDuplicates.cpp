Node *removeDuplicates(struct Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            curr->next = curr->next->next;
            if (curr->next != NULL)
                curr->next->prev = curr;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}