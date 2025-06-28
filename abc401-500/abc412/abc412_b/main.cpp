#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;
    set<char> st;
    for (int i = 1; i < s.size(); ++i)
    {
        if (isupper(s[i]))
        {
            st.insert(s[i - 1]);
        }
    }

    for (auto stch : st)
    {
        bool ok = false;
        for (auto ch : t)
        {
            if (ch == stch)
            {
                ok = true;
                break;
            }
        }
        if (!ok)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}