#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    vector<pair<int, int>> sec(n);
    rep(i, n) cin >> sec[i].first >> sec[i].second;

    sort(sec.begin(), sec.end());

    vector<pair<int, int>> ans;
    pair<int, int> cur = {-1, -1};

    for (auto [l, r] : sec)
    {
        int cl = cur.first, cr = cur.second;

        if (cl == -1)
        {
            cur = {l, r};
            continue;
        }

        if (l > cr)
        {
            ans.push_back(cur);
            cur = {l, r};
            continue;
        }
        if (r > cr)
        {
            cur.second = r;
        }
    }
    ans.push_back(cur);

    for (auto [l, r] : ans)
    {
        cout << l << " " << r << endl;
    }

    return 0;
}
