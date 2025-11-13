#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int w, h, x, y;
    cin >> w >> h >> x >> y;

    printf("%.6f ", (double)(w)*h / 2);

    if (w == 0 || h == 0 || (2 * x == w && y * 2 == h))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
