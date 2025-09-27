#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    
    vector<ll> sum(n + 1);
    sum[0] = 0;
    rep(i, n) sum[i + 1] = sum[i] + a[i];

    ll offset = 0;

    while(q--) {
         int t;
         cin >> t;
         if(t == 1) {
            ll c;
            cin >> c;
            offset += c;
            // cout << "offset: " << offset << endl;
         } else if(t == 2) {
            ll l, r;
            cin >> l >> r;
            l--;
            r--;
            l = (l + offset) % n + 1;
            r = (r + offset) % n + 1;
            // cout << "l: " << l << ", r: " << r << endl;
            if(l > r) {
                cout << sum[n] - sum[l - 1] + sum[r] << endl;
            } else {
                cout << sum[r] - sum[l - 1] << endl;
            }
         }
    }

    return 0;
}