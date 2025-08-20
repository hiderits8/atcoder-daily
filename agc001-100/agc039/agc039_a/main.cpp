#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    string s;
    int k;
    cin >> s >> k;
    vector<int> cont;

    int cnt = 0;
    int n = s.size();
    bool is_onechar = true;
    char prev = 'A';
    rep(i, n)
    {
        if (prev == 'A' || s[i] != prev)
        {
            if (cnt > 1)
                cont.push_back(cnt);
            cnt = 1;
            prev = s[i];
        }
        else
        {
            cnt++;
            if (i == n - 1 && cnt > 1)
                cont.push_back(cnt);
        }

        if (is_onechar && s[i] != s[0])
            is_onechar = false;
    }

    if (is_onechar)
    {
        cout << 1LL * (n / 2) * k << endl;
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
        int a = !cont.empty() ? cont.front() : 1;
        int b = !cont.empty() ? cont.back() : 1;
        ans -= (a / 2 + b / 2 - (a + b) / 2) * k;
        cout << ans << endl;
    }

    return 0;
}
