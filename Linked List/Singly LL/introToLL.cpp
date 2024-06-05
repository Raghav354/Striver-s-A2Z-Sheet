void insertAtEnd(Node *&curr, int data)
{
    Node *temp = new Node(data);
    curr->next = temp;
    curr = temp;
}

Node *constructLL(vector<int> &arr)
{
    Node *head = NULL;
    Node *temp = new Node(arr[0]);
    head = temp;
    Node *curr = head;

    for (int i = 1; i < arr.size(); i++)
    {
        insertAtEnd(curr, arr[i]);
    }
    return head;
}