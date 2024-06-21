string removeOuterParentheses(string s)
{
    stack<char> st;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == '(')
        {
            if (st.size() >= 1)
            {
                ans.push_back(ch);
            }
            st.push(ch);
        }
        else
        {
            if (st.size() > 1)
            {
                ans.push_back(')');
            }
            st.pop();
        }
    }
    return ans;
}