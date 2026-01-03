#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    map<ll, vector<int>> a7, a5, a3;
    rep(i, n)
    {
        ll a;
        cin >> a;
        if (a % 7 == 0)
        {
            a7[a / 7].push_back(i);
        }
        if (a % 5 == 0)
        {
            a5[a / 5].push_back(i);
        }
        if (a % 3 == 0)
        {
            a3[a / 3].push_back(i);
        }
    }

    ll ans = 0;

    for (auto [key, vec] : a5)
    {
        auto it7 = a7.find(key);
        auto it3 = a3.find(key);
        if (it7 == a7.end() || it3 == a3.end())
            continue;

        auto &v7 = it7->second;
        auto &v3 = it3->second;

        for (auto j : vec)
        {
            ll r7 = v7.end() - lower_bound(v7.begin(), v7.end(), j);
            ll r3 = v3.end() - lower_bound(v3.begin(), v3.end(), j);
            ll l7 = v7.size() - r7;
            ll l3 = v3.size() - r3;
            ans += r7 * r3 + l7 * l3;
        }
    }

    cout << ans << endl;

    return 0;
}