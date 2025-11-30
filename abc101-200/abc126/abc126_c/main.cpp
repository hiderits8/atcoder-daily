#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;

    double ans = 0.0;
    for (int i = 1; i <= n; i++)
    {
        double p = 1.0;
        long long x = i;
        while (x < k)
        {
            x *= 2;
            p *= 0.5;
        }
        ans += p;
    }

    ans /= (double)n;
    printf("%.15f\n", ans);
    return 0;
}