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
    while (n % 2 == 0)
    {
        n /= 2;
    }
    ll sqrt_n = sqrt(n);
    ll ans = 0;
    for (ll i = 1; i <= sqrt_n; i++)
    {
        if (n % i == 0)
        {
            ans++;
            if (i * i != n)
            {
                ans++;
            }
        }
    }
    cout << ans * 2 << endl;
    return 0;
}