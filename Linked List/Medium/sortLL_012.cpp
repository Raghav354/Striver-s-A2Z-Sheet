void insertAtTail(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}
Node *segregate(Node *head)
{

    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            insertAtTail(zeroTail, temp->data);
        }
        else if (temp->data == 1)
        {
            insertAtTail(oneTail, temp->data);
        }
        else
        {
            insertAtTail(twoTail, temp->data);
        }
        temp = temp->next;
    }
    oneHead = oneHead->next;
    twoHead = twoHead->next;

    while (oneHead != NULL)
    {
        insertAtTail(zeroTail, oneHead->data);
        oneHead = oneHead->next;
    }
    while (twoHead != NULL)
    {
        insertAtTail(zeroTail, twoHead->data);
        twoHead = twoHead->next;
    }
    return zeroHead->next;
}