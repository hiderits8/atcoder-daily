#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    ll even = 0, odd = 0;

    rep(i, n)
    {
        cin >> s[i];
        int cnt1 = 0;
        rep(j, m)
        {
            if (s[i][j] == '1')
                cnt1++;
        }
        if (cnt1 % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << even * odd << endl;

    return 0;
}