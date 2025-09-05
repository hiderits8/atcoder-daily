#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<int> t(n), k(n);
    vector<vector<int>> a(n);

    rep(i, n)
    {
        cin >> t[i] >> k[i];
        a[i].resize(k[i]);
        rep(j, k[i])
        {
            cin >> a[i][j];
            a[i][j]--;
        }
    }

    ll ans = 0;
    set<int> need;
    need.insert(n - 1);
    queue<int> next;

    for (auto ai : a[n - 1])
    {
        next.push(ai);
    }

    while (!next.empty())
    {
        int cur = next.front();
        next.pop();

        if (!need.contains(cur))
        {
            need.insert(cur);
            for (auto ai : a[cur])
            {
                next.push(ai);
            }
        }
    }

    for (auto ni : need)
    {
        ans += t[ni];
    }

    cout << ans << endl;

    return 0;
}
