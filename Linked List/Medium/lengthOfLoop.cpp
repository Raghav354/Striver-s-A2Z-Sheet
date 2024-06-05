// find first position of the loop and then count the nodes.

/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

// Function to find the length of a loop in the linked list.
Node *floyd(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *fast = head;
    Node *slow = head;
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
Node *getStartingNode(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *intersection = floyd(head);
    Node *slow = head;

    if (intersection == NULL)
        return NULL;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
int countNodesinLoop(struct Node *head)
{
    Node *startingNode = getStartingNode(head);
    int count = 0;
    if (startingNode == NULL)
        return count;
    else
    {
        Node *temp = startingNode->next;
        while (temp != startingNode)
        {
            count++;
            temp = temp->next;
        }
    }
    return count + 1;
}






// Optimal
int countNodesinLoop(struct Node *head)
{
    Node *fast = head;
    Node *slow = head;
    int count = 0;
    while (fast != NULL && fast->next != NULL)
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
            slow = slow->next;
            count = 1;
            while (fast != slow)
            {
                count++;
                slow = slow->next;
            }
            break;
        }
    }
    return count;
}