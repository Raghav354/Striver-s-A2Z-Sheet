int maxDepth(string s)
{
    stack<char> st;
    int ans = 0, c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == '(')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            st.pop();
        }
        if (st.size() > ans)
        {
            ans = st.size();
        }
    }
    return ans;
}

