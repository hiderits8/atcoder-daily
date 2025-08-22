#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ull = unsigned long long;

int main(void)
{
    ull a, b, c, d;
    cin >> a >> b >> c >> d;

    ull sb, sa;

    if (c % d == 0)
    {
        sb = b / d;
        sa = (a - 1) / d;
        cout << b - a + 1 - (sb - sa) << endl;
        return 0;
    }
    else if (d % c == 0)
    {
        sb = b / c;
        sa = (a - 1) / c;
        cout << b - a + 1 - (sb - sa) << endl;
        return 0;
    }

    ull l = lcm(c, d);
    sb = b / c + b / d - b / l;
    sa = (a - 1) / c + (a - 1) / d - (a - 1) / l;
    cout << b - a + 1 - (sb - sa) << endl;

    return 0;
}
