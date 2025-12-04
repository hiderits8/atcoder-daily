#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const string S = "MARCH";

int main(void)
{
    int n;
    cin >> n;
    unordered_map<char, int> mp;
    rep(i, n)
    {
        string s;
        cin >> s;
        mp[s[0]]++;
    }

    ll ans = 0;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = i + 1; j < 4; ++j)
        {
            for (int k = j + 1; k < 5; ++k)
            {
                ans += 1LL * mp[S[i]] * mp[S[j]] * mp[S[k]];
            }
        }
    }

    cout << ans << endl;

    return 0;
}
