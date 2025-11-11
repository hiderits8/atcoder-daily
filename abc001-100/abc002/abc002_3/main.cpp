#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

struct v
{
    int x, y;
};

int main(void)
{
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    v ab, ac;
    ab.x = xb - xa;
    ab.y = yb - ya;
    ac.x = xc - xa;
    ac.y = yc - ya;

    int cross = ab.x * ac.y - ab.y * ac.x;
    double area = abs(cross) / 2.0;

    printf("%.2f\n", area);
}
