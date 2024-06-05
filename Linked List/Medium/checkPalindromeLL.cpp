/*
    1. Find the middle of the LL.
    2. reverse the second half of the LL.
    3. Now check the first half and second half is identical or not.
*/

Node *findMid(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *newHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
bool isPalindrome(Node *head)
{
    Node *mid = findMid(head);
    Node *revHead = reverse(mid);
    Node *temp = head;
    while (temp != NULL && revHead != NULL)
    {
        if (temp->data != revHead->data)
        {
            return false;
        }
        temp = temp->next;
        revHead = revHead->next;
    }
    return true;
}