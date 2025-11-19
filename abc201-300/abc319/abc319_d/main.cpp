#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<int> l(n);
    rep(i, n)
    {
        cin >> l[i];
        l[i]++;
    }

    auto it = max_element(l.begin(), l.end());
    ll lower = *it - 1;
    ll upper = 0;
    rep(i, n) upper += l[i];

    while (lower + 1 < upper)
    {
        ll middle = (lower + upper) / 2;

        int rows = 1;
        ll length = 0;
        rep(i, n)
        {
            length += l[i];
            if (length > middle)
            {
                rows++;
                length = l[i];
            }
        }

        if (rows > m)
        {
            lower = middle;
        }
        else
        {
            upper = middle;
        }
    }

    cout << upper - 1 << endl;

    return 0;
}
