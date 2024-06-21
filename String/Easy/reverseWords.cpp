string reverseWords(string s)
{
    string temp = "";
    stack<string> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            if (temp.size() > 0)
                st.push(temp);
            temp.clear();
        }
        else
        {
            temp += s[i];
        }
    }
    if (temp.size() > 0)
        st.push(temp);
    temp.clear();
    while (!st.empty())
    {
        temp += st.top();
        if (st.size() != 1)
            temp += " ";
        st.pop();
    }
    return temp;
}