Node *findMiddle(Node *head)
{
    Node *fast = head, *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node *deleteMid(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *mid = findMiddle(head);
    Node *temp = head;
    while (temp->next != mid)
    {
        temp = temp->next;
    }
    temp->next = mid->next;
    return head;
}