void MyQueue::push(int x)
{
    QueueNode *n = new QueueNode(x);
    if (rear == NULL)
    {
        rear = n;
        front = n;
    }
    else
    {
        rear->next = n;
        rear = n;
    }
}

// Function to pop front element from the queue.
int MyQueue ::pop()
{
    if (front == NULL)
    {
        return -1;
    }
    int popEle = front->data;
    if (front == rear)
    {
        rear = front = NULL;
    }
    else
        front = front->next;
    return popEle;
}