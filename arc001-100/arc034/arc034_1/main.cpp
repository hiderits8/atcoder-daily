#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    double max = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        int p = (double)(a + b + c + d) + (double)(e * 110 / 900);
        if (p > max)
        {
            max = p;
        }
    }

    cout << fixed << setprecision(15) << max << endl;

    return 0;
}