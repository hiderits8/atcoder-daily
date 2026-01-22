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
    string s;
    cin >> n >> s;
    vector<pair<ll, char>> a(n);
    int ans = 0;

    rep(i, n)
    {
        ll w;
        cin >> w;
        a[i] = {w, s[i]};
        if (s[i] == '1')
            ans++;
    }

    int tmp = ans;

    sort(a.begin(), a.end());
    rep(i, n)
    {
        if (a[i].second == '1')
        {
            tmp--;
        }
        else
        {
            tmp++;
        }

        if (i < n - 1 && a[i].first == a[i + 1].first)
            continue;
        ans = max(ans, tmp);
    }
    cout << ans << endl;

    return 0;
}