// The fast-moving pointer will initially be exactly N nodes ahead of the slow-moving pointer. After which, both of them will move one step at a time.

int getNthFromLast(Node *head, int n)
{

    Node *fast = head, *slow = head;
    while (n > 1 && fast != NULL)
    {
        n--;
        fast = fast->next;
    }
    if (fast == NULL)
        return -1;
    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow->data;
}