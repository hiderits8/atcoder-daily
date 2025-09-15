#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    string ans;

    while (n > 0)
    {
        n--;
        ans = char('a' + n % 26) + ans;
        n /= 26;
    }

    cout << ans << endl;

    return 0;
}