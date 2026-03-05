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
    vector<double> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    double ans = 0;
    double m = a[n / 2] / 2;
    rep(i, n)
    {
        ans += m + a[i] - min(a[i], 2 * m);
    }
    cout << fixed << setprecision(10) << ans / n << endl;
    return 0;
}