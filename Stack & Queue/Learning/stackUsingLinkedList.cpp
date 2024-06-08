void MyStack ::push(int x)
{
    StackNode *n = new StackNode(x);
    if (top == NULL)
    {
        top = n;
    }
    else
    {
        n->next = top;
        top = n;
    }
}

// Function to remove an item from top of the stack.
int MyStack ::pop()
{
    if (top == NULL)
    {
        return -1;
    }
    int val = top->data;
    top = top->next;
    return val;
}


