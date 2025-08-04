#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n, q;
    string s;
    cin >> n >> s >> q;
    unordered_map<char, char> mp;

    while (q--)
    {
        char c, d;
        cin >> c >> d;
        bool has = false;
        for (auto &[from, to] : mp)
        {
            if (from == c)
                has = true;
            if (to == c)
            {
                to = d;
            }
        }
        if (!has)
            mp[c] = d;
    }

    for (auto &ch : s)
    {
        for (auto &[f, t] : mp)
        {
            if (ch == f)
            {
                ch = t;
                break;
            }
        }
    }

    cout << s << endl;
    return 0;
}
