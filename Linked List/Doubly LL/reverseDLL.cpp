Node *reverseDLL(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *Next = NULL;
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        Next = curr->next;
        curr->next = prev;
        curr->prev = Next;
        prev = curr;
        curr = Next;
    }
    head = prev;
    return head;
}