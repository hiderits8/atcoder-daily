#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    string s, t;
    cin >> s >> t;

    int size = s.size();
    if (t.size() != size)
    {
        cout << -1 << endl;
        return 0;
    }

    int ans = 0;
    while (ans < size)
    {
        bool ok = true;
        for (int i = 0; i < size; ++i)
        {
            int cur = (i + size - ans) % size;
            if (s[cur] != t[i])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << ans << endl;
            return 0;
        }
        ans++;
    }
    cout << -1 << endl;
    return 0;
}
