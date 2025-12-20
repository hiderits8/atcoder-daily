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
const ll MOD = 998244353;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> A(n), B(m);
    rep(i, n) cin >> A[i];
    rep(i, m) cin >> B[i];

    sort(B.begin(), B.end());
    vector<ll> sumB(m + 1, 0);
    rep(i, m) sumB[i + 1] = sumB[i] + B[i];

    ll ans = 0;
    for (ll a : A)
    {
        ll k = lower_bound(B.begin(), B.end(), a) - B.begin();
        ll left = sumB[k];
        ll right = sumB[m] - sumB[k];
        ans += (a * k - left);
        ans %= MOD;
        ans += (right - a * (m - k));
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}