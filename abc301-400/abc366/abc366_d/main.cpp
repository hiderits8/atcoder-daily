#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<vector<vector<ll>>> cube(n, vector<vector<ll>>(n, vector<ll>(n)));
    rep(x, n) rep(y, n) rep(z, n) cin >> cube[x][y][z];

    vector<vector<vector<ll>>> sum(n + 1, vector<vector<ll>>(n + 1, vector<ll>(n + 1, 0)));
    rep(x, n) rep(y, n) rep(z, n)
    {
        sum[x + 1][y + 1][z + 1] = sum[x][y + 1][z + 1] +
                                   sum[x + 1][y][z + 1] +
                                   sum[x + 1][y + 1][z] -
                                   sum[x][y][z + 1] -
                                   sum[x][y + 1][z] -
                                   sum[x + 1][y][z] +
                                   sum[x][y][z] +
                                   cube[x][y][z];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int lx, rx, ly, ry, lz, rz;
        cin >> lx >> rx >> ly >> ry >> lz >> rz;
        lx--;
        ly--;
        lz--;

        cout << sum[rx][ry][rz] -
                    sum[lx][ry][rz] -
                    sum[rx][ly][rz] -
                    sum[rx][ry][lz] +
                    sum[lx][ly][rz] +
                    sum[lx][ry][lz] +
                    sum[rx][ly][lz] -
                    sum[lx][ly][lz]
             << endl;
    }

    return 0;
}
