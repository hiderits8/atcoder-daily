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
        double a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        double p = a + b + c + d + (e * 110 / 900);
        if (p > max)
        {
            max = p;
        }
    }

    cout << fixed << setprecision(15) << max << endl;

    return 0;
}