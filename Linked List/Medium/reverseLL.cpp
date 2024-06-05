struct Node *reverseList(struct Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *Next = NULL;

    while (curr != NULL)
    {
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}