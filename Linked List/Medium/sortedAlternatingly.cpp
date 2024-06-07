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

void sort(Node **head)
{
    if (head == NULL || *head == NULL || (*head)->next == NULL)
        return;

    Node *odd = *head;
    Node *even = (*head)->next;
    Node *evenHead = even;

    while (even != NULL && even->next != NULL)
    {
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
    }
    evenHead = reverseList(evenHead);
    odd->next = evenHead;
}