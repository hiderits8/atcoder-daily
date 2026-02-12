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

bool is_palindrome(ll x, int a)
{
    string s;
    while (x)
    {
        s += (x % a) + '0';
        x /= a;
    }
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main()
{
    int a;
    ll n;
    cin >> a >> n;
    ll ans = 0;
    auto check = [&](string s)
    {
        ll x = stoll(s);
        if (x <= n && is_palindrome(x, a))
            ans += x;
    };
    for (ll x = 1; x < 1e6; x++)
    {
        string s = to_string(x);
        string t = s;
        reverse(t.begin(), t.end());
        s += t;

        check(s);
        s.erase(s.begin() + (s.size() / 2));
        check(s);
        if (stoll(s) > n)
            break;
    }

    cout << ans << endl;
    return 0;
}