#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i];
    b = a;

    int r = n / k;
    sort(b.begin(), b.end());

    rep(i, k)
    {
        multiset<int> as, bs;
        rep(j, r + 1)
        {
            int idx = i + j * k;
            if (idx < n)
            {
                as.insert(a[idx]);
                bs.insert(b[idx]);
            }
        }
        if (as != bs)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
