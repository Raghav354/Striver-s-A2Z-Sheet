void MyStack ::push(int x)
{
    if (top == 999)
    {
        return;
    }
    top++;
    arr[top] = x;
}

// Function to remove an item from top of the stack.
int MyStack ::pop()
{
    if (top == -1)
    {
        return -1;
    }
    int ele = arr[top];
    top--;
    return ele;
}