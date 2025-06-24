#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    cin >> s;
    vector<bool> seen(26, false);
    stack<vector<char>> st;

    for (char c : s)
    {
        if (c == '(')
        {
            st.push({});
        }
        else if (c == ')')
        {
            for (char a : st.top())
            {
                seen[a - 'a'] = false;
            }
            st.pop();
        }
        else
        {
            if (seen[c - 'a'])
            {
                cout << "No" << endl;
                return 0;
            }
            seen[c - 'a'] = true;
            if (st.empty())
            {
                st.push({});
            }
            st.top().push_back(c);
        }
    }

    cout << "Yes" << endl;

    return 0;
}
