Node *reverse(Node *head)
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
Node *addOne(Node *head)
{
    int carry = 1;
    Node *tempHead = head;
    tempHead = reverse(tempHead);
    Node *temp = tempHead;
    while (temp != NULL)
    {
        int val = temp->data + carry;
        carry = val / 10;
        val = val % 10;
        temp->data = val;
        temp = temp->next;
    }
    tempHead = reverse(tempHead);
    if (carry != 0)
    {
        Node *n = new Node(carry);
        n->next = tempHead;
        tempHead = n;
    }

    return tempHead;
}