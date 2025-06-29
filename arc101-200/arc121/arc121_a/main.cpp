#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v;
    set<int> ids;

    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        v.emplace_back(vector<int>{x, y, i});
    }

    for (int i = 0; i < 2; ++i)
    {
        sort(v.begin(), v.end());

        ids.insert(v[0][2]);
        ids.insert(v[n - 1][2]);
        ids.insert(v[1][2]);
        ids.insert(v[n - 2][2]);

        for (auto &a : v)
        {
            swap(a[0], a[1]);
        }
    }

    vector<pair<int, int>> v2;
    for (auto &vi : v)
    {
        if (ids.count(vi[2]) != 0)
        {
            v2.emplace_back(vi[0], vi[1]);
        }
    }

    vector<ll> ans;

    for (int i = 0; i < v2.size(); ++i)
    {
        for (int j = i + 1; j < v2.size(); ++j)
        {
            ans.push_back(max(abs(v2[i].first - v2[j].first), abs(v2[i].second - v2[j].second)));
        }
    }

    sort(ans.rbegin(), ans.rend());
    cout << ans[1] << endl;

    return 0;
}