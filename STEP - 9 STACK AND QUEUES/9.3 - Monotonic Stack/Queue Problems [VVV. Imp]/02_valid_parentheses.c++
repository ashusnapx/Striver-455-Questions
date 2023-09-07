bool isValidParenthesis(string s)
{
    int n = s.size();
    stack<char> st;
    int i, count = 0;
    for(i = 0; i < n; ++i)
    {
        if(s[i] == '(' or s[i] == '[' or s[i] == '{')
        {
            st.push(s[i]);
            ++count;
        }
        else
        {
            if(!st.empty() and 
            (st.top() == '(' and s[i]== ')' 
            or st.top() == '[' and s[i] == ']' 
            or st.top() == '{' and s[i] == '}'))
            {
                st.pop();
            }
        }
    }

    if(i == s.size() and st.empty() and count!=0)
    {
        return true;
    }
    return false;
}


// best approach
unordered_map<char, int> symbols = {
		{
        '{',
        -1
    },
    {
        '}',
        1
    },
    {
        '[',
        -2
    },
    {
        ']',
        2
    },
    {
        '(',
        -3
    },
    {
        ')',
        3
    }
};
bool isValidParenthesis(string s)
{
    stack<char> st;
    for (char brackets: s)
    {
        if (symbols[brackets] < 0)
        {
            st.push(brackets);
        }
        else
        {
          if(st.empty()) return false;
          char top = st.top();
          st.pop();

          if(symbols[top] + symbols[brackets] != 0) return false;
        }
    }
    if(st.empty()) return true;
    return false;
}