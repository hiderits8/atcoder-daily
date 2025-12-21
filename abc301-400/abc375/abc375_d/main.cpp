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
    string s;
    cin >> s;
    vector<vector<int>> mp(26);

    rep(i, s.size()) mp[s[i] - 'A'].push_back(i);

    ll ans = 0;
    rep(i, 26)
    {
        auto &pos = mp[i];
        int sz = mp[i].size();
        vector<ll> sum(sz + 1, 0);
        rep(j, sz) sum[j + 1] = sum[j] + pos[j];
        rep(j, sz) ans += 1LL * j * pos[j] - sum[j] - j;
    }

    cout << ans << endl;

    return 0;
}