#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> mp(n);
    rep(i, n) cin >> mp[i];

    set<vector<string>> s;
    rep(i, n - m + 1) rep(j, n - m + 1)
    {
        vector<string> tmp(m);
        rep(k, m) tmp[k] = mp[i + k].substr(j, m);

        s.insert(tmp);
    }

    cout << s.size() << endl;

    return 0;
}