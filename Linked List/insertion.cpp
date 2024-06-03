// Function to insert a node at the beginning of the linked list.
Node *insertAtBegining(Node *head, int x)
{
    if (head == NULL)
    {
        Node *temp = new Node(x);
        head = temp;
    }
    else
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
    }
    return head;
}

// Function to insert a node at the end of the linked list.
Node *insertAtEnd(Node *head, int x)
{
    if (head == NULL)
    {
        Node *temp = new Node(x);
        head = temp;
    }
    else
    {

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *endNode = new Node(x);
        temp->next = endNode;
        temp = endNode;
    }
    return head;
}