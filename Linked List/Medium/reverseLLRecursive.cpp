Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *tempHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return tempHead;
}
struct Node *reverseList(struct Node *head)
{
    return reverse(head);
}