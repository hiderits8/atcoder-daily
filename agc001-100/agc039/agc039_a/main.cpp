#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    string s;
    ll k;
    cin >> s >> k;
    vector<int> cont;

    int cnt = 1;
    int n = s.size();
    bool is_onechar = true;

    for (int i = 1; i < n; ++i)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
        else
        {
            cont.push_back(cnt);
            cnt = 1;
        }

        if (is_onechar && s[i] != s[0])
            is_onechar = false;
    }
    cont.push_back(cnt);

    if (is_onechar)
    {
        cout << 1LL * (n * k) / 2 << endl;
        return 0;
    }

    int part = 0;
    for (auto c : cont)
        part += c / 2;

    ll ans = 1LL * part * k;

    if (s[0] != s[n - 1])
    {
        cout << ans << endl;
    }
    else
    {
        ll a = cont.front();
        ll b = cont.back();
        ans -= (a / 2 + b / 2 - (a + b) / 2) * (k - 1);
        cout << ans << endl;
    }

    return 0;
}
