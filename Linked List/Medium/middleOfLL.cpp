int getMiddle(Node *head)
{
    if (head == NULL)
        return -1;
    Node *fast = head;
    Node *slow = head;

    while (fast->next != NULL)
    {
        fast = fast->next;
        if (fast != NULL && fast->next != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow->data;
}