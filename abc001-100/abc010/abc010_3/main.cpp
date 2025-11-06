#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    double txa, tya, txb, tyb, t, v;
    cin >> txa >> tya >> txb >> tyb >> t >> v;
    int n;
    cin >> n;

    double mi = 1LL << 60;

    while (n--)
    {
        double x, y;
        cin >> x >> y;
        double t1 = sqrt((x - txa) * (x - txa) + (y - tya) * (y - tya));
        double t2 = sqrt((x - txb) * (x - txb) + (y - tyb) * (y - tyb));
        mi = min(mi, t1 + t2);
    }
    if (mi <= t * v)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
