ListNode *floyd(ListNode *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    ListNode *fast = head;
    ListNode *slow = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            ;
        }
        slow = slow->next;
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}