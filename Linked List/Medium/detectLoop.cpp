bool detectLoop(Node *head)
{
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
        if (fast == slow)
            return true;
    }
    return false;
}