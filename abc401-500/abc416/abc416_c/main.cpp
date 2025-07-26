#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    ll x;
    cin >> n >> k >> x;
    vector<string> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<string> all;
    string cur;

    function<void(int, string &)> dfs = [&](int depth, string &cur)
    {
        if (depth == k)
        {
            all.push_back(cur);
            return;
        }
        for (int i = 0; i < n; ++i)
        {
            int sz = cur.size();
            cur += a[i];
            dfs(depth + 1, cur);
            cur.resize(sz);
        }
    };

    dfs(0, cur);
    sort(all.begin(), all.end());

    cout << all[x - 1] << endl;

    return 0;
}