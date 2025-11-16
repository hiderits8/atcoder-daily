#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);

    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
    }

    set<int> s;
    deque<int> next;
    int ans = 0;

    auto cnt = [&](auto &self, int x) -> int
    {
        s.insert(x);
        for (auto p : g[x])
            next.push_back(p);
        while (!next.empty())
        {
            int cur = next.back();
            next.pop_back();
            if (s.count(cur))
                continue;
            self(self, cur);
        }
        return s.size();
    };

    rep(i, n)
    {
        ans += cnt(cnt, i);
        s.clear();
        next.clear();
    }

    cout << ans << endl;

    return 0;
}
