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
    vector<ll> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];
    set<pair<ll, ll>> st;
    rep(i, n) rep(j, n)
    {
        if (i == j)
            continue;
        ll g = gcd(x[j] - x[i], y[j] - y[i]);
        ll dx = (x[j] - x[i]) / g;
        ll dy = (y[j] - y[i]) / g;
        st.insert({dx, dy});
    }
    cout << st.size() << endl;
    return 0;
}