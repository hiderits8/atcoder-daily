#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> w(m, 0);
    vector<int> cnt(m);
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        a--;
        w[a] += b;
        cnt[a]++;
    }

    rep(i, m)
    {
        double ans;
        ans = (double)w[i] / cnt[i];
        printf("%.10f\n", ans);
    }

    return 0;
}