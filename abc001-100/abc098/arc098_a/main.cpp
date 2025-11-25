#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    string s;
    cin >> n >> s;

    vector<int> e(n + 1, 0), w(n + 1, 0);
    rep(i, n)
    {
        e[i + 1] = e[i];
        w[i + 1] = w[i];
        if (s[i] == 'E')
        {
            e[i + 1]++;
        }
        else
        {
            w[i + 1]++;
        }
    }

    int ans = n + 1;

    rep(i, n)
    {
        int c = w[i] + e[n] - e[i + 1];
        ans = min(ans, c);
    }

    cout << ans << endl;

    return 0;
}
