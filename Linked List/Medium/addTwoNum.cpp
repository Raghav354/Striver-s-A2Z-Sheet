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

void insertAtTail(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}
// Function to add two numbers represented by linked list.
struct Node *addTwoLists(struct Node *num1, struct Node *num2)
{
    Node *t1 = num1, *t2 = num2;
    while (t1 != NULL && t1->data == 0)
    {
        t1 = t1->next;
    }
    while (t2 != NULL && t2->data == 0)
    {
        t2 = t2->next;
    }
    if (t1 == NULL && t2 == NULL)
    {
        Node *node = new Node(0);
        return node;
    }
    num1 = reverse(num1);
    num2 = reverse(num2);
    Node *temp1 = num1, *temp2 = num2;
    int carry = 0;
    Node *ansList = new Node(-1);
    Node *ansTail = ansList;
    while (temp1 != NULL || temp2 != NULL || carry != 0)
    {
        int val1 = 0, val2 = 0;
        if (temp1 != NULL)
        {
            val1 = temp1->data;
        }
        if (temp2 != NULL)
        {
            val2 = temp2->data;
        }
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        insertAtTail(ansTail, sum);
        if (temp1)
        {
            temp1 = temp1->next;
        }
        if (temp2)
        {
            temp2 = temp2->next;
        }
    }
    ansList = reverse(ansList->next);
    while (ansList != NULL && ansList->data == 0)
    {
        ansList = ansList->next;
    }
    return ansList;
}