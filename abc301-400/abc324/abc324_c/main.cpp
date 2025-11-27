#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

bool oneInsert(string a, string b)
{
    if (a.size() > b.size())
        swap(a, b);
    if (a.size() + 1 != b.size())
        return false;

    int i = 0, j = 0;
    bool used = false;

    while (i < a.size() && j < b.size())
    {
        if (a[i] == b[j])
        {
            i++;
            j++;
        }
        else
        {
            if (used)
                return false;
            used = true;
            j++;
        }
    }
    return true;
}

int main(void)
{
    int n;
    string t;
    cin >> n >> t;
    vector<int> ans;
    rep(i, n)
    {
        string s;
        cin >> s;
        bool ok = false;

        if (s.size() == t.size() + 1)
        {
            ok = oneInsert(s, t);
        }
        else if (s.size() == t.size() - 1)
        {
            ok = oneInsert(t, s);
        }
        else if (s.size() == t.size())
        {
            int diff = 0;
            rep(i, s.size()) if (s[i] != t[i]) diff++;
            ok = (diff <= 1);
        }
        else
        {
            continue;
        }
        if (ok)
        {
            ans.push_back(i + 1);
        }
    }

    bool first = true;
    cout << ans.size() << endl;
    for (int a : ans)
    {
        if (!first)
        {
            cout << " ";
        }
        cout << a;
        first = false;
    }
    cout << endl;

    return 0;
}
