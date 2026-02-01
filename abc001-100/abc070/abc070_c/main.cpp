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
#include <climits>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> t(n);
    rep(i, n) cin >> t[i];
    ll ans = 1;
    rep(i, n) ans = lcm(ans, t[i]);
    cout << ans << endl;
    return 0;
}