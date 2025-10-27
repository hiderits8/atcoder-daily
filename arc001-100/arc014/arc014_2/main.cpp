#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    unordered_set<string> st;
    char prev;
    rep(i, n)
    {
        string s;
        cin >> s;
        if (st.contains(s) || (i != 0 && s[0] != prev))
        {
            if (i % 2 == 0)
            {
                cout << "LOSE\n";
            }
            else
            {
                cout << "WIN\n";
            }
            return 0;
        }
        st.insert(s);
        prev = s.back();
    }

    cout << "DRAW\n";
    return 0;
}
