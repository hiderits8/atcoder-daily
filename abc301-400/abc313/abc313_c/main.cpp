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
    ll sum = 0;
    rep(i, n) cin >> a[i], sum += a[i];
    sort(a.begin(), a.end());
    vector<int> b(n, sum / n);
    for (int i = 0; i < sum % n; i++)
    {
        b[n - 1 - i]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += abs(a[i] - b[i]);
    }
    cout << ans / 2 << endl;
    return 0;
}