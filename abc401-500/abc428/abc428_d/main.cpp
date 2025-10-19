#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ull = unsigned long long;

ull sq_floor(ull x)
{
    return (ull)floor(sqrt((long double)x));
}

ull count_square(ull l, ull r)
{
    return sq_floor(r) - sq_floor(l - 1);
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ull c, d;
        cin >> c >> d;

        ull ma = c + d;
        ull ans = 0;
        string sc = to_string(c);

        ull mi = stoull(sc + sc);
        }
    return 0;
}