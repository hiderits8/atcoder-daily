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
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll a = 1; a * a * a <= n; ++a)
    {
        for (ll b = a; a * b * b <= n; ++b)
        {
            ans += n / (a * b) - b + 1;
        }
    }
    cout << ans << endl;
    return 0;
}