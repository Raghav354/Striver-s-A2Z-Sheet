// Function to push an element into stack using two queues.
void QueueStack ::push(int x)
{
    q2.push(x);
    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    queue<int> q;
    q = q1;
    q1 = q2;
    q2 = q;
}

// Function to pop an element from stack using two queues.
int QueueStack ::pop()
{
    if (q1.empty())
        return -1;

    int val = q1.front();
    q1.pop();
    return val;
}









// Using single queue

class MyStack
{
private:
    queue<int> q;

public:
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
        int n = q.size();
        for (int i = 0; i < n - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop()
    {
        if (q.empty())
        {
            return -1;
        }
        int val = q.front();
        q.pop();
        return val;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};