
// Implementation using two stack.
stack<int> input, output;

void enqueue(int x)
{
    while (!input.empty())
    {
        output.push(input.top());
        input.pop();
    }
    input.push(x);
    while (!output.empty())
    {
        input.push(output.top());
        output.pop();
    }
}

int dequeue()
{
    if (input.empty())
        return -1;
    int top = input.top();
    input.pop();
    return top;
}