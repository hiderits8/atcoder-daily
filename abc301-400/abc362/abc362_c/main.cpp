#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<int> l(n), r(n);

    rep(i, n)
    {
        cin >> l[i] >> r[i];
        if (r[i] < l[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }

    ll minsum = accumulate(l.begin(), l.end(), 0LL), maxsum = accumulate(r.begin(), r.end(), 0LL);
    if (maxsum < 0 || minsum > 0)
    {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    vector<int> ans = l;
    ll need = abs(minsum);

    rep(i, n)
    {
        int cur = r[i] - l[i];
        if (need > cur)
        {
            ans[i] += cur;
            need -= cur;
        }
        else
        {
            ans[i] += need;

            rep(j, n)
            {
                if (j != 0)
                    cout << " ";
                cout << ans[j];
            }
            cout << endl;
            return 0;
        }
    }

    return 0;
}
