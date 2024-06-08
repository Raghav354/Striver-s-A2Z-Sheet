stack<long long> s;
long long minEle = -1;

MinStack() {}

void push(int x)
{
    long long val = x;
    if (s.size() == 0)
    {
        s.push(val);
        minEle = val;
    }
    else if (val >= minEle)
    {
        s.push(val);
    }
    else
    {
        long long tempVal = 2 * val - minEle;
        s.push(tempVal);
        minEle = val;
    }
}

void pop()
{
    if (s.top() >= minEle)
    {
        s.pop();
    }
    else
    {
        minEle = 2 * minEle - s.top();
        s.pop();
    }
}

int top()
{
    if (s.top() >= minEle)
    {
        return s.top();
    }
    else
    {
        return minEle;
    }
}

int getMin()
{
    if (s.size() == 0)
    {
        return -1;
    }
    return minEle;
}