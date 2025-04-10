#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, k, d;
    cin >> x >> k >> d;
    x = abs(x);

    long long cnt = min(k, x / d);
    x -= cnt * d;
    k -= cnt;

    if (k % 2 == 1)
    {
        cout << d - x << endl;
    }
    else
    {
        cout << x << endl;
    }

    return 0;
}